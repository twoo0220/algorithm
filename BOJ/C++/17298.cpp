#include <iostream>
#include <stack>
#include <vector>

int main()
{
	std::ios_base::sync_with_stdio(0);
	std::cout.tie(0);
	std::cin.tie(0);

	int count = 0;
	std::cin >> count;

	std::stack<int> sta;
	std::vector<int> vec;
	std::vector<int> result;
	vec.reserve(count);
	result.reserve(count);

	for (int i = 0; i < count; ++i)
	{
		int number = 0;
		std::cin >> number;
		vec.push_back(number);
	}

	for (int i = count - 1; i >= 0; --i)
	{
		while (!sta.empty() && sta.top() <= vec[i])
		{
			sta.pop();
		}

		if (sta.empty())
		{
			result.push_back(-1);
		}
		else
		{
			result.push_back(sta.top());
		}
		
		sta.push(vec[i]);
	}

	for (int i = count - 1; i >= 0; --i)
	{
		std::cout << result[i] << " ";
	}
	return 0;
}
