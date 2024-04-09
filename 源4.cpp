#include <stdio.h>
#include<stdlib.h>
#include "unity.h"

// ����Ҫ���Եĺ���
#include "max_subarray_sum.h"

void setUp(void) { }

void tearDown(void) { }

// ��������1����������
void test_positive_sequence(void) {
    int arr[] = { 1, 2, 3, 4, 5 };
    TEST_ASSERT_EQUAL_INT(15, max_subarray_sum(arr, 5));
}
// ��������2����������������
void test_negative_sequence(void) {
    int arr[] = { -2, 11, -4, 13, -5, -2 };
    TEST_ASSERT_EQUAL_INT(20, max_subarray_sum(arr, 6));
}
// ��������3��ȫ��������
void test_all_negative(void) {
    int arr[] = { -1, -2, -3, -4, -5 };
    TEST_ASSERT_EQUAL_INT(0, max_subarray_sum(arr, 5));
}

int main(void) {
    UNITY_BEGIN();
    RUN_TEST(test_positive_sequence);
    RUN_TEST(test_negative_sequence);
    RUN_TEST(test_all_negative);
    system("pause");
    return UNITY_END();

}
