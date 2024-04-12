#include <iostream>
#include <vector>
#include <algorithm>

int main()
{
	while (true)
	{
		uint32_t a(0), b(0), c(0);
		std::cin >> a >> b >> c;

		if (0 == a) break;

		uint32_t max = 0;
		uint32_t remain1(0), remain2(0);
		if (a > b)
		{
			remain1 = b;
			if (a > c)
			{
				max = a;
				remain2 = c;
			}
			else
			{
				max = c;
				remain2 = a;
			}
		}
		else
		{
			remain1 = a;
			if (b > c)
			{
				max = b;
				remain2 = c;
			}
			else
			{
				max = c;
				remain2 = b;
			}
		}

		if ((max * max) == ((remain1 * remain1) + (remain2 * remain2)))
		{
			std::cout << "right" << "\n";
		}
		else
		{
			std::cout << "wrong" << "\n";
		}
	}

	return 0;
}
