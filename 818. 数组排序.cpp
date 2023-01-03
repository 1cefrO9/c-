//给定一个长度为 n 的数组 a 以及两个整数 l 和 r，请你编写一个函数，void sort(int a[], int l, int r)，将 a[l]∼a[r] 从小到大排序。
//
//输出排好序的数组 a。
//
//输入格式
//第一行包含三个整数 n，l，r。
//
//第二行包含 n 个整数，表示数组 a。
//
//输出格式
//共一行，包含 n 个整数，表示排序完成后的数组 a。
//
//数据范围
//0≤l≤r<n≤1000
//输入样例：
//5 2 4
//4 5 1 3 2
//输出样例：
//4 5 1 2 3
#include<iostream>
using namespace std;
int q[1009];
int main() {
    int n, l, r;
    scanf("%d%d%d", &n, &l, &r);
    for(int i = 0; i < n; ++i) {
        scanf("%d", &q[i]);
    }
    sort(q + l, q + r + 1);
    for(int i = 0; i < n; ++i) {
        printf("%d ", q[i]);
    }
    return 0;
}
