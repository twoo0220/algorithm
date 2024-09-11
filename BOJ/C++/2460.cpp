#include <iostream>
#include <vector>

int main()
{
	std::ios_base::sync_with_stdio(false);
	std::cout.tie(0);
	std::cin.tie(0);
	
	int current(0), max(0);
	for (int i = 0; i < 10; ++i)
	{
		int in(0), out(0);
		std::cin >> out >> in;
		current += (in - out);

		if (current > max)
		{
			max = current;
		}
	}

	std::cout << max;

	return 0;
}
