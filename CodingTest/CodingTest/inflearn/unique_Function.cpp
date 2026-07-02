#include <vector>
#include <map>
#include <algorithm>
#include <iostream>
using namespace std;

int main()
{   //첫번째 방법 : map을 이용해서 구현
	cout << "First" << endl;
	map<int, int> mp;
	vector<int> v1{ 1, 1, 2, 2, 3, 3 };
	for (int i : v1) {
		if (mp[i]) {
			continue;
		}
		else {
			mp[i] = 1;
		}
	}

	vector<int> ret;
	for (auto it : mp) {
		ret.push_back(it.first);
	}

	for (int i : ret) cout << i << endl;

	//2번째 방법 : unique()
	//unique()는 앞에서부터 서로 비교하면서 중복 요소를 제거하고 그 뒤의 나머지 요소는 그대로 두는 함수 O(n)
	//unique()를 통해서 중복되지 않은 데이터 뽑아내려면 Sort를 해야한다.(앞과 뒤를 비교하기 때문)
	cout << "Second" << endl;
	vector<int> v2;
	for (int i = 1; i <= 5; i++)
	{
		v2.push_back(i);
		v2.push_back(i); // (전) 1 1 2 2 3 3 4 4 5 5
						// (후) 1 2 3 4 5 3 4 4 5 5
	}
	for (int i : v2) cout << i << " ";
	cout << endl;
	
	sort(v2.begin(), v2.end());
	//auto it = unique(v2.begin(), v2.end()); it은 중복제거한 데이터까지를 나타냄.
	v2.erase(unique(v2.begin(), v2.end()), v2.end());


	//cout << it - v2.begin() << endl; //5번째 이터레이터 출력
	for (int i : v2) cout << i << " ";
	cout << endl;

	return 0;
}
//erase(from, to) : from 포함, to 불포함
/*
* (원본) 1, 1, 2, 2, 3, 3
* (unique()) 1, 2, 3, 2, 3, 3
* (erase()) 1, 2, 3
*/