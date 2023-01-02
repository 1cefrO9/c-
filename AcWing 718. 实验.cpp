//医学部一共进行了 N 场动物实验。
//
//共有三种小动物可用来实验，分别是青蛙、老鼠和兔子。
//
//每次实验都会选取其中一种动物来参与实验，选取数量若干。
//
//现在请你统计一下医学部一共用了多少小动物，每种分别用了多少，每种动物使用数量占总量的百分比分别是多少。
//
//输入格式
//第一行包含整数 N，表示实验次数。
//
//接下来 N 行，每行包含一个整数 A（表示一次实验使用的小动物的数量）和一个字符 T（表示一次实验使用的小动物的类型，C 表示兔子(coney)，R 表示老鼠(rat)，F 表示青蛙(frog)）。
//
//输出格式
//请你参照输出样例，输出所用动物总数，每种动物的数量，以及每种动物所占百分比。
//
//注意输出百分比时，保留两位小数。
//
//数据范围
//1≤N≤100,
//1≤A≤15
//输入样例：
//10
//10 C
//6 R
//15 F
//5 C
//14 R
//9 C
//6 R
//8 F
//5 C
//14 R
//输出样例：
//Total: 92 animals
//Total coneys: 29
//Total rats: 40
//Total frogs: 23
//Percentage of coneys: 31.52 %
//Percentage of rats: 43.48 %
//Percentage of frogs: 25.00 %
#include<iostream>
#include<cstdio>
using namespace std;
int main() {
    int n;
    int a;
    char t;
    int sum = 0, sum1 = 0, sum2 = 0, sum3 = 0; //sum1表示兔子,sum2表示老鼠,sum3表示青蛙
    double s1, s2, s3;
    cin >> n;
    for(int i = 1; i <= n; i++) {
        cin >> a >> t;
        if(t == 'C')
            sum1 += a;
        else if(t == 'R')
            sum2 += a;
        else
            sum3 += a;
        sum += a;
    }
    s1 = (double)sum1 / (double)sum * 100;
    s2 = (double)sum2 / (double)sum * 100;
    s3 = (double)sum3 / (double)sum * 100;
    cout << "Total: " << sum << " animals" << endl;
    cout << "Total coneys: " << sum1 << endl;
    cout << "Total rats: " << sum2 << endl;
    cout << "Total frogs: " << sum3 << endl;
    printf("Percentage of coneys: %.2lf %\n", s1);
    printf("Percentage of rats: %.2lf %\n", s2);
    printf("Percentage of frogs: %.2lf %\n", s3);
    return 0;
}
