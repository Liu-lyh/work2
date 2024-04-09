#pragma once
#ifndef MAX_SUBARRAY_SUM_H
#define MAX_SUBARRAY_SUM_H

// 函数声明：计算最大连续子数组和
int max_subarray_sum(int arr[], int n);

// 返回两个数中较大的数
int max(int a, int b) {
    return (a > b) ? a : b;
}

// 计算最大连续子数组和
int max_subarray_sum(int arr[], int n) {
    int max_so_far = arr[0]; // 存储全局最大值，初始为数组的第一个元素
    int max_ending_here = arr[0]; // 存储当前位置的最大值，初始为数组的第一个元素

    for (int i = 1; i < n; i++) {
        max_ending_here = max(arr[i], max_ending_here + arr[i]);
        max_so_far = max(max_so_far, max_ending_here);
    }

    // 如果数组中的所有元素都是负数，则最大子段和定义为0
    if (max_so_far < 0) {
        return 0;
    }

    return max_so_far;
}


#endif /* MAX_SUBARRAY_SUM_H */

