#include <iostream>
using namespace std;

int n, a[1004], cnt;

int go(int l, int r){
	cnt++;
	if (l == r) return a[l];
	int mid = (l + r) / 2;
	int sum = go(l , mid) + go(mid + 1 , r);
	return sum;
}

int main()
{
	cin >> n;
	for (int i = 1; i <= n; i++)
		a[i - 1] = i;
	int sum = go(0, n - 1);
	cout << "sum : " << sum << endl;
	cout << "cnt : " << cnt << endl;
}

//주요 알고리즘인 go 함수가 몇 번 호출되었는가가 핵심.
//함수 호출은 디버깅 해보기
/*
n = 5, cnt = 9
n = 10, cnt = 19
결국 2n-1 => O(n)

디버깅 해보거나 직접 그림 그려보기
https://dooding.tistory.com/74
*/

