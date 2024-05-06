#include <iostream>
#include <queue>

int main()
{
	std::ios_base::sync_with_stdio(0);
	std::cout.tie(0);
	std::cin.tie(0);

	std::queue<int> que;

	int count = 0;
	std::cin >> count;

	for (int i = 1; i <= count; ++i)
	{
		que.push(i);
	}

	while (que.size() > 1)
	{
		que.pop();
		que.push(que.front());
		que.pop();
	}

	std::cout << que.front();
	return 0;
}
