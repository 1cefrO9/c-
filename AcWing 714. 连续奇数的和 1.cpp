//给定两个整数 X 和 Y，输出在他们之间（不包括 X 和 Y）的所有奇数的和。
//
//输入格式
//第一行输入 X，第二行输入 Y。
//
//输出格式
//输出一个整数，表示所有满足条件的奇数的和。
//
//数据范围
//−100≤X,Y≤100
//输入样例1：
//6
//-5
//输出样例1：
//5
//输入样例2：
//15
//12
//输出样例2：
//13
//输入样例3：
//12
//12
//输出样例3：
//0
#include <iostream>

using namespace std;
int main() {
    int x, y;
    int t = 0, sum = 0;
    cin >> x >> y;
    if(x > y) {
        t = x;
        x = y;
        y = t;
    }
    for(int i = x + 1; i < y; i++) {
        if(i % 2 == 1) {
            sum += i;
        }
    }
    cout << sum;
    return 0;
}
