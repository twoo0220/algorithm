#include <iostream>

static bool isPrimeNumber(int number)
{
	if (number < 2)
	{
		return false;
	}

	for (int i = 2; i * i <= number; ++i)
	{
		if ((number % i) == 0)
		{
			return false;
		}
	}

	return true;
}

static void DFS(int number, int size)
{
	if (size == 0)
	{
		std::cout << number << "\n";
		return;
	}

	for (int i = 1; i < 10; ++i)
	{
		int temp = 10 * number + i;
		if ((size > 0) && (isPrimeNumber(temp)))
		{
			DFS(temp, size - 1);
		}
	}
}

int main()
{
	std::ios_base::sync_with_stdio(false);
	std::cout.tie(0);
	std::cin.tie(0);

	int size = 0;
	std::cin >> size;

	DFS(0, size);

	return 0;
}
