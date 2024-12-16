#include <iostream>

int main()
{
    std::ios_base::sync_with_stdio(0);
    std::cout.tie(0);
    std::cin.tie(0);

    long long number(0), result(0);
    std::cin >> number;

    for (long long i = 1; i < number; ++i)
    {
        result += (number + 1) * i;
    }

    std::cout << result;

    return 0;
}