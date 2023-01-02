//给定一个浮点数，请你判断该数字属于以下哪个区间：[0,25],(25,50],(50,75],(75,100]。
//
//如果给定的数值小于 0 或大于 100，则程序输出 Fora de intervalo，表示超出范围。
//
//开区间 (a,b)：在实数 a 和实数 b 之间的所有实数，但不包含 a 和 b。
//
//闭区间 [a,b]：在实数 a 和实数 b 之间的所有实数，包含 a 和 b。
//
//输入格式
//输入一个浮点数。
//
//输出格式
//判断输入数值位于哪个区间，按格式 Intervalo x 输出，其中 x 为区间范围 [0,25],(25,50],(50,75],(75,100] 中的一个。
//
//如果数值位于所有区间之外，则输出 Fora de intervalo。
//
//输入样例：
//25.01
//输出样例：
//Intervalo (25,50]
#include<cstdio>
#include<iostream>

using namespace std;

int main() {
    float x;
    cin >> x;
    if(0 <= x && x <= 25) {
        printf("Intervalo [0,25]");
    } else if(25 < x && x <= 50) {
        printf("Intervalo (25,50]");
    } else if(50 < x && x <= 75) {
        printf("Intervalo (50,75]");
    } else if(75 < x && x <= 100) {
        printf("Intervalo (75,100]");
    } else printf("Fora de intervalo");

    return 0;
}
