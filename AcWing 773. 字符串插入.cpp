//有两个不包含空白字符的字符串 str 和 substr，str 的字符个数不超过 10，substr 的字符个数为 3。（字符个数不包括字符串结尾处的 \0。）
//
//将 substr 插入到 str 中 ASCII 码最大的那个字符后面，若有多个最大则只考虑第一个。
//
//输入格式
//输入包括若干行，每一行为一组测试数据，格式为
//
//str substr
//
//输出格式
//对于每一组测试数据，输出插入之后的字符串。
//
//输入样例：
//abcab eee
//12343 555
//输出样例：
//abceeeab
//12345553
#include <iostream>

using namespace std;

int main() {
    string a, s;
    while(cin >> a >> s) {
        int y = 0;
        int r = a.size();

        for(int q = 1; q < r; q++) { //判断最大的数
            if(a[q] > a[y]) y = q;
        }

        cout << a.substr(0, y + 1) + s + a.substr(y + 1) << "\n";
    }
    return 0;
}
