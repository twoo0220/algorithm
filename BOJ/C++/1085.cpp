#include <iostream>

int main()
{
	int x(0), y(0), w(0), h(0);
	std::cin >> x >> y >> w >> h;

	int xTemp = (w - x) < x ? (w - x) : x;
	int yTemp = (h - y) < y ? (h - y) : y;

	std::cout << ((xTemp > yTemp) ? yTemp : xTemp);

	return 0;
}
