//����һ�� row��col �Ķ�ά���� a�������дһ��������void print2D(int a[][N], int row, int col)����ӡ���鹹�ɵ� row �У�col �еľ���
//
//ע�⣬ÿ��ӡ��һ������Ҫ���һ���س���
//
//�����ʽ
//��һ�а����������� row,col��
//
//������ row �У�ÿ�а��� col ����������ʾ������ά���� a��
//
//�����ʽ
//�� row �У�ÿ�� col ����������ʾ��ӡ���ľ���
//
//���ݷ�Χ
//1��row��100,
//1��col��100
//����������
//3 4
//1 3 4 5
//2 6 9 4
//1 4 7 5
//���������
//1 3 4 5
//2 6 9 4
//1 4 7 5
#include <iostream>
using namespace std;
int main() {
    int a, b;
    cin >> a >> b;
    int c[a][b];
    for(int i = 0; i < a; i++) {
        for(int j = 0; j < b; j++) {
            cin >> c[i][j];
            cout << c[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}
