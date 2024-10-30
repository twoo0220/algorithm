#include <iostream>
#include <string>

int main()
{
	std::ios_base::sync_with_stdio(false);
	std::cout.tie(0);
	std::cin.tie(0);

	std::string a, b;
	long long result = 0;
	std::cin >> a >> b;

	uint32_t aSize = a.length();
	uint32_t bSize = b.length();
	for (int i = 0; i < aSize; ++i)
	{
		for (int j = 0; j < bSize; ++j)
		{
			result += (a[i] - 48) * (b[j] - 48);
		}
	}

	std::cout << result;
	return 0;
}
