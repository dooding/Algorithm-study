//핵심 아이디어
/*
* 1. 배열과 다르게 방 크기는 미리 정하지 않아도 됨.
* 2. 인덱스가 아닌 이터레이터로 관리 (연속된 공간 X, 연결리스트 사용)
* 3. 설명 : https://dooding.tistory.com/65
*/
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
