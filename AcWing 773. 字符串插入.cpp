//�������������հ��ַ����ַ��� str �� substr��str ���ַ����������� 10��substr ���ַ�����Ϊ 3�����ַ������������ַ�����β���� \0����
//
//�� substr ���뵽 str �� ASCII �������Ǹ��ַ����棬���ж�������ֻ���ǵ�һ����
//
//�����ʽ
//������������У�ÿһ��Ϊһ��������ݣ���ʽΪ
//
//str substr
//
//�����ʽ
//����ÿһ��������ݣ��������֮����ַ�����
//
//����������
//abcab eee
//12343 555
//���������
//abceeeab
//12345553
#include <iostream>

using namespace std;

int main() {
    string a, s;
    while(cin >> a >> s) {
        int y = 0;
        int r = a.size();

        for(int q = 1; q < r; q++) { //�ж�������
            if(a[q] > a[y]) y = q;
        }

        cout << a.substr(0, y + 1) + s + a.substr(y + 1) << "\n";
    }
    return 0;
}
