//
//读取三个浮点数 a,b,c 的值，利用一元二次方程求根公式对方程 ax2+bx+c=0 进行求解。
//
//一元二次方程求根公式为：
//
//x=−b±b2−4ac−−−−−−−√2a
//如果 b2−4ac<0 导致方程无解或 a=0，则输出 Impossivel calcular。
//
//输入格式
//输入三个浮点数 a,b,c。
//
//输出格式
//参照输出格式，输出方程的根，输出结果保留五位小数，如果无解则输出 Impossivel calcular。
//
//两个根可以按任意顺序输出，都算正确。
//
//数据保证不存在只有一个解的情况。
//
//数据范围
//−1000.0≤a,b,c≤1000.0
//输入样例：
//10.0 20.1 5.1
//输出样例：
//R1 = -0.29788
//R2 = -1.71212
#include<cstdio>
#include<iostream>
#include<cmath>
using namespace std;
int main() {
    double a, b, c;
    double r1, r2, D;
    cin >> a >> b >> c;
    D = (b * b - 4 * a * c);
    if(D < 0 || a == 0) {
        cout << "Impossivel calcular";
    } else {
        r1 = (-b + pow(D, 0.5)) / (2 * a);
        r2 = (-b - pow(D, 0.5)) / (2 * a);
        printf("R1 = %.5lf\n", r1);
        printf("R2 = %.5lf", r2);
    }
    return 0;
}
