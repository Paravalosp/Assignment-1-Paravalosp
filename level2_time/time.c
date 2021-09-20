#include "time.h"

// TODO: Document time.h

struct time time_assign(int seconds, int milli) {
    // TODO

    while(milli >=1000){
        milli -= 1000;
        seconds++;
    }
    while(milli < 0){
        seconds--;
        milli += 1000;
    }

    struct time t;
        t.seconds = seconds;
        t.milli = milli;
    return t;
    
    }
    


int time_diff_in_milli(struct time t1, struct time t2) {
    //TODO
    int t1sec = t1.milli + (t1.seconds *1000);
    int t2sec = t2.milli + (t2.seconds *1000);
    return t1sec-t2sec;
    

    
}

