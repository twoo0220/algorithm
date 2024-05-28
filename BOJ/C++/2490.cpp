#include <iostream>

int main()
{
    std::ios_base::sync_with_stdio(0);
    std::cout.tie(0);
    std::cin.tie(0);

    for (int i = 0; i < 3; ++i)
    {
        int total = 0;
        for (int j = 0; j < 4; ++j)
        {
            int count = 0;
            std::cin >> count;
            total += count;
        }

        if (total == 0)
        {
            std::cout << "D\n";
        }
        else if (total == 1)
        {
            std::cout << "C\n";
        }
        else if (total == 2)
        {
            std::cout << "B\n";
        }
        else if (total == 3)
        {
            std::cout << "A\n";
        }
        else
        {
            std::cout << "E\n";
        }
    }
    return 0;
}
