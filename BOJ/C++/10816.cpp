#include <iostream>
#include <map>
#include <unordered_map>

int main()
{
    std::ios_base::sync_with_stdio(0);
    std::cout.tie(0);
    std::cin.tie(0);

    //std::map<int, int> arr;
    std::unordered_map<int, int> arr;
    int count = 0;
    std::cin >> count;
    for (int i = 0; i < count; ++i)
    {
        int temp = 0;
        std::cin >> temp;
        arr[temp]++;
        //if (arr.find(temp) == arr.end())
        //{
        //    arr.insert(std::pair<int, int>(temp, 1));
        //}
        //else
        //{
        //    arr[temp]++;
        //}
    }

    std::cin >> count;
    for (int i = 0; i < count; ++i)
    {
        int temp = 0;
        std::cin >> temp;
        std::cout << arr[temp] << " ";
        //if (arr.find(temp) == arr.end())
        //{
        //    std::cout << 0 << " ";
        //}
        //else
        //{
        //    std::cout << arr[temp] << " ";
        //}
    }

    return 0;
}
