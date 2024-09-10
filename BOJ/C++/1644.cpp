#include <iostream>
#include <vector>

int main()
{
	std::ios_base::sync_with_stdio(false);
	std::cout.tie(0);
	std::cin.tie(0);
	
	std::vector<int> primeNumber;
	int number = 1;
	std::cin >> number;

	std::vector<bool> primeBool(number + 1, true);
	primeBool[0] = false;
	primeBool[1] = false;

	for (int i = 2; i * i <= number; ++i)
	{
		if (primeBool[i])
		{
			for (int j = i * i; j <= number; j += i)
			{
				primeBool[j] = false;
			}
		}
	}

	for (int i = 2; i <= number; ++i)
	{
		if (primeBool[i])
		{
			primeNumber.push_back(i);
		}
	}

	int start(0), end(0), sum(0), count(0);
	while (true)
	{
		if (sum > number)
		{
			sum -= primeNumber[start];
			start++;
		}
		else // sum < number
		{
			if (sum == number)
			{
				count++;
			}

			if (end >= primeNumber.size())
			{
				break;
			}
			sum += primeNumber[end];
			end++;
		}
	}

	std::cout << count;

	return 0;
}
