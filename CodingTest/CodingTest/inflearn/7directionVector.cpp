#include <bits/stdc++.h>
using namespace std;

int dy[] = { -1, 0, 1, 0 };
int dx[] = { 0, 1, 0, -1 };

const int mx = 3;
const int my = 3;

int maps[mx][my] = {
	{1,0,1},
	{1,0,1},
	{0,1,1}
};
bool visited[mx][my] = { false };

void go(int y, int x)
{
	cout << y << ", " << x << '\n';
	visited[y][x] = true;

	for (int i = 0; i < 4; i++)
	{
		int ny = y + dy[i];
		int nx = x + dx[i];

		//언더 플로우, 오버 플로우 반드시 체크
		if (ny < 0 || ny > my || nx < 0 || nx > mx) continue;

		if (maps[ny][nx] == 1 && visited[ny][nx] == false)
		{
			go(ny, nx);
		}


	}
}

/*
*오답 노트
* x,y값이 바뀌어 버리면 다른 곳 방문을 놓칠 가능성이 있다.
* 지금은 3,3이지만 나중에 크기가 더 커지면 놓칠 가능성도 있다.
* 
void go()
{
	for (int i = 0; i < 4; i++)
	{
		int ny = y + dy[i];
		int nx = x + dx[i];

		if (ny < 0 || ny > my || nx < 0 || nx > mx) continue;
		
		if (maps[ny][nx] == 1 && visited[ny][nx] == false)
		{
			cout << ny << ", " << nx << '\n';
			visited[ny][nx] = true;

			y = ny;
			x = nx;

			go();
		}

		//현재 내 위치 방문
		//갈 수 있는 영역 확인
		//이동할 수 있으면 이동
		
	}
}
*/

int main()
{

	go(0,0);
}