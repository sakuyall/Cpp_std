/*
6/10/26=====================================================================
*/
#include <iostream>
using namespace std;

int main() {

}
/*
循环与分支 ====================================================================
    if语句  if (条件) { 执行结果 } else if { 另一个执行 } else { 另一个执行 }
            注意不要在if语句后边加分号, 这会导致条件不会被判断而直接执行
            int score = 0;    // 初始化
            cout << "input the score" << endl;
            cin >> score;

            cout << "your score is:" << score << endl;
            if (score > 600) {
                cout << "over 600" << endl;
                if (score > 700) {
                    cout << "master700" << endl;
                }
            }
            else if (score < 600){
                cout << "less than 600" << endl;
            }
            else {
                cout << "is 600" << endl;
            }

    三目运算符 判断条件 ? 为真输出 : 为假输出
            cout << (1 > 0 ? 1 : 0) << endl;
            若运算符过多, 判断条件整体加一个括号, 三目运算符返回的是变量, 可以继续赋值
            如运算后返回变量b, 可直接将运算整体赋值, 等效于将b赋值
    
    switch语句  执行多条件分支语句, 但表达式不可表示区间, 仅能为整型或字符型
                优点是结构清晰, 执行效率高于if, 语法如下:
            swich(表达式) {
                case 结果1:
                    输出内容1;
                    break;    // 退出当前分支, 不加break会一直向下执行
                case 结果2:
                    输出内容2;
                    break;
                default:
                    默认输出;
                    break;
            }

    while语句  while(循环条件) {循环语句}
            int i = 0;
            while (i < 5) {
                cout << i << endl;
                ++i;
            }
    
    do-while语句 do {循环语句} while (循环条件);
                满足循环条件, 执行循环语句
                区别在于, 该语句会先执行一次循环语句, 若后续仍满足循环条件则继续循环
                可以通过以下样例来测试:
                int num = 0;
                do {
                    cout << num << endl;
                    num ++;
                }
                while (num);  // 这里有分号的
                发现先执行一次后, 循环条件变为真, 进入死循环, 若换成while循环则不会执行
    for 语句 for(起始表达式; 条件表达式; 末尾循环体) {循环语句}
            设变量; 判断条件; 执行后的操作
            for (int i = 0; i < 10; i ++) {
                cout << i << endl;
            }

            或者可以拆解为:
            int i = 0;
            for (; ;) {
                if (i < 10) {
                    cout << i << endl;
                    i ++;
                }
            }
    
    嵌套循环 没什么好说的
        for (int i = 0; i < 10; i ++) {
            for (int j = 0; j < 10; j ++) {
                cout << "* ";    // 结尾不换行
            }
            cout << endl;    // 换行
        }
    
    跳转语句 break 用于终止case跳出switch, 跳出单层循环语句
            continue 也没有区别, 提前结束本次循环
            goto 无条件跳转语句 goto Flag; ---> 跳转到Flag: 这没什么用
*/