#include <iostream>

int main()
{
	std::ios_base::sync_with_stdio(0);
	std::cout.tie(0);
	std::cin.tie(0);

	int R1(0), S(0);
	std::cin >> R1 >> S;
	std::cout << (2 * S - R1);
	
	return 0;
}
