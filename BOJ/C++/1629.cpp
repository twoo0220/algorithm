#include <iostream>

long long remain(long long a, long long b, long long c)
{
	if (b <= 1)
		return a % c;

	long long res = remain(a, b / 2, c) % c;
	if ((b % 2) == 0)
		return res * res % c;

	return (res * res % c) * (a % c);
}

int main()
{
	std::ios_base::sync_with_stdio(0);
	std::cout.tie(0);
	std::cin.tie(0);

	long long a(0), b(0), c(0);
	std::cin >> a >> b >> c;
	std::cout << remain(a, b, c) % c;

	return 0;
}
