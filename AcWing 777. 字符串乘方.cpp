//给定两个字符串 a 和 b，我们定义 a×b 为他们的连接。
//
//例如，如果 a=abc 而 b=def， 则 a×b=abcdef。
//
//如果我们将连接考虑成乘法，一个非负整数的乘方将用一种通常的方式定义：a0=``(空字符串)，a(n+1)=a×(an)。
//
//输入格式
//输入包含多组测试样例，每组测试样例占一行。
//
//每组样例包含一个字符串 s，s 的长度不超过 100，且不包含空格。
//
//最后的测试样例后面将是一个点号作为一行。
//
//输出格式
//对于每一个 s，你需要输出最大的 n，使得存在一个字符串 a，让 s=an。
//
//输入样例：
//abcd
//aaaa
//ababab
//.
//输出样例：
//1
//4
//3
#include<cstdio>
#include<iostream>
using namespace std;
int main()
{
    string s;
    cin >> s;
    while(s != ".")
    {
        int t;//短字符串长度
        int m = s.size();//最短字符串长度
        int n = 1;//t最短时,i最大，i等于几

        for(int i = s.size();i ;i --)
        {
            t = s.size() / i;
            if(t * i != s.size())continue;//长度不一样就下一个(约数)

            string a,b;//接下来取小段字符串给到a，拼接字符串给到b
            a = s.substr(0,t);
            for(int j = 0;j < i;j ++)
                b += a;

            if(b != s)continue;//判断b和s是否相同，不相同跳过接下来赋值

            if(m > t)//用n最大也可以if(n < i)同理
            {
                m = t;
                n = i;
            }

        }
        cout << n <<endl;
        cin >> s;
    }
    return 0;
}
