#include <iostream>

int main()
{
	std::ios_base::sync_with_stdio(false);
	std::cout.tie(0);
	std::cin.tie(0);

	int a(0), b(0), c(0);
	std::cin >> a >> b >> c;
	
	int temp = b - a;
	if (temp > (c - b))
	{
		std::cout << (temp - 1);
	}
	else
	{
		std::cout << (c - b - 1);
	}
	return 0;
}
