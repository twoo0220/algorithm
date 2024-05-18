#include <iostream>

int main()
{
    std::ios_base::sync_with_stdio(0);
    std::cout.tie(0);
    std::cin.tie(0);

    int size = 0;
    std::cin >> size;

    for (int i = 0; i < size; ++i)
    {
        int a(0), b(0);
        char trash;
        std::cin >> a >> trash >> b;
        std::cout << (a + b) << "\n";
    }

    return 0;
}
