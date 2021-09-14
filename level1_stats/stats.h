#ifndef STATS_H
#define STATS_H

/**
 * This function returns the number of elements that are greater than
 * a given number.
 *
 * @param array The integer array.
 * @param array_len The length of the array.
 * @param x The number to compare against
 *
 * @returns The number of elements found to be greater than @x.
 */
int find_greater(int array[], int array_len, int x);

/**
 * This function returns the average of an array of integers. If
 * the array length is invalid, return 0.0.
 *
 * @param array The integer array.
 * @param array_len The length of the array.
 *
 * @returns The arithmetic mean of the numbers, or 0.0 if there
 *          was a problem.
 */
float array_averages(int array[], int array_len);

#endif
