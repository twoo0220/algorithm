﻿#include <iostream>

int main()
{
    std::ios_base::sync_with_stdio(0);
    std::cout.tie(0);
    std::cin.tie(0);

    int size = 0;
    std::cin >> size;
    std::cout << size << '\n' << 1;

    return 0;
}
