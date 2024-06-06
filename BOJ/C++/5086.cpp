#include <iostream>

int main()
{
    std::ios_base::sync_with_stdio(0);
    std::cout.tie(0);
    std::cin.tie(0);

    while (true)
    {
        int a(0), b(0);
        std::cin >> a >> b;

        if (a == 0)
        {
            break;
        }
        
        if ((a % b) == 0)
        {
            std::cout << "multiple\n";
        }
        else if ((b % a) == 0)
        {
            std::cout << "factor\n";
        }
        else
        {
            std::cout << "neither\n";
        }
    }

    return 0;
}
