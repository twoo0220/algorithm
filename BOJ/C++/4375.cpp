#include <iostream>

int main()
{
	std::ios_base::sync_with_stdio(false);
	std::cout.tie(0);
	std::cin.tie(0);

	int number = 1;
	while ((std::cin >> number))
	{
		int result = 1;
		int count = 1;
		while (true)
		{
			if ((result % number) == 0)
			{
				break;
			}

			result = result * 10 + 1;
			result %= number;
			count++;
		}
		std::cout << count << "\n";
	}

	return 0;
}
