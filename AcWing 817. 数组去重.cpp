//����һ������Ϊ n ������ a�������дһ��������
//
//int get_unique_count(int a[], int n);  // ��������ǰn�����еĲ�ͬ���ĸ���
//�����ʽ
//��һ�а���һ������ n��
//
//�ڶ��а��� n ����������ʾ���� a��
//
//�����ʽ
//��һ�У�����һ��������ʾ�����в�ͬ���ĸ�����
//
//���ݷ�Χ
//1��n��1000,
//1��ai��1000��
//
//����������
//5
//1 1 2 4 5
//���������
//4
#include <iostream>
#include <algorithm>
using namespace std;

int main(void) {
    int n, s[1010], sum = 1;
    cin >> n;
    for(int i = 0; i < n; i++)
        cin >> s[i];

    sort(s, s + n);

    for(int i = 1; i < n; i++) {
        if(s[i] != s[i - 1]) sum++;
    }
    cout << sum;
    return 0;
}
