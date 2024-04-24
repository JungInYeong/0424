#include <iostream>
using namespace std;

// 함수  *이름을 생각해서 정하기*
// 리턴타입 함수이름( 인수목록 )
// { 함수본문 }

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