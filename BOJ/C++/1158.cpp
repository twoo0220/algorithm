#include <iostream>
#include <queue>

int main()
{
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
