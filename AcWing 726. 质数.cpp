//一个大于 1 的自然数，如果除了 1 和它自身外，不能被其他自然数整除则称该数为质数。
//
//例如 7 就是一个质数，因为它只能被 1 和 7 整除。
//
//现在，给定你 N 个大于 1 的自然数，请你依次判断这些数是否是质数。
//
//输入格式
//第一行包含整数 N，表示共有 N 个测试数据。
//
//接下来 N 行，每行包含一个自然数 X。
//
//输出格式
//每个测试用例输出一个结果，每个结果占一行。
//
//如果测试数据是质数，则输出 X is prime，其中 X 是测试数据。
//
//如果测试数据不是质数，则输出 X is not prime，其中 X 是测试数据。
//
//数据范围
//1≤N≤100,
//1<X≤107
//输入样例：
//3
//8
//51
//7
//输出样例：
//8 is not prime
//51 is not prime
//7 is prime
#include<iostream>
#include<cstdio>
#include<cmath>
using namespace std;
int main(){
    int n,x;

    cin >>n;
    while(n--){
        cin >>x;
        int flag=0;
        for(int i=2;i<sqrt(x);i++){
            if(x%i==0){
                flag=1;
                break;
            }
        }
        if(flag==1){
            printf("%d is not prime\n",x);
        }else if(flag==0){
            printf("%d is prime\n",x);
        }

    }
    return 0;
}
