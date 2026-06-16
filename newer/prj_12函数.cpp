/*
6/15/26=====================================================================
函数 语法如下:
    返回值类型 函数名 (参数列表) {
        函数体
        return 内容
*/
#include <iostream>
using namespace std;
// 若子函数放于主函数之后, 则需要提前进行声明, 声明可以进行多次
// 由于cpp本身有max函数, 会导致即使不声明也可以用, 所以这里定义为max11
int max11(int a, int b);

// 加法函数
int add(int a, int b) {
    int sum = a + b;
    return sum;
}
// 交换函数, 无返回值使用void
void swap(int num1, int num2) {
    int temp = num1;
    num1 = num2;
    num2 = temp;
}

int main() {
    int a = 2;
    int b = 3;
    cout << max11(a, b) << endl;
    cout << a << b << endl;

    int sum = add(a, b);
    swap(a, b);
    cout << sum << endl;
    // 当进行值传递时, 无论形参发生什么变化, 实参不会发生改变
    // 或者说由于没有返回赋值, 所以该次交换不会影响什么东西
    // 而且局部变量在没有global时也不会影响全局变量
    cout << a << b << endl;
}

// 比较函数
int max11(int a, int b) {
    return a > b ? a : b;
}