#include <iostream>

int main()
{
    int size = 0;
    std::cin >> size;
    
    bool arr[2001]{};
    for (int i = 0; i < size; ++i)
    {
        int temp = 0;
        std::cin >> temp;
        arr[temp + 1000] = true;
    }

    for (int i = 0; i < 2001; ++i)
    {
        if (arr[i] == true)
        {
            std::cout << (i - 1000) << "\n";
        }
    }

    return 0;
}
