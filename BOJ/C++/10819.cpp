#include <iostream>
#include <vector>
#include <math.h>

int size(0), result(0), tempResult(0);
std::vector<int> arr;
int numbers[8]{};
bool visited[8]{};

static void backTracking()
{
	if (arr.size() == size)
	{
		tempResult = 0;
		for (int i = 0; i < size - 1; ++i)
		{
			tempResult += std::abs(arr[i + 1] - arr[i]);
		}

		result = std::max(result, tempResult);
	}
	else
	{
		for (int i = 0; i < size; ++i)
		{
			if (!visited[i])
			{
				visited[i] = true;
				arr.push_back(numbers[i]);

				backTracking();

				visited[i] = false;
				arr.pop_back();
			}
		}
	}
}

int main()
{
	std::ios_base::sync_with_stdio(0);
	std::cout.tie(0);
	std::cin.tie(0);

	std::cin >> size;
	arr.reserve(size);

	for (int i = 0; i < size; ++i)
	{
		std::cin >> numbers[i];
	}

	backTracking();
	std::cout << result;

	return 0;
}
