//一个以 . 结尾的简单英文句子，单词之间用空格分隔，没有缩写形式和其它特殊形式，求句子中的最长单词。
//
//输入格式
//输入一行字符串，表示这个简单英文句子，长度不超过 500。
//
//输出格式
//该句子中最长的单词。如果多于一个，则输出第一个。
//
//输入样例：
//I am a student of Peking University.
//输出样例：
//University
#include <iostream>
using namespace std;
int main() {
    string s;
    getline(cin, s);
    int p = 0;
    string b;
    for (int i = 0; i < s.size(); i++) {
        int j = i;
        int cnt = 0;
        string a;

        for (int j = i; s[j] != '.' && s[j] != ' '; j ++) {
            a = a + s[j];
            cnt++;
        }
        if (p < cnt) {
            p = cnt;
            b = a;
        }
    }
    cout << b << endl;

    return 0;
}
