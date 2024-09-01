#include <iostream>
#include <string>
#include <algorithm>

int main()
{
	std::ios_base::sync_with_stdio(false);
	std::cout.tie(0);
	std::cin.tie(0);

	std::string number;
	std::cin >> number;
	int sum = 0;
	for (int i = 0; i < number.size(); ++i)
	{
		sum += number[i] - 48;
	}

	std::sort(number.begin(), number.end(), std::greater<int>());
	if (((sum % 3) != 0) || (number.back() != '0'))
	{
		std::cout << -1;
	}
	else
	{
		std::cout << number;
	}

	return 0;
}
