#include <iostream>

int main()
{
	std::ios_base::sync_with_stdio(0);
	std::cout.tie(0);
	std::cin.tie(0);

	int N = 0;
	std::cin >> N;
	std::cout << N * (N - 1);
	return 0;
}
