#include <iostream>

int main()
{
	int number(0);
	std::cin >> number;

	int result(1);
	for (int i = 1; i <= number; ++i)
	{
		result *= i;
	}
	std::cout << result;
	return 0;
}