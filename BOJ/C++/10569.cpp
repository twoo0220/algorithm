#include <iostream>

int main()
{
	std::ios_base::sync_with_stdio(false);
	std::cout.tie(0);
	std::cin.tie(0);

	// (꼭짓점의 수) - (모서리의 수) + (면의 수) = 2
	int size = 0;
	std::cin >> size;

	for (int i = 0; i < size; ++i)
	{
		int a(0), b(0);
		std::cin >> a >> b;
		std::cout << (b - a + 2) << "\n";
	}
	return 0;
}
