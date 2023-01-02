//给定一个整数，请根据下表确定并输出其对应的城市名称：
//
//UOJ_1050.png
//
//如果输入数字不在上表中，则输出 DDD nao cadastrado。
//
//输入格式
//共一行，包含一个整数。
//
//输出格式
//输出对应城市名称，如果没有对应城市名称，则输出 DDD nao cadastrado。
//
//输入样例：
//11
//输出样例：
//Sao Paulo
#include<cstdio>
#include<iostream>
using namespace std;
int main() {
    int n;
    cin >> n;
    if(n == 61) {
        cout << "Brasilia";
    } else if(n == 71) {
        cout << "Salvador";
    } else if(n == 11) {
        cout << "Sao Paulo";
    } else if(n == 21) {
        cout << "Rio de Janeiro";
    } else if(n == 32) {
        cout << "Juiz de Fora";
    } else if(n == 19) {
        cout << "Campinas";
    } else if(n == 27) {
        cout << "Vitoria";
    } else if(n == 31) {
        cout << "Belo Horizonte";
    } else cout << "DDD nao cadastrado";
    return 0;

}
