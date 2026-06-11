/*
6/10/26=====================================================================
while实例猜数字
系统生成随机数-进行猜测-判断并输出过大或过小-直到猜对退出
*/
#include <iostream>
#include <ctime>
using namespace std;

int main() {
    //添加随机数种子按照系统时间进行生成随机数, 需要使用ctime头文件
    srand( (unsigned int)time(NULL) );
    // 生成0-99的伪随机数, + 1就会生成1-100的随机数
    int num = rand()%100 + 1;
    int val = 0;

    while (true) {
        cin >> val;
        if (val > num) {
            cout << "is bigger, again" << endl;
        }
        else if (val < num) {
            cout << "is smaller, again" << endl;
        }
        else {
            cout << "is equal, finished" << endl;
            // 猜对就跳出循环
            break;
        }
    }
}