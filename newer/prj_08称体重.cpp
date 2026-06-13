/*
6/13/26=====================================================================
一维数组实例 称体重, 取出数组最大值
*/
#include <iostream>
using namespace std;

int main() {
    int arr[] = {300, 350, 200, 400, 250};

    int max = 0;
    int idx = -1;
    for (int i = 0; i < 5; i ++) {
        if (arr[i] > max) {
            max = arr[i];
            idx = i;
        }
    }
    printf("The maxium weight is: %d, was find in idx of \"%d\"", max, idx);
}