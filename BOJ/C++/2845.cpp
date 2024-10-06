#include <iostream>

int main()
{
	std::ios_base::sync_with_stdio(0);
	std::cout.tie(0);
	std::cin.tie(0);

	int a(0), b(0);
	std::cin >> a >> b;

	const int extent = a * b;
	
	for (int i = 0; i < 5; ++i)
	{
		int people = 0;
		std::cin >> people;
		std::cout << (people - extent) << " ";
	}
	return 0;
}
