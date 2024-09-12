#include <iostream>

int main()
{
	std::ios_base::sync_with_stdio(false);
	std::cout.tie(0);
	std::cin.tie(0);
	
	long long a(0), b(0);
	std::cin >> a >> b;
	std::cout << (a + b) * (a - b);

	return 0;
}
