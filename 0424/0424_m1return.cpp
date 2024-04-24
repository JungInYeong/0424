#include <iostream>
using namespace std;

int add(int n1, int n2)
{
	return n1 + n2;
}

int sub(int n1, int n2)
{
	if (n1 > n2)
	{
		return n1 - n2;
	}

	else if (n2 > n1)
	{
		return n2 - n1;
	}

}

int mul(int n1, int n2)
{
	return n1 * n2;
}

float divide(int n1, int n2)
{
	return (float)n1 / (float)n2;
	// 강제 형변환 처음에 리턴을 int로 줘서 결과값이 이상했음
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