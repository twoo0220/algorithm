#include <iostream>

int main()
{
	std::ios_base::sync_with_stdio(0);
	std::cout.tie(0);
	std::cin.tie(0);

	int length = 0;
	std::cin >> length;
	
	int result = length / 5;
	length -= result * 5;

	if (length > 0)
	{
		result++;
	}
	std::cout << result;

	return 0;
}
