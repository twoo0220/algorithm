﻿#include <iostream>

int main()
{
	std::ios_base::sync_with_stdio(0);
	std::cout.tie(0);
	std::cin.tie(0);

	long long size = 0;
	std::cin >> size;
	std::cout << size * 4;

	return 0;
}
