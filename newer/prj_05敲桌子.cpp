/*
6/11/26=====================================================================
敲桌子 for循环实例
*/
#include <iostream>
using namespace std;

int main() {
    for (int i = 1; i <= 100; i ++) {
        if (i % 7 == 0) {
            cout << "knock knock" << endl;
            continue;
        }
        if ( (i % 10 == 7) || (i / 10 == 7) ) {
            cout << "knock knock" << endl;
            continue;
        }
        
        cout << i << endl;
    }
}