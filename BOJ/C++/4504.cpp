#include <iostream>

int main()
{
    std::ios_base::sync_with_stdio(0);
    std::cout.tie(0);
    std::cin.tie(0);

    int number = 0;
    std::cin >> number;

    while (true)
    {
        int temp = 0;
        std::cin >> temp;

        if (temp == 0)
        {
            break;
        }

        if (temp % number == 0)
        {
            std::cout << temp << " is a multiple of " << number << ".\n";
        }
        else
        {
            std::cout << temp << " is NOT a multiple of " << number << ".\n";
        }
    }
    return 0;
}