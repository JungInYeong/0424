#include <iostream>
using namespace std;

void Add(int a, int b)
{
	cout << "�� : " << a + b << endl;
}

void Sub(int a, int b)
{
	if (a > b) {
		cout << "�� : " << a - b << endl;
	}
	else {
		cout << "�� : " << b - a << endl;
	}
	
}

void Mul(int a, int b)
{
	cout << "���� : " << a * b << endl;
}

void Divide(int a, int b)
{
	cout << "������ : " << (float)a / b << endl;
}

int main()
{
	int num1, num2;
	cout << "���ڸ� �Է����ּ��� : ";
	cin >> num1;
	cin >> num2;

	Add(num1, num2);
	cout << endl;
	Sub(num1, num2);
	cout << endl;
	Mul(num1, num2);
	cout << endl;
	Divide(num1, num2);




	
	return 0;
}