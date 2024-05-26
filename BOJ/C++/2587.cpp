#include <iostream>
#include <algorithm>
#include <vector>

int main()
{
    std::ios_base::sync_with_stdio(0);
    std::cout.tie(0);
    std::cin.tie(0);

    std::vector<int> arr(5);
    int total = 0;
    for (int i = 0; i < 5; ++i)
    {
        std::cin >> arr[i];
        total += arr[i];
    }

    std::sort(arr.begin(), arr.end());
    std::cout << (total / 5) << "\n";
    std::cout << arr[2];

    return 0;
}
