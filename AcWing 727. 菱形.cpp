//输入一个奇数 n，输出一个由 * 构成的 n 阶实心菱形。
//
//输入格式
//一个奇数 n。
//
//输出格式
//输出一个由 * 构成的 n 阶实心菱形。
//
//具体格式参照输出样例。
//
//数据范围
//1≤n≤99
//输入样例：
//5
//输出样例：
//  *
// ***
//*****
// ***
//  *
#include<iostream>
#include<cmath>

using namespace std;
int main() {
    int n;
    cin >> n;

    int cx = n / 2, cy = n / 2;
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            if(abs(i - cx) + abs(j - cy) <= n / 2) cout << '*';
            else cout << ' ';
        }
        cout << endl;
    }
    return 0;
}
