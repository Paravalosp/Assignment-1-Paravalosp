# Level 3

In this level, you will practice working with C-style strings (or 0-terminated strings). Recall that a string in C is
an array of `char`s, with a 0 at the end. This is quite different from strings in other languages, for example strings
in Java. In this level you'll be exercising a number of features unique to C-style strings.

Note: To reduce misunderstanding `size` means the size of an array, whereas `length` means the length of a string
(number of chars).

## Level 3 Part A

For this part, you will implement a function that returns the length of a string. In other languages, the string object
themselves contain the length. However, in C, the length of the string is implicit. As an alternative, one option is to
create a variable that manually holds on to the length. However, sometimes you don't know what the length is (i.e. user
input). In tihs case, you need to look at the data and count, until you find the terminator (denoted as '\0'), but *exclude*
the terminator.

The function definition looks like the following:

    int get_string_length(char* s);

The function should return the length of the string (excluding the terminator!). If `s` is NULL, return -1 instead.

To be a bit more concrete, let's take a look at the following string "Hello". In the computer, this string looks like
the following:

|1|2|3|4|5|6|
|-|-|-|-|-|-|
|H|e|l|l|o|\0|

The array of chars has size 6, *but*, the length of the string is 5.

How about an empty string?

|1|
|-|
|\0|

Thus, the length of the string is 0, although the size of the array is actually 1.

What about `s` being a NULL? Because strings are char arrays, someone can always pass a NULL pointer. In this case, the
function should return -1. Returning a negative length is a commonly used trope to indicate invalid input. If you fail
to properly handle `s` being NULL, you may see output that looks like the following:

    Segmentation fault (core dumped)

You should also document the header file string.h. Example for how to do so can be found in level1/stats.h (essentially
Javadoc-style)

## Level 3 Part B

For this part, you will implement a function that copies a string from one place to another. 

The function definition looks like the following:

    int string_copy(char* dest, char* s, int dest_size);

The function copies the string inside `s` into `dest`. If `s` is too large to fit within `dest`, you should copy only up
to `dest_size` - 1 characters, *not* `dest_size` characters. Why?

The function should return the number of characters copied as its return value. If either `s` or `dest` is NULL, the
function should return 0.

You should also document the header file string.h. Example for how to do so can be found in level1/stats.h (essentially
Javadoc-style).

