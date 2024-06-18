#include <iostream>
#include <vector>

int main()
{
	std::ios_base::sync_with_stdio(0);
	std::cout.tie(0);
	std::cin.tie(0);

	int roomCount = 0;
	std::cin >> roomCount;
	std::vector<int> vecRoom(roomCount);

	for (int i = 0; i < roomCount; ++i)
	{
		std::cin >> vecRoom[i];
	}

	int sub(0), observe(0);
	std::cin >> sub >> observe;

	long long result = roomCount;
	for (int i = 0; i < roomCount; ++i)
	{
		vecRoom[i] -= sub;
		if (vecRoom[i] > 0)
		{
			result += vecRoom[i] / observe;
			if ((vecRoom[i] % observe) > 0)
			{
				result++;
			}
		}
	}
	std::cout << result;

	return 0;
}
