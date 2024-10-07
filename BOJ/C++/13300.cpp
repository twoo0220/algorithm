#include <iostream>

int main()
{
	std::ios_base::sync_with_stdio(false);
	std::cout.tie(0);
	std::cin.tie(0);

	int peopleMax(0), available(0), result(0);
	int boyRoom[7]{};
	int girlRoom[7]{};
	std::cin >> peopleMax >> available;

	for (int i = 0; i < peopleMax; ++i)
	{
		int sex(0), grade(0);
		std::cin >> sex >> grade;

		if (sex == 1) // boyRoom
		{
			if (boyRoom[grade] >= available)
			{
				boyRoom[grade] = 0;
				result++;
			}
			else
			{
				if (boyRoom[grade] == 0)
				{
					result++;
				}
			}
			boyRoom[grade]++;
		}
		else // girl
		{
			if (girlRoom[grade] >= available)
			{
				girlRoom[grade] = 0;
				result++;
			}
			else
			{
				if (girlRoom[grade] == 0)
				{
					result++;
				}
			}
			girlRoom[grade]++;
		}
	}

	std::cout << result;
	return 0;
}
