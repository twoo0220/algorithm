#include <iostream>

int main()
{
    std::ios_base::sync_with_stdio(0);
    std::cout.tie(0);
    std::cin.tie(0);

    int size = 0;
    std::cin >> size;

    long long prev(5), curr(5);
    for (int i = 2; i <= size; ++i)
    {
        curr = 3 * i + prev + 1;
        prev = curr;
    }

    std::cout << (curr % 45678);
    return 0;
}