#include <iostream>
#include <vector>

int main()
{
    std::ios_base::sync_with_stdio(0);
    std::cout.tie(0);
    std::cin.tie(0);

    int number = 0;
	std::cin >> number;
    std::vector<int> arr;

    for (int i = number / 2 + 1; i <= number; ++i)
    {
        std::vector<int> temp;
        temp.push_back(number);
		temp.push_back(i);
        
        int j = 1;
        while (true)
        {
            if (temp[j - 1] - temp[j] >= 0)
            {
				temp.push_back(temp[j - 1] - temp[j]);
            }
            else
            {
                break;
            }
            ++j;
        }

        if (temp.size() > arr.size())
        {
            arr = temp;
        }
    }

    std::cout << arr.size() << '\n';
    for (const auto i : arr)
    {
        std::cout << i << ' ';
    }

    return 0;
}
