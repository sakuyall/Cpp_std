/*
6/15/26=====================================================================
二维数组实例 考试成绩统计
    chinese    math    english
a   100        100     100
b   90         50      100
c   60         70      80
*/
#include <iostream>
#include <string>
using namespace std;

int main() {
    int arr[3][3] = {{100, 100, 100}, {90, 50, 100}, {60, 70, 80}};
    char names[3] = {'a', 'b', 'c'};
    for (int i = 0; i < 3; i ++) {
        int total = 0;
        for (int j = 0; j < 3; j ++) {
            total += arr[i][j];
        }
        // 字符型用%c, 字符串用%s
        printf("%c's total score is %d\n", names[i], total);
    }
}