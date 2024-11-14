#include <iostream>

int main()
{
	std::ios_base::sync_with_stdio(false);
	std::cout.tie(0);
	std::cin.tie(0);

	int number = 0;
	std::cin >> number;

	int count = 0;
	for (int i = number; i > 0; --i)
	{
		int sum = 0;
		for (int j = i; j > 0; --j)
		{
			sum += j;
			if (sum == number)
			{
				count++;
				break;
			}
			
			if (sum > number)
			{
				break;
			}
		}
	}

	std::cout << count;
	return 0;
}
