#include <iostream>
#include <vector>

int main()
{
	std::ios_base::sync_with_stdio(0);
	std::cout.tie(0);
	std::cin.tie(0);

	int count = 0;
	int max = -1;
	for (int i = 0; i < 4; ++i)
	{
		int minus(0), plus(0);
		std::cin >> minus >> plus;
		count += (plus - minus);
		if (count > max)
		{
			max = count;
		}
	}
	std::cout << max;;
	return 0;
}
