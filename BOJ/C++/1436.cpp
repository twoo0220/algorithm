#include <iostream>

int main()
{
	std::ios_base::sync_with_stdio(0);
	std::cout.tie(0);
	std::cin.tie(0);

	int count = 0;
	std::cin >> count;

	int result = 0;

	while (count > 0)
	{
		result++;
		int temp = result;
		while (temp != 0)
		{
			if ((temp % 1000) == 666)
			{
				count--;
				break;
			}
			else
			{
				temp /= 10;
			}
		}
	}

	std::cout << result;
	return 0;
}
