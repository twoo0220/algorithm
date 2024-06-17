#include <iostream>

int main()
{
	std::ios_base::sync_with_stdio(0);
	std::cout.tie(0);
	std::cin.tie(0);

	const double pi = 3.14159265358979323846;
	double radius = 0;
	std::cin >> radius;

	printf("%lf\n", (pi * radius * radius));
	printf("%lf", (2.0f * radius * radius));

	return 0;
}
