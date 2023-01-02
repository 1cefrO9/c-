//读取三个整数并按升序对它们进行排序。
//
//输入格式
//共一行，包含三个整数。
//
//输出格式
//首先，将三个整数按升序顺序输出，每行输出一个整数。
//
//然后，输出一个空行。
//
//紧接着，将三个整数按原输入顺序输出，每行输出一个整数。
//
//数据范围
//−100≤输入整数≤100,
//输入整数各不相同。
//
//输入样例：
//7 21 -14
//输出样例：
//-14
//7
//21
//
//7
//21
//-14
#include<cstdio>
#include<iostream>
using namespace std;
int main() {
    int x, y, z;
    int x1, x2, x3;
    cin >> x >> y >> z;
    x1 = x;
    x2 = y;
    x3 = z;
    if(x > y && x > z) {
        if(y > z) {
            cout << z << endl;
            cout << y << endl;
            cout << x << endl;
        } else if(z > y) {
            cout << y << endl;
            cout << z << endl;
            cout << x << endl;
        }
    } else if(y > x && y > z) {
        if(x > z) {
            cout << z << endl;
            cout << x << endl;
            cout << y << endl;
        } else if(x < z) {
            cout << x << endl;
            cout << z << endl;
            cout << y << endl;
        }
    } else if(z > x && z > y) {
        if(y > x) {
            cout << x << endl;
            cout << y << endl;
            cout << z << endl;
        } else if(y < x) {
            cout << y << endl;
            cout << x << endl;
            cout << z << endl;
        }
    }
    cout << endl;
    cout << x1 << endl;
    cout << x2 << endl;
    cout << x3 << endl;

    return 0;
}
