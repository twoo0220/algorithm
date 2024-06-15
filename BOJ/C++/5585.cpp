#include <iostream>
#include <algorithm>

int main()
{
	std::ios_base::sync_with_stdio(0);
	std::cout.tie(0);
	std::cin.tie(0);

	int value = 0;
	std::cin >> value;
	
	int remain = 1000 - value;
	
	const int coin[6] = { 500, 100, 50, 10, 5, 1 };
	int index = 0;
	int count = 0;
	while (remain != 0)
	{
		if ((remain - coin[index]) >= 0)
		{
			remain -= coin[index];
			count++;
		}
		else
		{
			index++;
		}
	}

	std::cout << count;
	
	return 0;
}
