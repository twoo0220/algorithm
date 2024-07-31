#include <iostream>
#include <string>

int main()
{
	std::ios_base::sync_with_stdio(0);
	std::cout.tie(0);
	std::cin.tie(0);

	std::string str;
	std::cin >> str;

	int result = 0;
	for (int i = 0; i < str.size(); ++i)
	{
		if (str[i] > 90)
		{
			result += (str[i] - 96);
		}
		else
		{
			result += (str[i] - 38);
		}
	}

	int remain = 0;
	for (int i = 1; i <= result; ++i)
	{
		if (result % i == 0)
		{
			remain++;
		}
	}

	if (remain == 1 || remain == 2)
	{
		std::cout << "It is a prime word.";
	}
	else
	{
		std::cout << "It is not a prime word.";
	}

	return 0;
}
