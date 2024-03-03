#include <iostream>
#include <vector>

int main()
{
	std::vector<bool> primeVec(1001, true);
	primeVec[0] = false;
	primeVec[1] = false;

	for (int i = 2; i * i <= 1000; ++i)
	{
		if (!primeVec[i])
			continue;

		for (int j = i * i; j <= 1000; j += i)
		{
			primeVec[j] = false;
		}
	}

	int size(0);
	std::cin >> size;
	int count = 0;
	for (int i = 0; i < size; ++i)
	{
		int temp = 0;
		std::cin >> temp;
		if (primeVec[temp] == true)
		{
			count++;
		}
	}

	std::cout << count;
	return 0;
}