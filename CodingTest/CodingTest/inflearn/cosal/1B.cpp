//counting star는 맵 또는 배열 사용
#include <iostream>
using namespace std;
int alp[26] = { 0 };

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	string c = "";
	cin >> c;

	for (int i = 0; i < c.size(); i++)
	{
		if (c[i] != ' ')
		{
			alp[c[i] - 'a']++;
		}
	}

	for (int i = 0; i < 26; i++)
	{
		cout << alp[i] << " ";
	}

}

//count을 할 때, string을 기반은 map / Int 기반은 Array
