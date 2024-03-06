#include <iostream>

int main()
{
	int count(0), maxSize(0);
	std::cin >> count >> maxSize;
	int* card = new int[count];
	for (int i = 0; i < count; ++i)
	{
		int temp(0);
		std::cin >> temp;
		card[i] = temp;
	}

	int max = 0;
	for (int i = 0; i < count; ++i)
	{
		for (int j = i + 1; j < count; ++j)
		{
			for (int k = j + 1; k < count; ++k)
			{
				int maxTemp = card[i] + card[j] + card[k];
				if (maxTemp <= maxSize)
				{
					max = maxTemp > max ? maxTemp : max;
				}
			}
		}
	}

	std::cout << max;

	delete[] card;
	card = nullptr;
	return 0;
}
