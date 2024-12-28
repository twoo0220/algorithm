#include <iostream>
#include <string>

int main()
{
    std::ios_base::sync_with_stdio(0);
    std::cout.tie(0);
    std::cin.tie(0);

    int count = 0;
    std::cin >> count;

    for (int i = 0; i < count; ++i)
    {
        std::string start, end;
        std::cin >> start >> end;
        std::cout << "Distances: ";

        int size = start.size();
        for (int j = 0; j < size; ++j)
        {
            int dist = end[j] - start[j];
            if (dist < 0)
            {
                dist += 26;
            }
            std::cout << dist << " ";
        }
        std::cout << '\n';
    }

    return 0;
}
