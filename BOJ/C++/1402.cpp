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
		int a(0), b(0);
		std::cin >> a >> b;
		std::cout << "yes\n";
	}
	return 0;
}
