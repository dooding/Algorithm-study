#include <bits/stdc++.h>
using namespace std;

const int V = 10;
vector<int> adj[V];
bool vis[V] = { false };

void search(int from)
{
	for (int to = 0; to < adj[from].size(); to++)
	{
		if (!vis[from])
		{
			cout << from << '\n';
			vis[from] = true;
			search(to);
		}
	}
}

int main()
{
	adj[1].push_back(2);
	adj[1].push_back(3);
	
	adj[2].push_back(1);

	adj[3].push_back(1);
	adj[3].push_back(4);

	adj[4].push_back(3);

	for (int i = 0; i < V; i++)
	{
		search(i);
	}


}

/*
문제
0부터 9번 10개 노드 (1-2 / 1-3 / 3-4)
인접 리스트 사용해서 모든 노드 방문 출력
*/