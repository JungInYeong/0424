#include <iostream>
#include <string>
using namespace std;

int main()
{
	string city[] = { "korea", "china", "japan", "brazil", "usa" };

	string in;

	int count = 0;
	
	cout << "list 또는 나라이름을 입력하세요 : ";
	cin >> in;
	int arr = sizeof(city) / sizeof(city[0]);

	if (in == "list")
	{
		for (string in : city)
		{
			cout << in << endl;
		}
	}

	else
	{
		bool inerror = false;
		for ( int i = 0; i < arr; i++)
		{
			if (in == city[i])
			{
				cout << "인덱스 : " << i << " 나라이름 : " << city[i] << endl;
				inerror = true;
				break;
			}
		}
		if (!inerror)
		{
			cout << "오류입니다." << endl;
		}

	}

}
