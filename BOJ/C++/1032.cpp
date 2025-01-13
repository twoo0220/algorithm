#include <iostream>
#include <string>

int main()
{
    std::ios_base::sync_with_stdio(0);
    std::cout.tie(0);
    std::cin.tie(0);

    int size = 0;
    std::cin >> size;

    std::string result;
    std::cin >> result;
    for (int i = 1; i < size; ++i)
    {
        std::string temp;
        std::cin >> temp;

        for (int j = 0; j < temp.size(); ++j)
        {
            if (result[j] != temp[j])
            {
                result[j] = '?';
            }
        }
    }

    std::cout << result;
    return 0;
}
