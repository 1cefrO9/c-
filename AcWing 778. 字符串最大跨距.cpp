//有三个字符串 S,S1,S2，其中，S 长度不超过 300，S1 和 S2 的长度不超过 10。
//
//现在，我们想要检测 S1 和 S2 是否同时在 S 中出现，且 S1 位于 S2 的左边，并在 S 中互不交叉（即，S1 的右边界点在 S2 的左边界点的左侧）。
//
//计算满足上述条件的最大跨距（即，最大间隔距离：最右边的 S2 的起始点与最左边的 S1 的终止点之间的字符数目）。
//
//如果没有满足条件的 S1，S2 存在，则输出 −1。
//
//例如，S= abcd123ab888efghij45ef67kl, S1= ab, S2= ef，其中，S1 在 S 中出现了 2 次，S2 也在 S 中出现了 2 次，最大跨距为：18。
//
//输入格式
//输入共一行，包含三个字符串 S,S1,S2，字符串之间用逗号隔开。
//
//数据保证三个字符串中不含空格和逗号。
//
//输出格式
//输出一个整数，表示最大跨距。
//
//如果没有满足条件的 S1 和 S2 存在，则输出 −1。
//
//输入样例：
//abcd123ab888efghij45ef67kl,ab,ef
//输出样例：
//18
#include <iostream>
#include <cstring>

using namespace std;

string s, s1, s2;

int main() {
    char c;
    //一种过滤逗号的方式
    while (cin >> c && c != ',') s += c;
    while (cin >> c && c != ',') s1 += c;
    while (cin >> c) s2 += c;
    int i = s.find(s1), j = s.rfind(s2);//找到s1第一次出现的位置和s2最后一次的位置
    int l1 = s1.size(), l2 = s2.size();//l1、l2分别是是s1和s2的长度
    if (i == -1 || j == -1 || l1 + i - 1 >= j)//l1 + i - 1计算的是s1的最后一个字母在原s中的位置
        cout << -1 << endl;
    else
        cout << j - (l1 + i - 1) - 1 << endl;//计算长度
    return 0;
}
