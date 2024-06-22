#include <iostream>
int N(0), M(0);
bool visited[9]{};
int number[9]{};

void dfs(int cnt, int size)
{
	if (size == M)
	{
		for (int i = 0; i < M; ++i)
		{
			std::cout << number[i] << ' ';
		}
		std::cout << "\n";
	}
	else
	{
		for (int i = cnt; i <= N; ++i)
		{
			if (visited[i] == false)
			{
				visited[i] = true;
				number[size] = i;
				dfs(i + 1, size + 1);
				visited[i] = false;
			}
		}
	}
}

int main()
{
	std::ios_base::sync_with_stdio(0);
	std::cout.tie(0);
	std::cin.tie(0);

	std::cin >> N >> M;
	dfs(1, 0);
	return 0;
}
