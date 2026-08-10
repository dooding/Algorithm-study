
/*
* (반드시 암기)
65는 대문자 A
97은 소문자 a
*/
#include <bits/stdc++.h>
using namespace std;
string s;

int main() 
{
	getline(cin, s);

	for (int i = 0; i < s.size(); i++)
	{
		//cout << "i : " << i << endl;
		//cout << "[i} : " << s[i] << endl;
		if (65 <= s[i] && s[i] < (65 + 26))
		{
			//s[i] = (char)(65 + (((s[i] + 13) % 65)%26));
			s[i] = (char)(65+(s[i]-65+13)%26);
			//cout << s[i] + 13 << " " << "\n";
			//cout << "나머지 연산 : " <<  (s[i] + 13) % 70 << " " << "\n";
			//s[i] += 13;
		}
		else if (97 <= s[i] && s[i] < (97 + 26))
		{
			//s[i] = (char)(97 + (((s[i] + 13)%97) %26));
			s[i] = (char)(97 + (s[i] - 97 + 13) % 26);
		}
	}

	cout << s;

	return 0;
}