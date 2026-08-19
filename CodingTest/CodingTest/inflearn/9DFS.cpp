#include <bits/stdc++.h>
using namespace std;

int dy[] = { -1, 0, 1, 0 };
int dx[] = { 0, 1, 0, -1 };

const int N = 104;
const int M = 104;
int n = 0;
int m = 0;

int maps[N][M] = { 0 };
int visited[N][M] = { 0 };

void DFS(int y, int x)
{
	visited[y][x] = 1;
	
	for (int i = 0; i < 4; i++)
	{
		int yy = y + dy[i];
		int xx = x + dx[i];

		if (yy < 0 || yy >= n || xx < 0 || xx >= m) continue; // 범위 >가 아니라 >=
		if (maps[yy][xx] == 1 && visited[yy][xx] == 0) //조건 추가해주기 =. 조건이 없으면 무한 루프에 빠져버린다.
		{
			DFS(yy, xx);

		}
		
	}

	return;
}

int main()
{
	cin.tie(NULL);	//추가 해주기
	cout.tie(NULL);

	cin >> n >> m;

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			cin >> maps[i][j];
		}
	}

	int count = 0;

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			if (maps[i][j] == 1 && visited[i][j] == 0)
			{
				count++;
				DFS(i, j);
			}
		}
	}

	cout << count;




	return 0;
}



/*
*
* 오답노트 : 문제 해석을 잘 못함
* 방구 한번에 상하좌우 오염되는 줄 알았으나
* 문제에서 요구한 것은 방구 한번에 상하좌우로 퍼지며 육지와 연결된 모든 곳이 오염되므로
* 연결된 컴포넌트가 몇개인지 찾는 것이었음.
int dy[] = { -1, 0, 1, 0 };
int dx[] = { 0, 1, 0, -1 };

const int N = 104;
const int M = 104;
int maps[N][M] = { 0 };
int visited[N][M] = { 0 };
int bangu[N][M] = { 0 };
int banguCount = 0;

void DFS(int y, int x)
{
	if (maps[y][x] == 0) return;
	//0. 방문
	visited[y][x] = 1;
	//1. 퍼뜨림
	if (maps[y][x] == 1 && bangu[y][x] == 0)
	{
		banguCount++;
		//2. 상하좌우 오염
		for (int i = 0; i < 4; i++)
		{
			int by = y + dy[i];
			int bx = y + dx[i];
			if (by < 0 || by > N || bx < 0 || bx > M) continue;
			if (maps[by][bx] == 1 && bangu[by][bx] == 0) bangu[by][bx] = 1;
		}
	}
	//3. 다음방 이동
	for (int i = 0; i < 4; i++)
	{
		int by = y + dy[i];
		int bx = y + dx[i];
		if (by < 0 || by > N || bx < 0 || bx > M) continue;
		
		DFS(by, bx);
	}
}

int main()
{
	int n;
	int m;

	cin >> n >> m;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			cin >> maps[i][j];
		}
	}

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			DFS(i, j);
		}
		
	}

	cout << banguCount;
}
*/