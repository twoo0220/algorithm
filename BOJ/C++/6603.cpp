#include <iostream>

int count = 0;
int lotto[13]{};
int arr[6]{};

void dfs(int start, int depth)
{
	if (depth == 6)
	{
		for (int i = 0; i < 6; ++i)
		{
			std::cout << arr[i] << ' ';
		}
		std::cout << "\n";
	}
	else
	{
		for (int i = start; i < count; ++i)
		{
			arr[depth] = lotto[i];
			dfs(i + 1, depth + 1);
		}
	}
}

int main()
{
	std::ios_base::sync_with_stdio(0);
	std::cout.tie(0);
	std::cin.tie(0);

	while (true)
	{
		count = 0;
		std::cin >> count;

		if (count == 0)
		{
			break;
		}

		for (int j = 0; j < count; ++j)
		{
			std::cin >> lotto[j];
		}

		dfs(0, 0);
		std::cout << "\n";
	}

	return 0;
}
