#include <iostream>
#include <queue>

bool visited[100000] {};

bool valid(int pos)
{
    if ((pos < 0) || (pos > 100000) || visited[pos])
    {
        return false;
    }
    return true;
}

int main()
{
    std::ios_base::sync_with_stdio(0);
    std::cout.tie(0);
    std::cin.tie(0);

    std::queue<std::pair<int, int>> que;

    int start(0), end(0), result(0);
    std::cin >> start >> end;

    que.push({ start, 0 });
    visited[start] = true;

    while (true)
    {
        int position = que.front().first;
        int depth = que.front().second;
        que.pop();

        if (position == end)
        {
            result = depth;
            break;
        }

        if (valid(position - 1))
        {
            visited[position - 1] = true;
            que.push({ position - 1, depth + 1 });
        }
        if (valid(position + 1))
        {
            visited[position + 1] = true;
            que.push({ position + 1, depth + 1 });
        }
        if (valid(position * 2))
        {
            visited[position * 2] = true;
            que.push({ position * 2, depth + 1 });
        }
    }

    std::cout << result;
    return 0;
}
