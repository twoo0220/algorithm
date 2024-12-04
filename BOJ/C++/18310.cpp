#include <iostream>
#include <vector>
#include <algorithm>

int main()
{
    std::ios_base::sync_with_stdio(0);
    std::cout.tie(0);
    std::cin.tie(0);

    int count = 0;
    std::cin >> count;

    std::vector<int> vec;
    vec.reserve(count);

    for (int i = 0; i < count; ++i)
    {
        int number = 0;
        std::cin >> number;
        vec.push_back(number);
    }

    std::sort(vec.begin(), vec.end());
    std::cout << vec[(count - 1) / 2];

    return 0;
}