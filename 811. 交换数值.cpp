//������������ x �� y�������дһ������, ����������������ֵ������������ x �� y��
//
//C++�еĸ�ʽΪ��void swap(int &x, int &y)��
//
//Java�еĸ�ʽΪ��void swap(int[] a)������a[0]��a[1]��
//
//�����ʽ
//��һ�У������������� x �� y��
//
//�����ʽ
//��һ�У������������ x �� y��
//
//���ݷ�Χ
//1��x,y��100
//����������
//3 5
//���������
//5 3
#include<bits/stdc++.h>
using namespace std;

void swap(int &a, int &b) {
    int tmp;
    tmp = a;
    a = b;
    b = tmp;
    cout << a << " " << b;
}
int main() {
    int a, b;
    cin >> a >> b;
    swap(a, b);
    return 0;
}
