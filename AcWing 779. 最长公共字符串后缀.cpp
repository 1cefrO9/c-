//�������ɸ��ַ����������Щ�ַ������������׺��
//
//�����ʽ
//��������������ɡ�
//
//ÿ������ĵ�һ����һ������ N��
//
//N Ϊ 0 ʱ��ʾ���������������������� N �����룬ÿ����һ���ַ������ַ����ڲ����հ׷�����
//
//ÿ���ַ����ĳ��Ȳ����� 200��
//
//�����ʽ
//��һ�У�Ϊ N ���ַ������������׺������Ϊ�գ���
//
//���ݷ�Χ
//1��N��200
//����������
//3
//baba
//aba
//cba
//2
//aa
//cc
//2
//aa
//a
//0
#include <iostream>
#include <cstring>

using namespace std;

int n;
string s[205];

int main()
{
    while (cin >> n, n)
    {
        for (int i = 0; i < n; i ++)
            cin >> s[i];
        int flag = 0;
        for (int k = 0; k < s[0].size(); k ++)//ö����s[0]���еĺ�׺
        {
            int f = 0;
            string tmp = s[0].substr(k);//tmp���׺�ַ���
            for (int i = 1; i < n; i ++)
            {
                //�����ǰs[i]�ĳ���С��tmp�ĳ��Ⱦ�ֱ�ӷ��ش��󣬷��ߺ����substr��RE
                if (s[i].size() < tmp.size())
                {
                    f = 1;
                    break;
                }
                //�ж�s[i]�Ƿ���ͬ���ĺ�׺
                if (s[i].substr(s[i].size() - tmp.size()) != tmp)
                {
                    f = 1;
                    break;
                }
            }
            if (f == 0)
            {
                flag = 1;
                cout << tmp << endl;
            }
            //����Ѿ��д��˾�ֱ����ֹ
            if (!f)
                break;
        }
        //���û�й�����׺���������
        if (!flag)
            cout << endl;
    }
    return 0;
}
