#include <iostream>

int main()
{
	std::ios_base::sync_with_stdio(0);
	std::cout.tie(0);
	std::cin.tie(0);

	int count = 1;
	int N = 0;
	std::cin >> N;

	while (count * 2 <= N)
	{
		count *= 2;
	}

	std::cout << count;
	return 0;
}