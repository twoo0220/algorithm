#include <iostream>

int main()
{
	std::ios_base::sync_with_stdio(false);
	std::cout.tie(0);
	std::cin.tie(0);

	int count = 0;
	std::cin >> count;

	int Q1(0), Q2(0), Q3(0), Q4(0), AXIS(0);
	for (int i = 0; i < count; ++i)
	{
		int x(0), y(0);
		std::cin >> x >> y;

		if ((x == 0) || (y == 0))
		{
			AXIS++;
		}
		else if (x > 0)
		{
			if (y > 0)
			{
				Q1++;
			}
			else
			{
				Q4++;
			}
		}
		else // x < 0
		{
			if (y > 0)
			{
				Q2++;
			}
			else
			{
				Q3++;
			}
		}
	}

	std::cout << "Q1: " << Q1 << "\n";
	std::cout << "Q2: " << Q2 << "\n";
	std::cout << "Q3: " << Q3 << "\n";
	std::cout << "Q4: " << Q4 << "\n";
	std::cout << "AXIS: " << AXIS << "\n";
	return 0;
}
