//给定一个整数 n，将数字 1∼n 排成一排，将会有很多种排列方法。
//
//现在，请你按照字典序将所有的排列方法输出。
//
//输入格式
//共一行，包含一个整数 n。
//
//输出格式
//按字典序输出所有排列方案，每个方案占一行。
//
//数据范围
//1≤n≤9
//输入样例：
//3
//输出样例：
//1 2 3
//1 3 2
//2 1 3
//2 3 1
//3 1 2
//3 2 1
#include<iostream>
#include<algorithm>//注意添加头文件
using namespace std;

int q[10];//1 ~ 9最多9个数字
int n;

int main() {
    cin >> n;

    //输入数字 1 ~ n
    for(int i = 0 ; i < n ; i++)
        q[i] = i + 1;

    //输出字典序最小的排列
    for(int i = 0 ; i < n ; i++)
        cout << q[i] << " ";
    cout << endl;

    //当存在比当前字典序更大的排列时，next_permutation()返回真，直到没有更大的排列的时候才退出循环
    while(next_permutation(q, q + n)) { //利用next_permutation()自动找到下一个更大的字典序
        //输出更大的排列
        for(int i = 0 ; i < n ; i++)
            cout << q[i] << " ";
        cout << endl;
    }

    return 0;
}
