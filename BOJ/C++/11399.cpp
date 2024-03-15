#include <iostream>
#include <algorithm>

int main()
{
	int size(0);
	std::cin >> size;
	
	int* arr = new int[size];
	for (int i = 0; i < size; ++i)
	{
		int temp(0);
		std::cin >> temp;
		arr[i] = temp;
	}

	std::sort(arr, arr + size);

	int result = arr[0];
	for (int i = size - 1; i > 0; --i)
	{
		for (int j = 0; j <= i; ++j)
		{
			result += arr[j];
		}
	}
	
	std::cout << result;
	delete[] arr;
	arr = nullptr;

	return 0;
}
