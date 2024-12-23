#include <iostream>

int main()
{
    std::ios_base::sync_with_stdio(0);
    std::cout.tie(0);
    std::cin.tie(0);

    int sum = 0;
    while (true)
    {
        int number = 0;
        std::cin >> number;
        if (number == -1) break;

        sum += number;
    }

    std::cout << sum;
    return 0;
}