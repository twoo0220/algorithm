#include <iostream>

int main()
{
	std::ios_base::sync_with_stdio(false);
	std::cout.tie(0);
	std::cin.tie(0);

	int a(0), b(0), c(0);
	char dummy;
	std::cin >> a >> dummy >> b >> dummy >> c;
	
	if (((a + c) < b) || (b == 0))
	{
		std::cout << "hasu";
	}
	else
	{
		std::cout << "gosu";
	}

	return 0;
}
