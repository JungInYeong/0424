#include <iostream>
using namespace std;

void Add(int a, int b)
{
	cout << "합 : " << a + b << endl;
}

void Sub(int a, int b)
{
	if (a > b) {
		cout << "차 : " << a - b << endl;
	}
	else {
		cout << "차 : " << b - a << endl;
	}
	
}

void Mul(int a, int b)
{
	cout << "곱셈 : " << a * b << endl;
}

void Divide(int a, int b)
{
	cout << "나눗셈 : " << (float)a / (float)b << endl;


}

int main()
{
	int num1, num2;
	cout << "숫자를 두 가지 입력해주세요 : ";
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