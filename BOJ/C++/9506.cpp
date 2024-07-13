#include <iostream>
#include <vector>
#include <algorithm>

int main()
{
	std::ios_base::sync_with_stdio(0);
	std::cout.tie(0);
	std::cin.tie(0);

	while (true)
	{
		int number = 0;
		std::cin >> number;

		if (number == -1)
		{
			break;
		}

		std::vector<int> vec;
		int sum = 1;
		vec.push_back(1);
		for (int i = 2; i * i <= number; ++i)
		{
			if (i * i == number)
			{
				vec.push_back(i);
				sum += i;
			}
			else if (number % i == 0)
			{
				vec.push_back(i);
				vec.push_back(number / i);
				sum += i;
				sum += (number / i);
			}
		}

		std::cout << number;
		if (sum == number)
		{
			std::sort(vec.begin(), vec.end());
			std::cout << " = 1";
			for (int i = 1; i < vec.size(); ++i)
			{
				std::cout << " + " << vec[i];
			}
		}
		else
		{
			std::cout << " is NOT perfect.";
		}
		std::cout << "\n";
	}

	return 0;
}
