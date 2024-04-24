#include <iostream>
using namespace std;

// 홀수 짝수

string OddEven()
{
	int n;
	// 굳이 리턴을 할 필요가 없는 함수들에게
	if ((n % 2) == 0)
	{
		return "짝수";
	}
	else if ((n % 2) == 1)
	{
		return "홀수";
	}
}

