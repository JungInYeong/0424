#include <iostream>
using namespace std;

// �Լ�  *�̸��� �����ؼ� ���ϱ�*
// ����Ÿ�� �Լ��̸�( �μ���� )
// { �Լ����� }

int Getten()
{
	return 10;
}

int Sum(int n1, int n2)
{
	return n1 + n2;
}

int main()
{
	int ten = Getten();
	cout << ten << endl;

	int sum = Sum(2,3);
	cout << sum << endl;

	return 0;
}