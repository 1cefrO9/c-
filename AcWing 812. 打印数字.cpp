//����һ������Ϊ n ������ a ��һ������ size�������дһ������, void print(int a[], int size), ��ӡ���� a �е�ǰ size ������
//
//�����ʽ
//��һ�а����������� n �� size��
//
//�ڶ��а��� n ������ a[i]����ʾ�������顣
//
//�����ʽ
//��һ�У����� size ����������ʾ�����ǰ size ������
//
//���ݷ�Χ
//1��n��1000,
//1��size��n,
//
//����������
//5 3
//1 2 3 4 5
//���������
//1 2 3
# include <iostream>
using namespace std;
const int N = 1000;
void print(int *a, int size) {
    for(int i = 0; i < size; i ++)
        cout << a[i] << " ";
}
int main() {
    int n, size;
    cin >> n >> size ;
    int a[N];
    for(int i = 0 ; i < n ; i ++ ) cin >> a[i];
    print(a, size);
}
