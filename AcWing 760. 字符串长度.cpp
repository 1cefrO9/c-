//����һ�г��Ȳ����� 100 �ķǿ��ַ���������������ľ��峤�ȡ�
//
//�����ʽ
//����һ�У���ʾһ���ַ�����ע���ַ����п��ܰ����ո�
//
//�����ʽ
//���һ����������ʾ���ĳ��ȡ�
//
//���ݷ�Χ
//1���ַ������ȡ�100
//�ַ���ĩβ�޻س�
//
//����������
//I love Beijing.
//���������
//15
#include<iostream>
#include<cstring>


using namespace std;
int main() {
    string s;
    int a = 0;
    getline(cin, s);
    for(char c : s) {
        a++;
    }

    cout << a;
    return 0;
}
//- �����ж���string ���Ƽ��� ����2 getline(cin, string)
//- �����ж���char[] ���Ƽ��� ����4 cin.getline(cin, char*)
//- �������ַ������Ƽ��� cin>>
//���ж�
//����2 getline(cin, string) �� ����4 cin.getline(cin, char*) ������س�Ϊֹ�����һ�ѻس�������
//����3 cin.get(cin, char*) �������س�
//
//������ fgets ������һ���س����Ƚ��鷳
