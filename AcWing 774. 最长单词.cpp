//һ���� . ��β�ļ�Ӣ�ľ��ӣ�����֮���ÿո�ָ���û����д��ʽ������������ʽ��������е�����ʡ�
//
//�����ʽ
//����һ���ַ�������ʾ�����Ӣ�ľ��ӣ����Ȳ����� 500��
//
//�����ʽ
//�þ�������ĵ��ʡ��������һ�����������һ����
//
//����������
//I am a student of Peking University.
//���������
//University
#include <iostream>
using namespace std;
int main() {
    string s;
    getline(cin, s);
    int p = 0;
    string b;
    for (int i = 0; i < s.size(); i++) {
        int j = i;
        int cnt = 0;
        string a;

        for (int j = i; s[j] != '.' && s[j] != ' '; j ++) {
            a = a + s[j];
            cnt++;
        }
        if (p < cnt) {
            p = cnt;
            b = a;
        }
    }
    cout << b << endl;

    return 0;
}
