//#define _crt_secure_no_warnings
//#include <stdio.h>
//#include <stdlib.h>
//
//
//// �����������нϴ����
//int max(int a, int b) {
//    return (a > b) ? a : b;
//}
//
//// ������������������
//int max_subarray_sum(int arr[], int n) {
//    int max_so_far = arr[0]; // �洢ȫ�����ֵ����ʼΪ����ĵ�һ��Ԫ��
//    int max_ending_here = arr[0]; // �洢��ǰλ�õ����ֵ����ʼΪ����ĵ�һ��Ԫ��
//
//    for (int i = 1; i < n; i++) {
//        max_ending_here = max(arr[i], max_ending_here + arr[i]);
//        max_so_far = max(max_so_far, max_ending_here);
//    }
//
//    // ��������е�����Ԫ�ض��Ǹ�����������ӶκͶ���Ϊ0
//    if (max_so_far < 0) {
//        return 0;
//    }
//
//    return max_so_far;
//}
//
//int main() {
//    // ��������1����������
//    int arr1[] = { 1, 2, 3, 4, 5 };
//    printf("��������������Ϊ��%d\n", max_subarray_sum(arr1, 5));
//
//    // ��������2����������������
//    int arr2[] = { -2, 11, -4, 13, -5, -2 };
//    printf("��������������Ϊ��%d\n", max_subarray_sum(arr2, 6));
//
//    // ��������3��ȫ��������
//    int arr3[] = { -1, -2, -3, -4, -5 };
//    printf("��������������Ϊ��%d\n", max_subarray_sum(arr3, 5));
//
//    system("pause");
//    return 0;
//}
