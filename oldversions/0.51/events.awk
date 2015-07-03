# events.awk
# (c) 2002 David Cuny
# process the events.i file and generate events.c and events.h

BEGIN {
    # file to write to
    source = "events.c"
    include = "events.h"

    while (getline < "events.i" > 0 ) {
        if ($1 == "//" || NF == 0) {
            # ignore

        } else if ($1 == "%event") {
            if (NF == 1) {
                theKey = "generic"
            } else {
                theKey = $2
            }

            if (!(theKey in keys)) {
                keys[theKey] = 1
            }

        } else {
            event[$1] = theKey
        }
    }

    # the include file
    print "/*" > include
    print "    Name:       events.h" > include
    print "    Purpose:    Classify wxWindows events" > include
    print "    Author:     David Cuny" > include
    print "    Copyright:  (c) 2002 David Cuny <dcuny@lanset.com>" > include
    print "    Licence:    LGPL" > include
    print > include
    print "    This file is autogenerated by events.awk from events.i" > include
    print "*/" > include
    print > include
    print "int wClassifyEvent(WXTYPE eventType);" > include

    # source banner
    print "/*" > source
    print "    Name:       events.c" > source
    print "    Purpose:    Classify wxWindows events" > source
    print "    Author:     David Cuny" > source
    print "    Copyright:  (c) 2002 David Cuny <dcuny@lanset.com>" > source
    print "    Licence:    LGPL" > source
    print > source
    print "    This file is autogenerated by events.awk from events.i" > source
    print "    Since events are no longer int values, a case statement" > source
    print "    can't be used here." > source
    print "*/" > source
    print > source

    # the header
    print "/* classifyEvent: return index of event class, or -1 if not found */" > source
    print "int wClassifyEvent(WXTYPE eventType)" > source
    print "{" > source

    # order by key
    for (key in keys) {
        printf( "    /* %s */\n", key ) > source

        if (key == "generic") {
            keyVal = "-1"
        } else {
            keyVal = "_" key
        }

        for (e in event) {
            if (event[e] == key) {
                printf ("    if (eventType == %-40s) return %s;\n", e, keyVal ) > source
            }
        }
        print "" > source
    }

    # all other cases
    printf( "    /* probably user defined */\n" ) > source
    printf( "    return -1;\n" ) > source
    printf( "}\n" ) > source
}
