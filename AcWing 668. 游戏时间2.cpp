//读取四个整数 A,B,C,D，用来表示游戏的开始时间和结束时间。
//
//其中 A 和 B 为开始时刻的小时和分钟数，C 和 D 为结束时刻的小时和分钟数。
//
//请你计算游戏的持续时间。
//
//比赛最短持续 1 分钟，最长持续 24 小时。
//
//输入格式
//共一行，包含四个整数 A,B,C,D。
//
//输出格式
//输出格式为 O JOGO DUROU X HORA(S) E Y MINUTO(S)，表示游戏共持续了 X 小时 Y 分钟。
//
//数据范围
//0≤A,C≤23,
//0≤B,D≤59
//输入样例1：
//7 8 9 10
//输出样例1：
//O JOGO DUROU 2 HORA(S) E 2 MINUTO(S)
//输入样例2：
//7 7 7 7
//输出样例2：
//O JOGO DUROU 24 HORA(S) E 0 MINUTO(S)
//输入样例3：
//7 10 8 9
//输出样例3：
//O JOGO DUROU 0 HORA(S) E 59 MINUTO(S)
#include<cstdio>
#include<iostream>

using namespace std;
int main() {
    int a, b, c, d;
    cin >> a >> b >> c >> d;
    if(c > a && d > b) {
        printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)", c - a, d - b);
    } else if(c > a && d < b) {
        printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)", c - a - 1, d - b + 60);
    } else if(c < a && d < b) {
        printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)", c - a + 23, d - b + 60);
    } else if(c < a && d > b) {
        printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)", c - a + 24, d - b);
    } else if(a == c && b == d) {
        printf("O JOGO DUROU 24 HORA(S) E 0 MINUTO(S)");
    } else if(a == c && d < b) {
        printf("O JOGO DUROU 23 HORA(S) E %d MINUTO(S)", d - b + 60);
    } else if(a == c && d > b) {
        printf("O JOGO DUROU 0 HORA(S) E %d MINUTO(S)", d - b);
    } else if(a > c && d == b) {
        printf("O JOGO DUROU %d HORA(S) E 0 MINUTO(S)", c - a + 24);
    } else if(a < c && d == b) {
        printf("O JOGO DUROU %d HORA(S) E 0 MINUTO(S)", c - a);
    }
    return 0;
}
