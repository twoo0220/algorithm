#include <iostream>
#include <vector>
#include <algorithm>

int main()
{
    std::ios_base::sync_with_stdio(0);
    std::cout.tie(0);
    std::cin.tie(0);

    int arrSize(0), index(0);
    std::cin >> arrSize >> index;
    std::vector<int> arr(arrSize, 0);
	
	for (int i = 0; i < arrSize; ++i)
	{
        std::cin >> arr[i];
	}

	std::sort(arr.begin(), arr.end());
    std::cout << arr[index - 1];

    return 0;
}
