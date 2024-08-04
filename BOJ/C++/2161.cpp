#include <iostream>
#include <queue>

int main()
{
	std::ios_base::sync_with_stdio(0);
	std::cout.tie(0);
	std::cin.tie(0);

	std::queue<int> que;
	int size(0), front(0);
	std::cin >> size;

	for (int i = 1; i <= size; ++i)
	{
		que.push(i);
	}

	for (int i = 0; i < size - 1; ++i)
	{
		front = que.front();
		que.pop();

		std::cout << front << ' ';

		front = que.front();
		que.push(front);
		que.pop();
	}

	front = que.front();
	std::cout << front << ' ';

	return 0;
}
