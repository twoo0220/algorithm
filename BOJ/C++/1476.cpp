#include <iostream>

int main()
{
	std::ios_base::sync_with_stdio(false);
	std::cout.tie(0);
	std::cin.tie(0);

	int E(0), S(0), M(0);
	std::cin >> E >> S >> M;

	int a(1), b(1), c(1), year(1);
	while (true)
	{
		if ((a == E) && (b == S) && (c == M))
		{
			break;
		}

		a++;
		b++;
		c++;
		year++;

		if (a > 15) { a = 1; }
		if (b > 28) { b = 1; }
		if (c > 19) { c = 1; }
	}

	std::cout << year;
	return 0;
}
