#ifndef GET_TIME_H
#define GET_TIME_H

/**
 * TODO
 */
struct time{
    int seconds;
    int milli;
};

/**
 * TODO
 */
struct time time_assign(int seconds, int milli);

/**
 * TODO
 */
int time_diff_in_milli(struct time t1, struct time t2);
m
#endif
