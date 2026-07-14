#include <iostream>
using namespace std;

int N, cnt;
void solve(int N) {
	cnt++;	//main logic  =>   O(1)
	cout << "cnt : " << cnt << endl;
	if (N == 0) return;
	for (int i = 0; i < 3; i++)
	{
		solve(N - 1); //이 함수가 몇번 실행?  =>   O(3^n)
	}
	return;
}
//O(1) x O(3^n) = O(3^n)
int main()
{
	cin >> N;
	solve(N);
	return 0;
}
//https://dooding.tistory.com/75