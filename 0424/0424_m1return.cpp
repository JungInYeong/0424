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

	cout << "ÇÕ : " << add(num1, num2) << endl;
	cout << "Ä¡ : " << sub(num1, num2) << endl;
	cout << "°ö :  " << mul(num1, num2) << endl;
	cout << "³ª´°¼À :  " << divide(num1, num2) << endl;

}