//给定一行长度不超过 100 的非空字符串，请你求出它的具体长度。
//
//输入格式
//输入一行，表示一个字符串。注意字符串中可能包含空格。
//
//输出格式
//输出一个整数，表示它的长度。
//
//数据范围
//1≤字符串长度≤100
//字符串末尾无回车
//
//输入样例：
//I love Beijing.
//输出样例：
//15
#include<iostream>
#include<cstring>


using namespace std;
int main() {
    string s;
    int a = 0;
    getline(cin, s);
    for(char c : s) {
        a++;
    }

    cout << a;
    return 0;
}
//- 按整行读到string ，推荐用 方法2 getline(cin, string)
//- 按整行读到char[] ，推荐用 方法4 cin.getline(cin, char*)
//- 读单个字符串，推荐用 cin>>
//按行读
//方法2 getline(cin, string) 和 方法4 cin.getline(cin, char*) 会读到回车为止，并且会把回车丢弃。
//方法3 cin.get(cin, char*) 不丢弃回车
//
//其他： fgets 会多读入一个回车，比较麻烦
