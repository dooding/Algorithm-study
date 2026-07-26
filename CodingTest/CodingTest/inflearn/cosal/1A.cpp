/*
순열_재귀함수
*/
#include <iostream>
#include <algorithm>
using namespace std;
int a[9] = { 0 };

void print()
{
	for (int i = 0; i < 7; i++)
	{
		cout << a[i] << " ";
	}
	cout << "\n";
}

void makePermutation(int n, int r, int depth)
{
	if (r == depth)
	{
		//logic
		print();
		return;
	}
	for (int i = depth; i < n; i++)
	{
		swap(a[i], a[depth]);
		makePermutation(n, r, depth + 1);
		swap(a[i], a[depth]);
	}
}
int main()
{
	for (int i = 0; i < 9; i++)
	{
		cin >> a[i];
	}

	int n = 9;
	int r = 7;
	makePermutation(n, r, 0);
	
}
/*
* 순열로 7개 뽑기
do{
}while(next_permutation(start, end);


#include <iostream>
#include <algorithm>
using namespace std;

int a[9] = { 0 };

int main()
{
	for (int i = 0; i < 9; i++)
	{
		cin >> a[i];
	}

	do
	{
		int sum = 0;
		for (int i = 0; i < 7; i++)
		{
			sum += a[i];
		}
		if (sum == 100)
			break;

	} while (next_permutation(a, a+9));

	sort(a, a + 7);
	for (int i = 0; i < 7; i++) cout << a[i] << " ";
	return 0;

}
*/

/*
1-A 23009 일곱 난쟁이 (조합_재귀함수 방식으로 풀었음)
#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int n = 9;
int k = 7;
vector<int> tall;

void print(vector<int> v)
{
	for (int i: v)
	{
		cout << tall[i] << " ";
	}
	cout << "\n";
}

bool sum(vector<int> v)
{
	int sum = 0;
	for (int i : v)
	{
		sum += tall[i];
	}
	return sum == 100;
}

void combi(int start, vector<int>& v)
{
	if (v.size() == k)
	{
		if (sum(v))
		{
			print(v);
		}
		return;
	}
	for (int i = start + 1; i < n; i++)
	{
		v.push_back(i);
		combi(i, v);
		v.pop_back();
	}
}

int main()
{
	//combi 실행

	vector<int> t;

	for (int i = 0; i < 9; i++)
	{
		int temp;
		cin >> temp;
		tall.push_back(temp);
	}
	sort(tall.begin(), tall.end());
	combi(-1, t);
}
*/
/*
* 조합 함수 틀
void combi(int start, vector<int>& b)
{
	if (k == b.size())
	{
		//logic
		return;
	}
	for (int i = start + 1; i < n; i++)
	{
		b.push_back(i);
		combi(i, b);
		b.pop_back();
	}
}
*/