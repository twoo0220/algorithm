#include <iostream>

int main()
{
	std::ios_base::sync_with_stdio(false);
	std::cout.tie(0);
	std::cin.tie(0);

	int size(0), a(0), b(0);
	std::cin >> size;

	for (int i = 0; i < size; ++i)
	{
		int vote = 0;
		std::cin >> vote;
		
		if (vote == 1)
		{
			a++;
		}
		else
		{
			b++;
		}
	}

	if (a > b)
	{
		std::cout << "Junhee is cute!";
	}
	else
	{
		std::cout << "Junhee is not cute!";
	}

	return 0;
}
