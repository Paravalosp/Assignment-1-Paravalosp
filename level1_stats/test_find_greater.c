#include "unity.h"
#include "stats.h"

void setUp (void) {}
void tearDown (void) {}

/**
 * Test if empty array returns 0
 */
void test_zeros(void) {
    int array[0];
    int result = find_greater(array, 0, 0);
    TEST_ASSERT_EQUAL(0, result);
}

/**
 * Test two array with two greater
 */
void test_one_two_returns_two(void) {
    int array[] = {1, 2};
    int result = find_greater(array, 2, 0);
    TEST_ASSERT_EQUAL(2, result);
}

/**
 * Test two array with one greater
 */
void test_one_two_returns_one(void) {
    int array[] = {1, 2};
    int result = find_greater(array, 2, 1);
    TEST_ASSERT_EQUAL(1, result);
}

/**
 * Test two array with none greater
 */
void test_one_two_returns_none(void) {
    int array[] = {1, 2};
    int result = find_greater(array, 2, 5);
    TEST_ASSERT_EQUAL(0, result);
}

/**
 * Test null array
 */
void test_null_array(void) {
    int result = find_greater(NULL, 2, 5);
    TEST_ASSERT_EQUAL(0, result);
}


/**
 * The main function for this unit test runner
 */
int main(void) {
    UNITY_BEGIN();
    RUN_TEST(test_zeros);
    RUN_TEST(test_one_two_returns_two);
    RUN_TEST(test_one_two_returns_one);
    RUN_TEST(test_one_two_returns_none);
    RUN_TEST(test_null_array);
    return UNITY_END();
}
