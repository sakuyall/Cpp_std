/*
6/14/26=====================================================================
一维数组实例 冒泡排序 进行升序排列, 范围i逐渐缩小
*/
#include <iostream>
using namespace std;

int main() {
    int len = 9;
    int arr[len] = { 4, 2, 8, 0, 5, 7, 1, 3, 9 };
    cout << "Origin array: ";
    for (int i = 0; i < len; i ++) {
        cout << arr[i] << " ";
    }
    
    // 总排序轮数为数组长度减1
    for (int i = 0; i < len - 1; i ++) {
        // 内层循环对比次数
        for (int j = 0; j < len - 1 - i; j ++) {
            // 若第一个数字比第二个大则交换它们
            if (arr[j] > arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
    cout << endl;
    cout << "Final array: ";
    for (int i = 0; i < len; i ++) {
        cout << arr[i] << " ";
    }
}