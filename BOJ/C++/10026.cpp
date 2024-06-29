#include <iostream>
#include <queue>

char miro[100][100]{};
bool visited[100][100]{};
const int moveX[4] = { -1, 1, 0, 0 };
const int moveY[4] = { 0, 0, -1, 1 };

int main()
{
	std::ios_base::sync_with_stdio(0);
	std::cout.tie(0);
	std::cin.tie(0);

	int size = 0;
	std::cin >> size;

	for (int i = 0; i < size; ++i)
	{
		for (int j = 0; j < size; ++j)
		{
			std::cin >> miro[i][j];
		}
	}

	std::queue<std::pair<int, int>> que;

	for (int s = 0; s < 2; ++s)
	{
		int count = 0;
		for (int i = 0; i < size; ++i)
		{
			for (int j = 0; j < size; ++j)
			{
				if (visited[i][j] == false)
				{
					visited[i][j] = true;
					count++;
					que.push({ i, j });

					while (!que.empty())
					{
						int x = que.front().first;
						int y = que.front().second;
						que.pop();

						for (int k = 0; k < 4; ++k)
						{
							int checkX = x + moveX[k];
							int checkY = y + moveY[k];
							if ((checkX >= 0) &&
								(checkX < size) &&
								(checkY >= 0) &&
								(checkY < size) &&
								(visited[checkX][checkY] == false) &&
								(miro[checkX][checkY] == miro[x][y]))
							{
								que.push({ checkX, checkY });
								visited[checkX][checkY] = true;
							}
						}
					}
				}
			}
		}
		std::cout << count << " ";

		for (int i = 0; i < size; ++i)
		{
			for (int j = 0; j < size; ++j)
			{
				if (miro[i][j] == 'G')
				{
					miro[i][j] = 'R';
				}

				visited[i][j] = false;
			}
		}
	}

	return 0;
}
