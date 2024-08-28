#include <iostream>
#include <string>

long long int gcd(long long int a, long long int b)
{
	long long int c = 0;
	while (b != 0)
	{
		c = a % b;
		a = b;
		b = c;
	}
	return a;
}

int main()
{
	std::ios_base::sync_with_stdio(false);
	std::cout.tie(0);
	std::cin.tie(0);

	long long int a(0), b(0);
	std::cin >> a >> b;
	std::cout << ((a * b) / gcd(a, b));

	return 0;
}
