#include <iostream>
using namespace std;

int a, b, c;
int timeC[100] = { 0 };
int sum;

int main()
{
	cin >> a >> b >> c;

	for (int i = 0; i < 3; i++)
	{
		int start = 0;
		int end = 0;

		cin >> start >> end;
		
		/*
		for (int i = start +1; i <= end; i++) //point1. 시작은 이상, 끝은 미만으로 잡기
		{
			timeC[i]++;
		}
		*/

		for (int i = start; i < end; i++) //point1. 시작은 이상, 끝은 미만으로 잡기
		{
			timeC[i]++;
		}
	}

	for (int i = 0; i < 100; i++)
	{
		if (timeC[i] > 0)
		{
			switch (timeC[i])
			{
			case 1:
				sum += a * timeC[i];
				break;
			case 2:
				sum += b * timeC[i];
				break;
			case 3:
				sum += c * timeC[i];
				break;

			}
		}
	}

	cout << sum;
}