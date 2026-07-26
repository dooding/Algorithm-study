#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

//36페이지 1.4 타입과 타입 변환 부터 하기

/*
* 
int a = 1;
char s = 'a';
string str = "어벤져스";
double d = 1.223123;

int main()
{
	printf("아이엠어 아이언맨 : %d\n", a);
	printf("아이엠어 아이언맨 : %c\n", s);
	printf("아이엠어 아이언맨 : %s\n", str.c_str());
	printf("아이엠어 아이언맨 : %lf\n", d);
}



/*
typedef long long ll;
double d = 1.23456789;
int e = 12;
int f = 2;

int a = 1, b = 2;
int main()
{
	printf("홍철 %d : 지수 %d\n", a, b);

	printf("%.6lf\n", d);
	printf("%02d\n", e);
	printf("%02d\n", f);

	return 0;
}

//typedef long long ll;
double a = 1.23456789;

int main()
{
	cout << a << "\n";
	cout << fixed << setprecision(3) << a << "\n";
	cout << fixed << setprecision(8) << a << "\n";
	return 0;
}



* cin 이후에 버퍼 비우기
int T;
string s;
int main()
{
	cin >> T;
	string bufferFlush;
	getline(cin, bufferFlush);

	for (int i = 0; i < T; i++)
	{
		getline(cin, s);
		cout << s << "\n";
	}
	return 0;
}



string s, d;
int main()
{
	getline(cin, s);
	cout << s << "\n";

	getline(cin, d, '.');
	cout << d << '\n';
	return 0;


}

* 실수 = 정수.정수
#define _CRT_SECURE_NO_WARNINGS  // 반드시 #include보다 위에!

int a, b;
double c;
int main()
{
	scanf("%d.%d", &a, &b);
	printf("\n%d %d\n", a, b);

	scanf("%lf", &c);
	printf("%lf\n", c);
	return 0;
}


* scanf 사용법
#define _CRT_SECURE_NO_WARNINGS  // 반드시 #include보다 위에!

int a ;
double b ;
char c ;

int main()
{
	//scanf("%d %lf %c", &a, &b, &c);
	int rey = scanf("%d %lf %c", &a, &b, &c);
	printf("성공개수 : %d\n", rey);
	printf("%d\n", a);
	printf("%lf\n", b);
	printf("%c\n", c);

	return 0;
}

* cin 입력 (띄어쓰기하면 그 다음껀 그 다음이 받음)
string a, b;

int main()
{
	cin >> a >> b;
	cout << a << "\n";
	cout << b << "\n";
	return 0;
}



* define 방법
#define PI 3.14159
#define loop(i,n) for(int i = 0; i < n; i ++)

int main()
{
	cout << PI << "\n";
	int sum = 0;
	loop(i, 10)
	{
		sum += i;
	}
	cout << sum << "\n";
	return 0;
}


* 출력
string a;
int main()
{
	cin >> a;
	cout << a << "\n";
	return 0;
}
*/