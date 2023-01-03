//给定一个 n×m 的方格阵，沿着方格的边线走，从左上角 (0,0) 开始，每次只能往右或者往下走一个单位距离，问走到右下角 (n,m) 一共有多少种不同的走法。
//
//输入格式
//共一行，包含两个整数 n 和 m。
//
//输出格式
//共一行，包含一个整数，表示走法数量。
//
//数据范围
//1≤n,m≤10
//输入样例：
//2 3
//输出样例：
//10
#include<iostream>

using namespace std;

int getSumSteps(int n, int m) {
    if(m <= 0 || n <= 0) {
        return -1;
    }
    if(n <= 1 || m <= 1) {
        return n + m;
    }
    // 递归调用
    return getSumSteps(m - 1, n) + getSumSteps(m, n - 1);
}

int main() {
    int n, m;
    cin >> n >> m;

    cout << getSumSteps(n, m);
    return 0;
}
