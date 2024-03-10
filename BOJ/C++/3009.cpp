#include <iostream>

int main()
{
	int x(0), y(0);
	std::cin >> x >> y;
	
	int x1(0), y1(0), x2(0), y2(0);
	std::cin >> x1 >> y1 >> x2 >> y2;

	if (x == x1) x = x2;
	else if (x == x2) x = x1;
	if (y == y1) y = y2;
	else if (y == y2) y = y1;

	std::cout << x << " " << y;

	return 0;
}
