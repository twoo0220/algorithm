#include <iostream>
#include <math.h>
#include <vector>

int main()
{
	std::ios_base::sync_with_stdio(false);
	std::cout.tie(0);
	std::cin.tie(0);

	std::vector<int> vec;
	int number(0), P(0), count(0);
	std::cin >> number >> P;

	vec.push_back(number);
	
	while (true)
	{
		count = 0;
		int tempNumber = 0;
		while (number != 0)
		{
			tempNumber += std::pow(number % 10, P);
			number /= 10;
		}

		for (int i = 0; i < vec.size(); ++i)
		{
			if (vec[i] == tempNumber)
			{
				goto out;
			}
			count++;
		}
		number = tempNumber;
		vec.push_back(number);
	}
	
out:
	std::cout << count;
	return 0;
}
