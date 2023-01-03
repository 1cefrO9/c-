//������������ a �� b�������дһ��������int gcd(int a, int b), ���㲢��� a �� b �����Լ����
//
//�����ʽ
//��һ�У������������� a �� b��
//
//�����ʽ
//��һ�У�����һ����������ʾ a �� b �����Լ����
//
//���ݷ�Χ
//1��a,b��1000
//����������
//12 16
//���������
//4
#include <iostream>
using namespace std;

int gcd(int n, int m) { //�ݹ�շת���
    if(n % m == 0) {
        return m;
    } else return gcd(m, n % m);
}
int main() {
    int n, m;
    cin >> n >> m;
    cout << gcd(n, m);
    return 0;

}
