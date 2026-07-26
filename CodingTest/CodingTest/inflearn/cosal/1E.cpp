#include <bits/stdc++.h>
using namespace std;
int name[30] = { 0 };
bool isGame = false;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	int count = 0;
	cin >> count;

	for (int i = 0; i < count; i++)
	{
		string c;
		cin >> c;
		name[c[0] - 'a']++;
	}

	for (int i = 0; i < 30; i++)
	{
		if (name[i] >= 5)
		{
			cout << (char)(i + 'a');
			isGame = true;
		}

	}
	if (!isGame)
	{
		cout << "PREDAJA";
	}
	
	return 0;
}