/*
* split() : C++에서 직접 구현해야함.
* 문자열이 있을 때, 특정 문자를 기반으로 분리해서 배열 형태로 바꾸는 함수
* "abc,abd,bcd" == Split(문자열, ,)==> [abc, abd, bcd]
*/

#include <vector>
#include <iostream>
using namespace std;

vector<string> split(const string& input, string delimiter)
{
	vector<string> result; //배열 반환
	auto start = 0;
	auto end = input.find(delimiter);
	while (end != string::npos)
	{
		result.push_back(input.substr(start, end - start));
		start = end + delimiter.size();
		end = input.find(delimiter, start);
	}
	result.push_back(input.substr(start));
	return result;
}

int main()
{
	string str = "apple,banana,orange,grape";
	vector<string> fruits = split(str, ",");
	for (const string& fruit : fruits)
	{
		cout << fruit << " ";
	}
	return 0;
}