#include <iostream>
#include <queue>

int main()
{
	std::ios_base::sync_with_stdio(0);
	std::cout.tie(0);
	std::cin.tie(0);

	const int moveX[4] = { -1, 1, 0, 0 };
	const int moveY[4] = { 0, 0, -1, 1 };

	int count = 0;
	std::cin >> count;

	for (int i = 0; i < count; ++i)
	{
		int width(0), height(0), total(0);
		std::cin >> width >> height >> total;
		int miro[50][50]{};
		bool visited[50][50]{};

		for (int j = 0; j < total; ++j)
		{
			int a(0), b(0);
			std::cin >> a >> b;
			miro[a][b] = 1;
		}

		std::queue<std::pair<int, int>> que;
		int count = 0;
		for (int j = 0; j < width; ++j)
		{
			for (int k = 0; k < height; ++k)
			{
				if ((miro[j][k] == 1) && (visited[j][k] == false))
				{
					visited[j][k] = true;
					count++;
					que.push({ j, k });

					while (!que.empty())
					{
						int x = que.front().first;
						int y = que.front().second;
						que.pop();

						for (int l = 0; l < 4; ++l)
						{
							int checkX = x + moveX[l];
							int checkY = y + moveY[l];
							if ((checkX >= 0) &&
								(checkX < width) &&
								(checkY >= 0) &&
								(checkY < height) &&
								(miro[checkX][checkY] == 1) &&
								(visited[checkX][checkY] == false))
							{
								que.push({ checkX, checkY });
								visited[checkX][checkY] = true;
							}
						}
					}
				}
			}
		}
		std::cout << count << "\n";
	}

	return 0;
}
