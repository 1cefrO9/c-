//������������ a �� b �Լ�һ������ size�������дһ��������void copy(int a[], int b[], int size)���� a �����е�ǰ size �����֣����Ƶ� b �����С�
//
//������ɺ���� b ���顣
//
//�����ʽ
//��һ�а������� n,m,size���ֱ��ʾ a ����ĳ��ȣ�b ����ĳ����Լ����� size��
//
//�ڶ��а��� n ����������ʾ���� a��
//
//�����а��� m ����������ʾ���� b��
//
//�����ʽ
//��һ�У����� m ����������ʾ������ɺ������ b��
//
//���ݷ�Χ
//1��n��m��100,
//1��size��n
//����������
//3 5 2
//1 2 3
//4 5 6 7 8
//���������
//1 2 6 7 8
#include<iostream>
using namespace std;
void copy(int a[], int b[], int size) {
    for (int i = 0; i < size; i ++) b[i] = a[i];
}
int main() {
    int n, m, size, a[110], b[110];
    cin >> n >> m >> size;
    for (int i = 0; i < n; i ++) cin >> a[i];
    for (int i = 0; i < m; i ++) cin >> b[i];
    copy(a, b, size);
    for (int i = 0; i < m; i ++) cout << b[i] << ' ';
    return 0;
}
