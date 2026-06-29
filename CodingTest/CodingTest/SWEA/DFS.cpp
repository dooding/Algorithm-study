#include < iostream>
#include <stack>
#include <vector>
using namespace std;

bool visited[10];
vector<int> graph[9];

void DFS(int v);

int main()
{

    graph[1].push_back(2);
    graph[1].push_back(5);
    graph[1].push_back(9);

    graph[2].push_back(3);

    graph[3].push_back(4);

    graph[5].push_back(6);
    graph[5].push_back(8);

    graph[6].push_back(7);

    graph[9].push_back(10);

    DFS(1);


}
void DFS(int v)
{
	visited[v] = true;
    cout << v << endl;
    
    for (int i = 0; i < graph[v].size(); i++)
    {
        int y = graph[v][i];
        if (!visited[y])
            DFS(y);
    }

}