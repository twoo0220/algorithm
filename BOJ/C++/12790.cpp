#include <iostream>

int main()
{
	std::ios_base::sync_with_stdio(0);
	std::cout.tie(0);
	std::cin.tie(0);

	int size = 0;
	std::cin >> size;

	for (int i = 0; i < size; ++i)
	{
		int a(0), b(0), c(0), d(0), e(0), f(0), g(0), h(0);
		std::cin >> a >> b >> c >> d >> e >> f >> g >> h;
		int hp = (a + e) < 1 ? 1 : (a + e);
		int mp = (b + f) < 1 ? 1 : (b + f);
		int attack = (c + g) < 0 ? 0 : (c + g);
		std::cout << hp + 5 * mp + 2 * attack + 2 * (d + h) << "\n";
	}
	return 0;
}
