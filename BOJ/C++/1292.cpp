#include <iostream>

int main()
{
	std::ios_base::sync_with_stdio(0);
	std::cout.tie(0);
	std::cin.tie(0);

	int start(0), end(0);
	std::cin >> start >> end;

	int result = 0;
	int count = 0;
	for (int i = 1; i < end + 1; ++i)
	{
		for (int j = 0; j < i; ++j)
		{
			count++;
			if ((count >= start) && (count <= end))
			{
				result += i;
			}
		}
	}
	std::cout << result;

	return 0;
}
