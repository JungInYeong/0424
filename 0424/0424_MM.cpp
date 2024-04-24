// ★인덱스는 1부터가 아닌 0부터가 시작★
// sizeof(변수) - 변수가 몇 byte인지 리턴해줌
// sizeof(num) / sizeof(num[0]); --> 배열크기/ 요소크기 = 배열의 갯수

#include <iostream>
using namespace std;

void main()
{
	int inArr[5] = { 6,7,8,9,10 };
	int arraySize = sizeof(inArr) / sizeof(inArr[0]);

	for (int i; i < arraySize; i++)
	{
		cout << inArr[i] << endl;
	}

	// for-each : 배열의 모든 탐색할때
	int target_min = 2;
	int target_max = 4;
	int loop_count = 0;

	for (int num : inArr)
	{
		if (loop_count > target_min && loop_count < target_max)
		{
			cout << num << endl;
		}
		loop_count++;
	}

	for (int i = 0; i < arraySize; i++)
	{
		cout << inArr[i] << endl;
	}

}



