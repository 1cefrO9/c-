//����һ������Ϊ n ������ a ��һ������ size�������дһ��������void reverse(int a[], int size)��ʵ�ֽ����� a �е�ǰ size ������ת��
//
//�����ת������� a��
//
//�����ʽ
//��һ�а����������� n �� size��
//
//�ڶ��а��� n ����������ʾ���� a��
//
//�����ʽ
//��һ�У����� n ����������ʾ��ת������� a��
//
//���ݷ�Χ
//1��size��n��1000,
//1��a[i]��1000
//����������
//5 3
//1 2 3 4 5
//���������
//3 2 1 4 5
# include <iostream>
using namespace std;
const int N = 1001;
int a[N];
int main() {
    int n, size;
    cin >> n >> size;
    for(int i = 0; i < n; i ++)cin >> a[i];
    reverse(a, a + size);
    for(int i = 0; i < n; i++) cout << a[i] << " ";
    return 0;
}
