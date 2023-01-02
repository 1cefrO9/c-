//
//以下数列 0 1 1 2 3 5 8 13 21 ... 被称为斐波纳契数列。
//
//这个数列从第 3 项开始，每一项都等于前两项之和。
//
//输入一个整数 N，请你输出这个序列的前 N 项。
//
//输入格式
//一个整数 N。
//
//输出格式
//在一行中输出斐波那契数列的前 N 项，数字之间用空格隔开。
//
//数据范围
//0<N<46
//输入样例：
//5
//输出样例：
//0 1 1 2 3
#include<iostream>
#include<cstdio>
using namespace std;
int main() {
    int n;
    int a = 0, b = 1, c;
    cin >> n;
    for(int i = 0; i < n; i++) {
        cout << a << ' ';
        c = a + b;
        a = b;
        b = c;
    }
    return 0;
}
