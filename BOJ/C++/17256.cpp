#include <iostream>

int main()
{
	std::ios_base::sync_with_stdio(false);
	std::cout.tie(0);
	std::cin.tie(0);

	int ax(0), ay(0), az(0);
	int bx(0), by(0), bz(0);
	int cx(0), cy(0), cz(0);
	std::cin >> ax >> ay >> az >> cx >> cy >> cz;
	std::cout << cx - az << " " << cy / ay << " " << cz - ax;

	return 0;
}
