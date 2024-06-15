#include <iostream>
#include <algorithm>

int main()
{
	std::ios_base::sync_with_stdio(0);
	std::cout.tie(0);
	std::cin.tie(0);

	int count = 0;
	std::cin >> count;
	int Aarr[50]{};
	int Barr[50]{};

	for (int i = 0; i < count; ++i)
	{
		std::cin >> Aarr[i];
	}

	for (int i = 0; i < count; ++i)
	{
		std::cin >> Barr[i];
	}

	std::sort(Aarr, Aarr + count);
	std::sort(Barr, Barr + count);

	int result = 0;
	for (int i = 0; i < count; ++i)
	{
		result += Aarr[i] * Barr[count - i - 1];
	}

	std::cout << result;

	return 0;
}
