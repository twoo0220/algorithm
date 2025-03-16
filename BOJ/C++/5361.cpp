#include <iostream>
#include <iomanip>

int main()
{
	std::ios_base::sync_with_stdio(0);
	std::cout.tie(0);
	std::cin.tie(0);

	int size = 0;
	std::cin >> size;

	for (int i = 0; i < size; ++i)
	{
		float a(0.0f), b(0.0f), c(0.0f), d(0.0f), e(0.0f);
		std::cin >> a >> b >> c >> d >> e;
		std::cout << std::fixed << std::setprecision(2) << "$" << (a * 350.34f + b * 230.90f + c * 190.55f + d * 125.30f + e * 180.90f) << "\n";
	}

	return 0;
}
