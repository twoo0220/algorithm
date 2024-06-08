#include <iostream>
#include <string>
#include <queue>
#include <vector>
#include <algorithm>

int main()
{
	std::ios_base::sync_with_stdio(0);
	std::cout.tie(0);
	std::cin.tie(0);

	int miro[25][25]{};
	bool visited[25][25]{};
	int moveX[4] = { -1, 1, 0, 0 };
	int moveY[4] = { 0, 0, -1, 1 };

	int size = 0;
	std::cin >> size;
	for (int i = 0; i < size; ++i)
	{
		std::string temp;
		std::cin >> temp;
		for (int j = 0; j < size; ++j)
		{
			miro[i][j] = temp[j] - '0';
		}
	}

	std::queue<std::pair<int, int>> que;
	std::vector<int> result;

	for (int i = 0; i < size; ++i)
	{
		for (int j = 0; j < size; ++j)
		{
			if ((miro[i][j] == 1) && (visited[i][j] == false))
			{
				visited[i][j] = true;
				int count = 1;
				que.push({ i, j });

				while (!que.empty())
				{
					int x = que.front().first;
					int y = que.front().second;
					que.pop();

					for (int i = 0; i < 4; ++i)
					{
						int checkX = x + moveX[i];
						int checkY = y + moveY[i];
						if ((checkX >= 0) &&
							(checkX < size) &&
							(checkY >= 0) &&
							(checkY < size) &&
							(miro[checkX][checkY] == 1) &&
							(visited[checkX][checkY] == false))
						{
							que.push({ checkX, checkY });
							visited[checkX][checkY] = true;
							count++;
						}
					}
				}
				result.push_back(count);
			}
		}
	}

	std::sort(result.begin(), result.end());
	std::cout << result.size() << "\n";
	for (size_t i = 0; i < result.size(); ++i)
	{
		std::cout << result[i] << "\n";
	}

	return 0;
}