/*
6/29/26=====================================================================
指针 数组 函数 组合案例
封装一个函数, 利用冒泡排序,实现对整型数组的升序排列
int arr[10] = {4, 3, 6, 9, 1, 2, 10, 8, 7, 5};
*/
#include <iostream>
using namespace std;

// 冒泡排序
void BubbleSort(int *arr, int length) {
    for (int i = 0; i < length - 1; i ++) {
        for (int j = 0; j < length - 1 - i; j ++) {
            if (arr[j] > arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

// 打印数组
void PrintArray(int *arr, int length) {
    for (int i = 0; i < length; i ++) {
        cout << arr[i] << " ";    // 语法糖, 其实arr[i] 等价于 *(arr + i)的指针偏移操作
    }
}

int main() {
    // 创建数组与数组长度
    int arr[10] = {4, 3, 6, 9, 1, 2, 10, 8, 7, 5};
    int length = sizeof(arr) / sizeof(arr[0]);

    BubbleSort(arr, length); // 数组名即为首地址
    PrintArray(arr, length);
}