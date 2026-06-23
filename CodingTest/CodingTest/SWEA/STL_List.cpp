#include <iostream>
#include <list>
using namespace std;

int main()
{
	list<int> myList;
	list<int>::iterator it;

	for (int i = 0; i < 5; i++)
	{
		int num = 0;
		cin >> num;
		myList.push_back(num);
	}

	cout << "리스트 값 전체 출력하기 (노드, 이터레이터)" << endl;
	for (it = myList.begin(); it != myList.end(); it++)
	{
		cout << *it << " ";
	}
}
