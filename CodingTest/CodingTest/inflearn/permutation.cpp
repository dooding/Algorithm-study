/*
* 경우의 수는 딱 2가지 (순열(순서 상관O), 조합(순서 상관X))
*/

#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

int main()
{
	//next_permutation(first, last);

	int a[] = { 1,2,3 };
	do {
		for (int i : a) cout << i << " ";
		cout << endl;
	} while (next_permutation(a, a+3)); // a == &a[0] / a+3 == &a[3]

	vector<int> v = { 3, 2, 1, 100, 200 };
	sort(v.begin(), v.end());
	do {
		//2가지를 뽑아라(슬라이스 해서 출력)
		for (int i = 0; i < 2; i++)
		{
			cout << v[i] << " "; 
		}
		cout << endl;
	} while (next_permutation(v.begin(), v.end()));
	

}

/*
next_permutation은 오름차순 
정렬이 안되어있으면, 안된 상태로 다음 순열을 출력하므로
순열 사용시 반드시 오름차순 정렬을 해줘야함.

Permutation 공식
nPr = n! / (n-r)!
3개 중에 2개 뽑는다 => 3P2 = 3! / (3-2)! = 총 6개를 가진다.
*/