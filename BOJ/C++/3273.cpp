#include <iostream>
#include <vector>
#include <algorithm>

int main()
{
    std::ios_base::sync_with_stdio(0);
    std::cout.tie(0);
    std::cin.tie(0);

    int size = 0;
    std::cin >> size;
    std::vector<int> arr(size, 0);

    for (int i = 0; i < size; ++i)
    {
        std::cin >> arr[i];
    }

	std::sort(arr.begin(), arr.end());
    int sum(0), result(0);
    std::cin >> sum;

    for (int i = 0, j = size - 1; i < j;)
    {
        int temp = arr[i] + arr[j];
        if (temp == sum)
        {
            ++i;
            --j;
            result++;
        }
		else if (temp > sum)
		{
			--j;
		}
		else // temp < sum
        {
            ++i;
        }
    }

    std::cout << result;
    return 0;
}
