//给定一个长度为 n 的数组 a 和一个整数 size，请你编写一个函数，void reverse(int a[], int size)，实现将数组 a 中的前 size 个数翻转。
//
//输出翻转后的数组 a。
//
//输入格式
//第一行包含两个整数 n 和 size。
//
//第二行包含 n 个整数，表示数组 a。
//
//输出格式
//共一行，包含 n 个整数，表示翻转后的数组 a。
//
//数据范围
//1≤size≤n≤1000,
//1≤a[i]≤1000
//输入样例：
//5 3
//1 2 3 4 5
//输出样例：
//3 2 1 4 5
# include <iostream>
using namespace std;
const int N = 1001;
int a[N];
int main() {
    int n, size;
    cin >> n >> size;
    for(int i = 0; i < n; i ++)cin >> a[i];
    reverse(a, a + size);
    for(int i = 0; i < n; i++) cout << a[i] << " ";
    return 0;
}
