//输入 N 对整数对 X,Y，对于每对 X,Y，请你求出它们之间（不包括 X 和 Y）的所有奇数的和。
//
//输入格式
//第一行输入整数 N，表示共有 N 对测试数据。
//
//接下来 N 行，每行输入一组整数 X 和 Y。
//
//输出格式
//每对 X,Y 输出一个占一行的奇数和。
//
//数据范围
//1≤N≤100,
//−1000≤X,Y≤1000
//输入样例：
//7
//4 5
//13 10
//6 4
//3 3
//3 5
//3 4
//3 8
//输出样例：
//0
//11
//5
//0
//0
//0
//12
#include<iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int x, y, t;
    int sum = 0;
    while(n--) {
        cin >> x;
        cin >> y;
        if(x > y) {
            t = x;
            x = y;
            y = t;
        }
        for(int i = x + 1; i < y; i++) {
            if(i % 2 == 1 || i % 2 == -1) {
                sum += i;
            }
        }
        cout << sum << endl;
        sum = 0;
    }
    return 0;
}
