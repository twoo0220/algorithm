#include <iostream>
#include <math.h>

void hanoi(int n, int from, int by, int to)
{
	if (n == 0) return;
	hanoi(n - 1, from, to, by);
	std::cout << from << " " << to << "\n";
	hanoi(n - 1, by, from, to);
}

int main()
{
	std::ios_base::sync_with_stdio(0);
	std::cout.tie(0);
	std::cin.tie(0);

	int size = 0;
	std::cin >> size;
	int count = std::pow(2, size) - 1;
	std::cout << count << "\n";

	hanoi(size, 1, 2, 3);
	return 0;
}
