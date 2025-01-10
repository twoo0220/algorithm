#include <iostream>

int main()
{
    std::ios_base::sync_with_stdio(0);
    std::cout.tie(0);
    std::cin.tie(0);

    int sum(0), number(0);

    while (std::cin >> number)
    {
        sum += number;
    }
    std::cout << sum;

    return 0;
}
