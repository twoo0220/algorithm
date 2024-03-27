#include <iostream>
#include <string>

int main()
{
	int a(0), b(0);
	std::cin >> a;

	std::string result = "mixed";
	for (int i = 0; i < 7; ++i)
	{
		std::cin >> b;
		if ((b - a) == 1)
		{
			result = "ascending";
		}
		else if ((b - a) == -1)
		{
			result = "descending";
		}
		else
		{
			result = "mixed";
			break;
		}
		a = b;
	}

	std::cout << result;
	return 0;
}
