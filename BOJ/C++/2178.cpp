#include <iostream>
#include <string>
#include <queue>

int main()
{
    std::ios_base::sync_with_stdio(0);
    std::cout.tie(0);
    std::cin.tie(0);

    int miro[100][100]{};
    int moveX[4] = { -1, 1, 0, 0 };
    int moveY[4] = { 0, 0, -1, 1 };

    int width(0), height(0);
    std::cin >> width >> height;
    for (int i = 0; i < width; ++i)
    {
        std::string temp;
        std::cin >> temp;
        for (int j = 0; j < height; ++j)
        {
            miro[i][j] = temp[j] - '0';
        }
    }

    std::queue<std::pair<int, int>> que;
    que.push({ 0, 0 });
    while (!que.empty())
    {
        int x = que.front().first;
        int y = que.front().second;
        que.pop();

        for (int i = 0; i < 4; ++i)
        {
            int checkX = x + moveX[i];
            int checkY = y + moveY[i];
            if ((checkX >= 0) &&
                (checkX < width) &&
                (checkY >= 0) &&
                (checkY < height) &&
                (miro[checkX][checkY] == 1))
            {
                miro[checkX][checkY] = miro[x][y] + 1;
                que.push({ checkX, checkY });
            }
        }
    }

    // C6385 Warning
    if ((width - 1) >= 0 && (height - 1) >= 0)
    {
        std::cout << miro[width - 1][height - 1];
    }
    return 0;
}
