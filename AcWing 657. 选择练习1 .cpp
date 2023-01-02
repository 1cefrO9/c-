//读取 4 个整数值 A，B，C 和 D。
//
//如果四个整数同时满足以下条件：
//
//B 大于 C。
//D 大于 A。
//C 和 D 的总和大于 A 和 B 的总和。
//C 和 D 是正值。
//A 是偶数。
//则输出 Valores aceitos，否则，输出 Valores nao aceitos。
//
//输入格式
//输入占一行，包含四个整数 A,B,C,D。
//
//输出格式
//如果输入数值满足题目条件则输出 Valores aceitos，否则输出 Valores nao aceitos。
//
//数据范围
//−100≤A,B,C,D≤100
//输入样例：
//5 6 7 8
//输出样例：
//Valores nao aceitos
#include<cstdio>
#include<iostream>

using namespace std;

int main() {
    int a, b, c, d;
    int flag = 0;
    cin >> a >> b >> c >> d;
    if(b > c) {
        if(d > a) {
            if(c + d > a + b) {
                if(c > 0 && d > 0) {
                    if(a % 2 == 0) {
                        cout << "Valores aceitos";
                        flag = 1;
                    }
                }
            }
        }
    }
    if(flag == 0) {
        cout << "Valores nao aceitos";
    }
    return 0;
}
