#include <iostream>
using namespace std;

int main()
{
	int counts[10] = { 0 };
	int isTriplet = 0;
	int isRun = 0;


	for (int i = 0; i < 6; i++)
	{
		int num = 0;
		cin >> num;
		counts[num]++;
	}
	//triplete 확인
	for (int i = 0; i < 10; i++)
	{
		if (counts[i] >= 3)
		{
			isTriplet++;
			counts[i] = counts[i] - 3;
		}
	}

	//run확인
	for (int i = 0; i < 10; i++)
	{
		if (i + 2 <= 9) {
			if (counts[i] >= 1 && counts[i + 1] >= 1 && counts[i + 2] >= 1)
			{
				isRun++;
				counts[i]--;
				counts[i + 1]--;
				counts[i + 2]--;
			}
		}
	}

	//r1+t1, r2, t2
	if (isRun + isTriplet >= 2)
	{
		cout << "Baby-Gin";
	}
	else
	{
		cout << "Not Baby-Gin";
	}
}