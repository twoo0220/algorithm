#include <iostream>
#include <queue>

int miro[100][100]{};
bool visited[100][100]{};
const int moveX[4] = { -1, 1, 0, 0 };
const int moveY[4] = { 0, 0, -1, 1 };

int main()
{
	std::ios_base::sync_with_stdio(0);
	std::cout.tie(0);
	std::cin.tie(0);

	std::queue<std::pair<int, int>> que;
	int size(0), result(0), max(0), maxHeight(-1);
	std::cin >> size;

	for (int i = 0; i < size; ++i)
	{
		for (int j = 0; j < size; ++j)
		{
			std::cin >> miro[i][j];
			if (maxHeight < miro[i][j])
			{
				maxHeight = miro[i][j];
			}
		}
	}

	for (int i = 0; i <= maxHeight; ++i)
	{
		int height = i;
		for (int j = 0; j < size; ++j)
		{
			for (int k = 0; k < size; ++k)
			{
				if (visited[j][k] == false)
				{
					visited[j][k] = true;
					if (miro[j][k] > height)
					{
						result++;
						que.push({ j, k });
						while (!que.empty())
						{
							int x = que.front().first;
							int y = que.front().second;
							que.pop();

							for (int m = 0; m < 4; ++m)
							{
								int checkX = x + moveX[m];
								int checkY = y + moveY[m];
								if ((checkX >= 0) &&
									(checkX < size) &&
									(checkY >= 0) &&
									(checkY < size) &&
									(visited[checkX][checkY] == false) &&
									(miro[checkX][checkY] > height))
								{
									que.push({ checkX, checkY });
									visited[checkX][checkY] = true;
								}
							}
						}
					}
				}
			}
		}

		for (int j = 0; j < size; ++j)
		{
			for (int k = 0; k < size; ++k)
			{
				visited[j][k] = false;
			}
		}

		if (result > max)
		{
			max = result;
		}
		result = 0;
	}
	
	std::cout << max;
	return 0;
}
