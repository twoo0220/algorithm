#include <iostream>
#include <algorithm>

int main()
{
    std::ios_base::sync_with_stdio(0);
    std::cout.tie(0);
    std::cin.tie(0);

    int arr[9]{};
    int sum = 0;
    for (int i = 0; i < 9; ++i)
    {
        std::cin >> arr[i];
        sum += arr[i];
    }

    std::sort(arr, arr + 9);
    for (int i = 0; i < 8; ++i)
    {
        for (int j = 1; j < 9; ++j)
        {
            if ((sum - arr[i] - arr[j]) == 100)
            {
                for (int k = 0; k < 9; ++k)
                {
                    if ((k != i) && (k != j))
                    {
                        std::cout << arr[k] << "\n";
                    }
                }
                return 0;
            }
        }
    }

    return 0;
}
