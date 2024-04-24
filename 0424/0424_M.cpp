#include <iostream>
using namespace std;

// 함수  *이름을 생각해서 정하기*
// 리턴타입 함수이름( 인수목록 )
// { 함수본문 }
// 마우스로 정지하고 F11을 누르면 그 부분의 함수로 이동한다.
// void 함수는 리턴값이 없는 함수이다.

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
	int ten = Getten(); // 10으로 고정되어 있음
	cout << ten << endl;

	int sum = Sum(2,3);
	cout << sum << endl;

	pringhi();

	something("Hi");

	return 0;
}