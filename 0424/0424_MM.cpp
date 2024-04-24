// ���ε����� 1���Ͱ� �ƴ� 0���Ͱ� ���ۡ�
// sizeof(����) - ������ �� byte���� ��������
// sizeof(num) / sizeof(num[0]); --> �迭ũ��/ ���ũ�� = �迭�� ����

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

	// for-each : �迭�� ��� Ž���Ҷ�
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



