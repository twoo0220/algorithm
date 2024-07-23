#include <iostream>

int main()
{
	std::ios_base::sync_with_stdio(0);
	std::cout.tie(0);
	std::cin.tie(0);

	int a(0), b(0), c(0), d(0), e(0), f(0);
	std::cin >> a >> b >> c >> d >> e >> f;

	std::cout << (((b * f) - (c * e)) / ((b * d) - (a * e))) << " ";
	std::cout << (((a * f) - (c * d)) / ((a * e) - (b * d)));

	return 0;
}
