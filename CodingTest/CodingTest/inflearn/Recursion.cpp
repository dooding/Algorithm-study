/*
* 재귀함수
* 전달되는 함수인 매개변수가 바뀌면서 똑같은 일을 함.
* 큰 문제를 작은 부분 문제로 나눠서 쓸 떄 사용함.
* 
* 주의 1 ) 종료 조건 필수
* 주의 2) 사이클 불가
* 주의 3) 반복문 될거같으면 반복문
*/
#include <iostream>
using namespace std;

int fact(int n)
{
	if (n == 1 || n == 0) return 1;
	return n * fact(n - 1);
}

int fibo(int n)
{
	if (n == 0 || n == 1) return n;
	return fibo(n - 1) + fibo(n - 2);
}

int n = 5;
int main()
{
	cout << fact(n) << " " << fibo(n) << endl;
}