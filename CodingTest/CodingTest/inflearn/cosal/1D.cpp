#include <iostream>
#include <algorithm> //reverse는 포함해야 함.
using namespace std;
string word;
string temp;

int main()
{
	cin >> word;
	temp = word;
	reverse(word.begin(), word.end()); //원본 배열에 영향이 감.
	if (word == temp) cout << "1";
	
	else
	{
		cout << "0";
	}

	return 0;
}



/*
* 내가 푼 문제
string word;
int l, r;


int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	cin >> word;

	l = 0;
	r = word.size() - 1;

	for (l = 0; l != r; l++, r--)
	{
		if (word[l] != word[r]) {
			cout << "0";
			break;
		}
	}

	if (l == r)
		cout << "1";

	return 0;
}*/