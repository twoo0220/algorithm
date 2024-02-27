#include <iostream>

int main()
{
	int size = 0;
	std::cin >> size;

	int* arr = new int[size];
	for (int i = 0; i < size; ++i)
	{
		std::cin >> arr[i];
	}

	int checkNumer = 0;
	std::cin >> checkNumer;
	int count = 0;
	for (int i = 0; i < size; ++i)
	{
		if (arr[i] == checkNumer)
		{
			count++;
		}
	}

	std::cout << count << std::endl;
	delete[] arr;

	return 0;
}
