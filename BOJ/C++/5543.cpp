#include <iostream>

int main()
{
    std::ios_base::sync_with_stdio(0);
    std::cout.tie(0);
    std::cin.tie(0);

    int max = 0;
    std::cin >> max;

    for (int i = 0; i < 2; ++i)
    {
        int burger(0);
        std::cin >> burger;
        if (max > burger)
        {
            max = burger;
        }
    }
    
    int coke(0), sprite(0);
    std::cin >> coke >> sprite;
    max += coke < sprite ? coke : sprite;
    std::cout << (max - 50);
    return 0;
}
