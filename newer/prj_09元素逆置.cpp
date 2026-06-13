/*
6/13/26=====================================================================
一维数组实例 逆序 依次将起始与结束下标元素互换
*/
#include <iostream>
using namespace std;

int main() {
    int arr[] = {1, 3, 2, 5, 4};
    int start = 0;
    int len = sizeof(arr) / sizeof(arr[0]);
    int end = len - 1;

    int temp = arr[start];
    while (start < end) {
        // 其实就是对撞指针
        temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;

        start ++;
        end --;
    }
    for (int i = 0; i < len; i ++) {
        cout << arr[i] << endl;
    }
        
}