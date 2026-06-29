/*
6/29/26=====================================================================
利用指针作为函数形参
区别于前边的值传递, 地址传递可以改变实参的数值
*/
#include <iostream>
using namespace std;

void swap02(int *p1, int *p2) {
    // 这里p1储存了&a操作获取到的a的地址
    // 第1步: *p1对p1解引用获得a地址的值, 也就是a, 将它赋给temp

    int temp = *p1;   // 第2步: 把 p2 指向的值赋给 p1 指向的位置
    *p1 = *p2;        // 第3步: 把 temp 的值赋给 p2 指向的位置. 也就是从哪里获取数据并将数据送到哪里
    *p2 = temp;
}

int main() {
    int a = 10;
    int b = 20;

    swap02(&a, &b);
    cout << a << endl;
    cout << b << endl;
}