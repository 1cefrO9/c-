//��һ���ַ���������������ֵ��ַ���������ַ�������ִ������ַ������޿հ��ַ����ո񡢻س��� tab��������������ַ���ֹһ�����������һ����
//
//�����ʽ
//��һ���������� N����ʾ�������ݵ�������
//
//ÿ������ռһ�У�����һ�������հ��ַ����ַ������ַ������Ȳ����� 200��
//
//�����ʽ
//��һ�У��������������ֵ��ַ�������ִ������м��ÿո������
//
//����������
//2
//aaaaabbbbbcccccccdddddddddd
//abcdefghigk
//���������
//d 10
//a 1
#include <iostream>
using namespace std;
int main() {
    int T;
    cin >> T;
    while(T --) {
        int maxn = -1;//maxn��¼��󳤶�
        string str, maxs;//maxs��¼��󳤶�ʱ���ַ�
        cin >> str;
        for(int i = 0; i < str.size(); i ++) {
            int j = i;
            int cnt = 0;
            while(str[j] == str[i] && j < str.size())//��ָ��jû��Խ������ָ��i��������ͬʱ�ƶ�
                j ++, cnt ++;
            if(cnt > maxn)//�������ֵ
                maxn = cnt, maxs = str[i];
            i = j - 1;//�ƶ�ָ��i
        }
        cout << maxs << " " << maxn << endl;
    }
}
