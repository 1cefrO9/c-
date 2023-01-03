//����һ�� n��m �ķ��������ŷ���ı����ߣ������Ͻ� (0,0) ��ʼ��ÿ��ֻ�����һ���������һ����λ���룬���ߵ����½� (n,m) һ���ж����ֲ�ͬ���߷���
//
//�����ʽ
//��һ�У������������� n �� m��
//
//�����ʽ
//��һ�У�����һ����������ʾ�߷�������
//
//���ݷ�Χ
//1��n,m��10
//����������
//2 3
//���������
//10
#include<iostream>

using namespace std;

int getSumSteps(int n, int m) {
    if(m <= 0 || n <= 0) {
        return -1;
    }
    if(n <= 1 || m <= 1) {
        return n + m;
    }
    // �ݹ����
    return getSumSteps(m - 1, n) + getSumSteps(m, n - 1);
}

int main() {
    int n, m;
    cin >> n >> m;

    cout << getSumSteps(n, m);
    return 0;
}
