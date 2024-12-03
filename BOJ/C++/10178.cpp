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
        std::cin >> a >> b;
        std::cout << "You get " << a / b << " piece(s) and your dad gets " << a % b << " piece(s).\n";
    }

    return 0;
}