//������������ a �� b�������дһ��������int lcm(int a, int b)�����㲢��� a �� b ����С��������
//
//�����ʽ
//��һ�У������������� a �� b��
//
//�����ʽ
//��һ�У�����һ����������ʾ a �� b ����С��������
//
//���ݷ�Χ
//1��a,b��1000
//����������
//6 8
//���������
//24
#include <iostream>
using namespace std;

int gcd(int n, int m) {
    if(n % m == 0) {
        return m;
    } else return gcd(m, n % m);
}
int lcm(int a, int b) {
    return a*b / gcd(a, b);
}
int main() {
    int a, b;
    cin >> a >> b;
    cout << lcm(a, b);
    return 0;

}
