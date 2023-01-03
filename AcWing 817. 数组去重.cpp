//给定一个长度为 n 的数组 a，请你编写一个函数：
//
//int get_unique_count(int a[], int n);  // 返回数组前n个数中的不同数的个数
//输入格式
//第一行包含一个整数 n。
//
//第二行包含 n 个整数，表示数组 a。
//
//输出格式
//共一行，包含一个整数表示数组中不同数的个数。
//
//数据范围
//1≤n≤1000,
//1≤ai≤1000。
//
//输入样例：
//5
//1 1 2 4 5
//输出样例：
//4
#include <iostream>
#include <algorithm>
using namespace std;

int main(void) {
    int n, s[1010], sum = 1;
    cin >> n;
    for(int i = 0; i < n; i++)
        cin >> s[i];

    sort(s, s + n);

    for(int i = 1; i < n; i++) {
        if(s[i] != s[i - 1]) sum++;
    }
    cout << sum;
    return 0;
}
