#include <iostream>
#include <algorithm>
#include <vector>

int main()
{
    std::ios_base::sync_with_stdio(0);
    std::cout.tie(0);
    std::cin.tie(0);

    int size(0), winner(0);
    std::cin >> size >> winner;

    std::vector<int> arr(size);
    for (int i = 0; i < size; ++i)
    {
        std::cin >> arr[i];
    }

    std::sort(arr.begin(), arr.end());
    std::cout << arr[size - winner];

    return 0;
}
