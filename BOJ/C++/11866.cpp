#include <iostream>
#include <queue>

int main()
{
	// 1158과 중복 문제
	std::ios_base::sync_with_stdio(0);
	std::cout.tie(0);
	std::cin.tie(0);
	int size(0), index(0);
	std::cin >> size >> index;

	std::queue<int> que;
	for (int i = 1; i <= size; ++i)
	{
		que.push(i);
	}

	std::cout << "<";
	while (que.size() > 1)
	{
		for (int i = 1; i < index; ++i)
		{
			que.push(que.front());
			que.pop();
		}
		std::cout << que.front() << ", ";
		que.pop();
	}
	std::cout << que.front() << ">";
	return 0;
}
