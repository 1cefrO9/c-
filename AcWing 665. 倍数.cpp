//读取两个正整数值 A 和 B。
//
//如果其中一个是另一个的整数倍，则输出 Sao Multiplos，否则输出 Nao sao Multiplos。
//
//输入格式
//共一行，两个整数 A 和 B。
//
//输出格式
//按题目所述，输出结果。
//
//数据范围
//0<A,B<100
//输入样例：
//6 24
//输出样例：
//Sao Multiplos
#include<cstdio>
#include<iostream>
using namespace std;
int main() {
    int A, B;
    cin >> A >> B;
    if(A % B == 0 || B % A == 0) {
        printf("Sao Multiplos\n");
    } else {
        printf("Nao sao Multiplos\n");
    }
    return 0;
}
