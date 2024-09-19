#include <iostream>

int minA(0), maxA(0), minB(0), maxB(0);

static void cal(int number)
{
	int set = 1;
	while (true)
	{
		int remain = number % 10;
		if ((remain == 5) || (remain == 6))
		{
			minB += 5 * set;
			maxB += 6 * set;
		}
		else
		{
			minB += (remain * set);
			maxB += (remain * set);
		}

		number /= 10;
		set *= 10;
		if (number == 0) break;
	}
}

int main()
{
	std::ios_base::sync_with_stdio(false);
	std::cout.tie(0);
	std::cin.tie(0);

	int a(0), b(0);
	std::cin >> a >> b;

	cal(a);
	cal(b);

	std::cout << (minA + minB) << " " << (maxA + maxB);

	return 0;
}
