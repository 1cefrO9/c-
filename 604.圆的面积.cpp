//计算圆的面积的公式定义为 A=πR^2。
//
//请利用这个公式计算所给圆的面积。
//
//π 的取值为 3.14159。
//
//输入格式
//输入包含一个浮点数，为圆的半径 R。
//
//输出格式
//输出格式为 A=X，其中 X 为圆的面积，用浮点数表示，保留四位小数。
//
//数据范围
//0<R<10000.00
//输入样例：
//2.00
//输出样例：
//A=12.5664
#include <cstdio>
#include<iostream>


using namespace std;

int main() {
    double A, R;
    double Pi = 3.14159;
    scanf("%lf", &R);
    if (0 < R && R < 10000.00) {
        A = Pi * R * R;
        printf("A=%.4f", A);
    }

    return 0;
}
