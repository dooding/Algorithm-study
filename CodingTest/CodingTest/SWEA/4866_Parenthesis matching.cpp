#include <iostream>
#include <stack>
#include <vector>
#include <string> //getline을 위해서 추가
using namespace std;

int main()
{
	int qNum = 0;
	cin >> qNum;
	cin.ignore(); //추가 (cin 후 남은 문자 제거)

	vector<int> results;

	
	for (int i = 1; i <= qNum; i++) //출력 번호를 위해 i는 1부터 시작
	{
		stack<char> stacks;
		string text;
		//cin >> text;
		getline(cin, text);

		bool valid = true;

		//vector<char> vecText(text.begin(), text.end());

		for (int j = 0; j < text.size(); j++)
		{
			if (text[j] == '{' || text[j] == '(')
				stacks.push(text[j]);
			
			else if (text[j] == '}' || text[j] == ')')
			{
				if (stacks.empty()) //스택이 비었는데 닫는 괄호 나오면 바로 실패 처리
				{
					valid = false;
					break;
				}
				char c = stacks.top();
				if (text[j] == '}' && c == '{')
					stacks.pop();
				else if (text[j] == ')' && c == '(')
					stacks.pop();
				else  //두가지 경우가 아닐때에도 false 처리 해주기
				{
					valid = false;
					break;
				}
			}
		
		}

		if (!stacks.empty())
			valid = false;

		results.push_back(valid ? 1 : 0);
		
	}

	for (int i = 0; i < results.size(); i++)
		cout << "#" << i + 1 << " " << results[i] << endl;
}