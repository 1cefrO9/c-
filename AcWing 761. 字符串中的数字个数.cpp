//����һ���ַ������Ȳ����� 100������ͳ��һ�����е������ַ��ĸ�����
//
//�����ʽ
//����һ���ַ���ע�����п��ܰ����ո�
//
//�����ʽ
//���һ����������ʾ�������ַ��ĸ�����
//
//����������
//I am 18 years old this year.
//���������
//2
#include<iostream>

using namespace std;

int main() {
    string a;
    getline(cin, a);
    int ans = 0;
    for(int i = 0; i < a.size(); i ++) {
        if(a[i] <= '9' && a[i] >= '0') {
            ans ++;
        }
    }

    cout << ans << endl;

    return 0;
}
