#include <iostream>
using namespace std;

int add(int a, int b)
{
	return a + b;
}

int sub(int a, int b)
{
	if (a > b)
	{
		return a - b;
	}

	else if (b > a)
	{
		return b - a;
	}

}

int mul(int a, int b)
{
	return a * b;
}

float divide(int a, int b)
{
	return (float)a / (float)b;

}


int main()
{
	int num1, num2;
	cin >> num1 >> num2;

	cout << "add " << add(num1, num2) << "\n";
	cout << "sub " << sub(num1, num2) << "\n";
	cout << "mul " << mul(num1, num2) << "\n";
	cout << "divide " << divide(num1, num2) << "\n";

}