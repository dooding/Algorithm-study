/*
조합 : 순서를 신경쓰지 않고 나열

재귀함수 (4개이상 뽑을때)
중첩for문( 3개이하)
*/
#include <iostream>
#include <vector>
using namespace std;

int n = 5, k = 3, a[5] = { 1, 2, 3, 4, 5 };

void print(vector<int> b)
{
	for (int i : b) cout << i << " ";
	cout << endl;
}

void combi(int start, vector<int> &b) //재귀함수 방식(암기)
{
	if (b.size() == k)
	{
		print(b);
		return;
	}
	for (int i = start + 1; i < n; i++)
	{
		b.push_back(i);
		combi(i, b);
		b.pop_back();
	
	}
}

int main()
{
	vector<int> b;
	//combi(-1, b);

	//for문 방식(조건1)
	for (int i = 0; i < n; i++){
		for (int j = 0; j < i; j++){
			for (int k = 0; k < j; k++){
				cout << i << " : " << j << " : " << k << endl;
			}
		
		}
	}

	//for문 방식(조건2)
	for (int i = 0; i < n; i++) {
		for (int j = i+1; j < n; j++) {
			for (int k = j+1; k < n; k++) {
				cout << i << " : " << j << " : " << k << endl;
			}

		}
	}
	//3개 뽑으면 중첩for문 3개, 2개 뽑으면 중첩for문 2개

	return 0;
}