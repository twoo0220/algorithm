#include <iostream>

int main()
{
    std::ios_base::sync_with_stdio(0);
    std::cout.tie(0);
    std::cin.tie(0);

    int size(0), count(0), time(0);
    std::cin >> size;

    while (true)
    {
        count++;
        if (size == 0) break;
        if (size < count) count = 1;
        size -= count;
        time++;
    }

    std::cout << time;
    return 0;
}