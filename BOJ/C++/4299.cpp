#include <iostream>

int main()
{
	std::ios_base::sync_with_stdio(false);
	std::cout.tie(0);
	std::cin.tie(0);

	int a(0), b(0);
	std::cin >> a >> b;

	if (((a + b) < 0) || ((a - b) < 0) || ((a + b) % 2))
	{
		std::cout << "-1";
	}
	else
	{
		int temp = (a + b) / 2;
		std::cout << temp << " " << a - temp;
	}
	return 0;
}
