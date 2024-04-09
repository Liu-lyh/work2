#pragma once
#ifndef MAX_SUBARRAY_SUM_H
#define MAX_SUBARRAY_SUM_H

// ����������������������������
int max_subarray_sum(int arr[], int n);

// �����������нϴ����
int max(int a, int b) {
    return (a > b) ? a : b;
}

// ������������������
int max_subarray_sum(int arr[], int n) {
    int max_so_far = arr[0]; // �洢ȫ�����ֵ����ʼΪ����ĵ�һ��Ԫ��
    int max_ending_here = arr[0]; // �洢��ǰλ�õ����ֵ����ʼΪ����ĵ�һ��Ԫ��

    for (int i = 1; i < n; i++) {
        max_ending_here = max(arr[i], max_ending_here + arr[i]);
        max_so_far = max(max_so_far, max_ending_here);
    }

    // ��������е�����Ԫ�ض��Ǹ�����������ӶκͶ���Ϊ0
    if (max_so_far < 0) {
        return 0;
    }

    return max_so_far;
}


#endif /* MAX_SUBARRAY_SUM_H */

