//��ʹ�õݹ�ķ�ʽ�� n �Ľ׳ˡ�
//
//�����ʽ
//��һ�У�����һ������ n��
//
//�����ʽ
//��һ�У�����һ����������ʾ n �Ľ׳˵�ֵ��
//
//���ݷ�Χ
//1��n��10
//����������
//3
//���������
//6
#include <iostream>
using namespace std;
int fact(int n) {
    if (n == 1) return 1;
    return n * fact(n - 1);
}
int main() {
    int n;
    cin >> n;
    cout << fact(n);
    return 0;
}
