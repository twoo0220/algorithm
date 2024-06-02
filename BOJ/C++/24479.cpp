#include <iostream>
#include <vector>
#include <algorithm>

std::vector<int> graph[100001];
bool visited[100001]{};
int result[100001]{};

int depth = 1;

void dfs(int count)
{
    visited[count] = true;
    result[count] = depth++;
    for (int i = 0; i < graph[count].size(); ++i)
    {
        int temp = graph[count][i];
        if (visited[temp] == false)
        {
            dfs(temp);
        }
    }
}

int main()
{
    std::ios_base::sync_with_stdio(0);
    std::cout.tie(0);
    std::cin.tie(0);

    int n(0), m(0), r(0);
    std::cin >> n >> m >> r;

    for (int i = 0; i < m; ++i)
    {
        int u(0), v(0);
        std::cin >> u >> v;
        graph[u].push_back(v);
        graph[v].push_back(u);
    }

    for (int i = 1; i <= n; ++i)
    {
        std::sort(graph[i].begin(), graph[i].end());
    }

    dfs(r);
    for (int i = 1; i <= n; ++i)
    {
        std::cout << result[i] << "\n";
    }

    return 0;
}
