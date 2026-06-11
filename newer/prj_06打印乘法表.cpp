/*
6/11/26=====================================================================
乘法表 循环嵌套实例
*/
#include <iostream>
using namespace std;

int main() {
    for (int i = 1; i < 10; i ++) {
        for (int j = 1; j <= i; j ++) {
            int ans = i * j;
            cout << i << " * " << j << " = " << ans << " ";
            // c风格的写法 printf("%d * %d = %d ", i, j, ans);
            // c++20标准需要format头  cout << format("{} * {} = {} ", i, j, ans) << endl;
            // 当前32位很可能不支持该标准, 建议使用print
        }
        cout << endl;
    }
}