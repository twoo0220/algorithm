#include <iostream>
#include <queue>

int main()
{
	std::ios_base::sync_with_stdio(0);
	std::cout.tie(0);
	std::cin.tie(0);

	int count = 0;
	std::cin >> count;

	for (int i = 0; i < count; ++i)
	{
		int size(0), index(0);
		std::cin >> size >> index;

		std::queue<std::pair<int, bool>> paper;
		int importance[10]{};
		for (int j = 0; j < size; ++j)
		{
			int number = 0;
			std::cin >> number;
			paper.push({ number, j == index});
			
			importance[number]++;
		}

		int result = 0;
		for (int j = 9; j >= 0; --j)
		{
			while (importance[j] > 0)
			{
				if (j == paper.front().first)
				{
					result++;
					if (paper.front().second == true)
					{
						goto answer;
					}

					paper.pop();
					importance[j]--;
				}
				else
				{
					paper.push(paper.front());
					paper.pop();
				}
			}
		}
answer:
		std::cout << result << "\n";
	}
	return 0;
}
