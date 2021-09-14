# Level 1

In this level, you will be writing some simple functions to compute statistics. The directory contains the following
files:

- stats.c: This is the main C source file that will contain code for the functions. You will need to modify this file.
- stats.h: This is the main header file for this directory. In order to use the functions, the header file must first
    be included (otherwise the compiler will complain).
- Makefile: The makefile uses the make program to compile the C programs. To use this file, you can run two commands in
    this directory:
    * `make` will compile the programs `make clean` will clean things up
- test_two_averages.c: This file contains various test cases that can be used to help you implement Level 1 Part A,
    compute averages over two numbers
- test_array_averages.c: This file contains various test cases that can be used to help you implement Level 1 Part B,
    compute averages over an array

## Level 1 Part A

For this part, you will implement a function that counts the number of elements in an array greater than another number.
The function definition looks like the following:

   int find_greater(int array[], int array_len, int x);

and should return a number.

To test this function, there is a set of unit tests provided in test_find_greater.c. To run this test:

	./test_find_greater

And a successful implementation should output something like the following:

    test_find_greater.c:13:test_zeros:PASS
    test_find_greater.c:22:test_one_two_returns_two:PASS
    test_find_greater.c:31:test_one_two_returns_one:PASS
    test_find_greater.c:40:test_one_two_returns_none:PASS
    test_find_greater.c:48:test_null_array:PASS

    -----------------------
    5 Tests 0 Failures 0 Ignored

A failing test case would look something like this:

    test_find_greater.c:13:test_zeros:FAIL: Expected 0 Was -520506220
    test_find_greater.c:22:test_one_two_returns_two:FAIL: Expected 2 Was -520506224
    test_find_greater.c:31:test_one_two_returns_one:FAIL: Expected 1 Was -520506224
    test_find_greater.c:40:test_one_two_returns_none:FAIL: Expected 0 Was -520506224
    test_find_greater.c:48:test_null_array:PASS

    -----------------------
    5 Tests 4 Failures 0 Ignored

**NOTE**: Sometimes you may see the following message:

    Segmentation fault (core dumped)

This is due to the array being NULL. Arrays are essentially pointers to contiguous elements, and thus may be NULL. To
get around this you need check against this and return an error, like so:

    if(array == NULL) {
        return - 1;
    }

## Level 1 Part B

For this part, you will implement a function that returns the average over an array of integers. If the array is invalid
(by looking at `array_len`), then the function should return 0.0. The function definition looks like the following:

    float array_averages(int *array, int array_len);

`array` points to an integer array of size `array_len`.

