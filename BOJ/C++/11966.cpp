#include <iostream>

int main()
{
    std::ios_base::sync_with_stdio(0);
    std::cout.tie(0);
    std::cin.tie(0);

    int number = 0;
	std::cin >> number;
	std::cout << ((number & (number - 1)) == 0) ? 1 : 0;

    return 0;
}
