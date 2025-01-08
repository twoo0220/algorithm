#include <iostream>

int main()
{
    std::ios_base::sync_with_stdio(0);
    std::cout.tie(0);
    std::cin.tie(0);

    int size = 0;
    std::cin >> size;
	std::cin.get();
    for (int i = 0; i < size; ++i)
    {
        char word[21]{};
        int index = 0;
        while (true)
        {
			char ch = std::cin.get();
			if (ch == '\n')
			{
				for (int j = index - 1; j >= 0; --j)
				{
					std::cout << word[j];
					word[j] = 0;
				}
				std::cout << '\n';
				break;
			}
			else if (ch == ' ')
			{
				for (int j = index - 1; j >= 0; --j)
				{
					std::cout << word[j];
					word[j] = 0;
				}
				std::cout << ' ';
				index = 0;
			}
			else
			{
				word[index] = ch;
				++index;
			}
        }
    }
    return 0;
}
