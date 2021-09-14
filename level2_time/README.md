# Level 2

In this level, you will practice using struct types. The type you will be implementing will keep track of time,
using two different member variables. It should look like the following:

| Member       | Type |
|:------------:|:----:|
| Seconds      | int  |
| Milliseconds | int  |

One thing to note about the struct is that it has an invariant. It should make sure that the milliseconds field is >=0
and less than 1000.

THe directory contains the following files:

- time.c: This is the main C source file that will contain code for the functions. You will need to modify this file.
- time.h: This is the main header file for this level. In order to use the functions, the header file must first be
    included (otherwise the compiler will complain). You will need to modify this file as well.
- Makefile: This file uses the make program to compile the C programs.
- test_time_assign.c: This file contains various test cases that can be used to help you implement Level 2 Part A.
- test_time_diff: This file contains various test cases for Level 2 Part B.

## Level 2 Part A

For this part, you will implement a function that acts as a "constuctor" to the struct type. The function definition
looks like the following:

    struct time time_assign(int seconds, int milli);

and should return a new struct with the seconds field and milliseconds field filled in. Note that to preserve the type
invariant, any milliseconds value that's outside of the valid range should adjust the seconds field accordingly. For
example, time_assign(0, 1001) should return 1 second and 1 milliseconds.

You should also document the header file time.h. Example for how to do so can be found in level1/stats.h (essentially
Javadoc-style)

## Level 2 Part B

Fir this part, you will implement a function that will take the difference between to times, and return milliseconds.
The function definition looks like the following:

    int time_diff_in_milli(struct time t1, struct time t2)

and should return t1 - t2. Here again, remember that you should preserve the type invariants and make sure that the
milliseconds field is within bounds.

You should also document the header file time.h. Example for how to do so can be found in level1/stats.h (essentially
Javadoc-style)

