//����һ���ַ����������дһ��������void print(char str[])��������ַ�����ӡ������
//
//�����ʽ
//��һ�У�����һ���ַ�����
//
//�����ʽ
//��һ�У���ʾ��ӡ�����ַ�����
//
//���ݷ�Χ
//1���ַ������ȡ�100
//����������
//I love AcWing.
//���������
//I love AcWing.
#include <iostream>
#include<cstring>
#include<cstdio>
using namespace std;
void print(char str[]) {
    for(int i = 0; i < strlen(str); i++) {
        cout << str[i];
    }
}

int main() {
    char str[100];
    cin.getline(str, 101);
    print(str);
    return 0;
}
