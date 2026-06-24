#include <iostream>
#include <vector>
using namespace std;
vector<int> v;

int fibo(int n);
int fibo1(int n);

int main()
{
	cout << fibo(30) << endl;
	cout << fibo1(30) << endl;
}

int fibo(int n)
{
	v.clear();
	v.push_back(0);
	v.push_back(1);
	
	if (n < 2)
		return v[n];
	else
	{
		for (int i = 2; i <= n; i++)
		{
			v.push_back(v[i - 1] + v[i - 2]);
		}
	}
	return v[n];

}

int fibo1(int n)
{
	int result = 0;

	if (n < 2) return n;
	else
	{
		int a = 0;
		int b = 1;
		
		for (int i = 2; i <= n; i++)
		{
			result = a + b;
			a = b;
			b = result;
		
		}

		return result;
	}
}

