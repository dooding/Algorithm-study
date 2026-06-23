//핵심 포인트
/*
* 버블 정렬(O(n^2))
* 한 번의 정렬이 끝날때마다 가장 큰 원소는 배열의 맨 뒤로 이동하게 된다.
* 따라서 i 번째 바깥 반복이 끝났다면 뒤의 i개의 원소는 정렬이 완료된 상태이다.
* 정리 : https://dooding.tistory.com/68
*/

#include <iostream>
#include <vector>
using namespace std;

int main()
{
	//vector<int> vectorData = { 55, 7, 78, 12, 42 };
	vector<int> vectorData;
	int numSize = 0;
	cin >> numSize;

	for (int i = 0; i < numSize; i++)
	{
		int num = 0;
		cin >> num;
		vectorData.push_back(num);
	}


	for (int i = 0; i < vectorData.size()-1; i++) { //데이터 전체 다 돌았는지 체크(단계)
		for (int j = 0; j < vectorData.size() - 1 - i; j++) //단계 별 실행 영역
		{
			if (vectorData[j] > vectorData[j + 1])
			{
				int temp = vectorData[j];
				vectorData[j] = vectorData[j+1];
				vectorData[j+1] = temp;
			}
		}
	}

	for (int i = 0; i < vectorData.size(); i++)
	{
		cout << vectorData[i] << " ";
	}



}