#include <iostream>

int main()
{
	std::ios_base::sync_with_stdio(0);
	std::cout.tie(0);
	std::cin.tie(0);

	int size = 0;
	std::cin >> size;

	for (int i = 0; i < size; ++i)
	{
		int total(0), count(0);
		std::cin >> total >> count;
		std::cout << count * 2 - total << " " << total - count << "\n";
	}
	return 0;
}
