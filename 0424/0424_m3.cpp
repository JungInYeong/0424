#include <iostream>
#include <string>
using namespace std;

int main()
{
	string city[] = { "korea", "china", "japan", "brazil", "usa" };

	string in;

	int count = 0;
	
	cout << "list �Ǵ� �����̸��� �Է��ϼ��� : ";
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
		bool input = false;
		for ( int i = 0; i < arr; i++)
		{
			if (in == city[i])
			{
				cout << "�ε��� : " << i << " �����̸� : " << city[i] << endl;
				input = true;
				break;
			}
		}
		if (!input)
		{
			cout << "�����Դϴ�." << endl;
		}

	}

}
