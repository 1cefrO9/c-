//对于一个字符串来说，定义一次循环移位操作为：将字符串的第一个字符移动到末尾形成新的字符串。
//
//给定两个字符串 s1 和 s2，要求判定其中一个字符串是否是另一字符串通过若干次循环移位后的新字符串的子串。
//
//例如 CDAA 是由 AABCD 两次移位后产生的新串 BCDAA 的子串，而 ABCD 与 ACBD 则不能通过多次移位来得到其中一个字符串是新串的子串。
//
//输入格式
//共一行，包含两个字符串，中间由单个空格隔开。
//
//字符串只包含字母和数字，长度不超过 30。
//
//输出格式
//如果一个字符串是另一字符串通过若干次循环移位产生的新串的子串，则输出 true，否则输出 false。
//
//输入样例：
//AABCD CDAA
//输出样例：
//true
#include<iostream>
using namespace std;
int main()
{   string str , res;
    cin >> str >> res;

    if(str.size() < res.size()) swap(str , res);//先判断两个字符串哪个长，将长字符串设定为母串str，短字符串设定为子串res

    int len = str.size() ,lon = res.size() , sign = 0;//得到母串和子串长度，标记变量

    for(int i = 0;i < len;i ++)
    {
        str = str.substr(1) + str[0];//母串首位逐次移至末尾

        if(str.substr(0,lon) == res) //从母串首位截取长度为lon(子串的长度)的字符串与子串作比较，改变标记量
        sign = 1;


    }
    if(sign == 1) cout << "true";
    else cout <<"false";
    return 0;
}
