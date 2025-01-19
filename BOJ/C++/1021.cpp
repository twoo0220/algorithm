#include <iostream>
#include <deque>

int main()
{
	std::ios_base::sync_with_stdio(0);
	std::cout.tie(0);
	std::cin.tie(0);

	int size(0), count(0), result(0);
	std::deque<int> dq;
	std::cin >> size >> count;

	for (int i = 1; i <= size; ++i)
	{
		dq.push_back(i);
	}

	while (count > 0)
	{
		int index = 0;
		std::cin >> index;

		int queSize = dq.size();
		int queIndex = 0;

		for (int i = 0; i < queSize; ++i)
		{
			if (dq[i] == index)
			{
				queIndex = i;
				break;
			}
		}

		if (queIndex <= queSize / 2)
		{
			while (true)
			{
				if (dq.front() == index)
				{
					dq.pop_front();
					break;
				}

				dq.push_back(dq.front());
				dq.pop_front();
				result++;
			}
		}
		else
		{
			while (true)
			{
				if (dq.front() == index)
				{
					dq.pop_front();
					break;
				}

				dq.push_front(dq.back());
				dq.pop_back();
				result++;
			}
		}
		count--;
	}

	std::cout << result;
	return 0;
}
