//给出若干个字符串，输出这些字符串的最长公共后缀。
//
//输入格式
//由若干组输入组成。
//
//每组输入的第一行是一个整数 N。
//
//N 为 0 时表示输入结束，否则后面会继续有 N 行输入，每行是一个字符串（字符串内不含空白符）。
//
//每个字符串的长度不超过 200。
//
//输出格式
//共一行，为 N 个字符串的最长公共后缀（可能为空）。
//
//数据范围
//1≤N≤200
//输入样例：
//3
//baba
//aba
//cba
//2
//aa
//cc
//2
//aa
//a
//0
#include <iostream>
#include <cstring>

using namespace std;

int n;
string s[205];

int main()
{
    while (cin >> n, n)
    {
        for (int i = 0; i < n; i ++)
            cin >> s[i];
        int flag = 0;
        for (int k = 0; k < s[0].size(); k ++)//枚举是s[0]所有的后缀
        {
            int f = 0;
            string tmp = s[0].substr(k);//tmp存后缀字符串
            for (int i = 1; i < n; i ++)
            {
                //如果当前s[i]的长度小于tmp的长度就直接返回错误，否走后面的substr会RE
                if (s[i].size() < tmp.size())
                {
                    f = 1;
                    break;
                }
                //判断s[i]是否有同样的后缀
                if (s[i].substr(s[i].size() - tmp.size()) != tmp)
                {
                    f = 1;
                    break;
                }
            }
            if (f == 0)
            {
                flag = 1;
                cout << tmp << endl;
            }
            //如果已经有答案了就直接终止
            if (!f)
                break;
        }
        //如果没有公共后缀就输出空行
        if (!flag)
            cout << endl;
    }
    return 0;
}
