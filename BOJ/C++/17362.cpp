#include <iostream>

int main()
{
	std::ios_base::sync_with_stdio(0);
	std::cout.tie(0);
	std::cin.tie(0);

	long long number = 0;
	std::cin >> number;
	int remain = static_cast<int>(number % 8LL);

	switch (remain)
	{
	case 0:
	case 2:
	{
		std::cout << 2;
		break;
	}
	case 1:
	{
		std::cout << 1;
		break;
	}
	case 3:
	case 7:
	{
		std::cout << 3;
		break;
	}
	case 4:
	case 6:
	{
		std::cout << 4;
		break;
	}
	case 5:
	{
		std::cout << 5;
		break;
	}
	}
	return 0;
}
