#include <iostream>
using namespace std;

// �Լ�  *�̸��� �����ؼ� ���ϱ�*
// ����Ÿ�� �Լ��̸�( �μ���� )
// { �Լ����� }
// ���콺�� �����ϰ� F11�� ������ �� �κ��� �Լ��� �̵��Ѵ�.
// void �Լ��� ���ϰ��� ���� �Լ��̴�.

int Getten()
{
	return 10;
}

int Sum(int n1, int n2)
{
	return n1 + n2;
}

void pringhi()
{
	cout << "hi" << endl;
}

void something(string message)
{
	cout << message << endl;
}

int main()
{
	int ten = Getten(); // 10���� �����Ǿ� ����
	cout << ten << endl;

	int sum = Sum(2,3);
	cout << sum << endl;

	pringhi();

	something("Hi");

	return 0;
}