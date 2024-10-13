#include <iostream>
#include <vector>

int main()
{
	std::ios_base::sync_with_stdio(false);
	std::cout.tie(0);
	std::cin.tie(0);

	int number(0), formation(0);
	std::vector<char> result;
	std::cin >> number >> formation;

	while (number > 0)
	{
		int remain = number % formation;
		
		char ch = 48; // 0
		if (remain > 9)
		{
			ch += (7 + remain);
		}
		else // remain < 10
		{
			ch += remain;
		}

		result.push_back(ch);
		number /= formation;
	}

	for (int i = result.size() - 1; i >= 0; --i)
	{
		std::cout << result[i];
	}

	return 0;
}
