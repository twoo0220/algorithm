#include <iostream>

int main()
{
	std::ios_base::sync_with_stdio(0);
	std::cout.tie(0);
	std::cin.tie(0);

	int count(0), sum(0);
	std::cin >> count;

	for (int i = 1; i <= count; ++i)
	{
		int temp = 0;
		std::cin >> temp;
		int a = temp * i - sum;
		std::cout << a << " ";
		sum += a;
	}
	return 0;
}
