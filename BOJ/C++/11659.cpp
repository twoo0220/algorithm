#include <iostream>

int main()
{
    std::ios_base::sync_with_stdio(0);
    std::cout.tie(0);
    std::cin.tie(0);

    int size(0), count(0);
    std::cin >> size >> count;

    int* number = new int[size + 1] {};
    for (int i = 1; i <= size; ++i)
    {
        std::cin >> number[i];
        number[i] += number[i - 1];
    }

    for (int i = 0; i < count; ++i)
    {
        int start(0), end(0);
        std::cin >> start >> end;
        std::cout << (number[end] - number[start - 1]) << "\n";
    }

    delete[] number;
    number = nullptr;

    return 0;
}
