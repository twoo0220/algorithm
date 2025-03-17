#define _CRT_SECURE_NO_WARNINGS
#include <iostream>

int main()
{
	//std::ios_base::sync_with_stdio(0);
	//std::cout.tie(0);
	//std::cin.tie(0);
	// => Don't use with getchar()

	int arr[21]{};
	int size(0), count(0);
	std::cin >> size >> count;

	for (int i = 0; i < size; ++i)
	{
		scanf("%d", &arr[i]);
		getchar();
	}

	--size;
	for (int i = 0; i < count; ++i)
	{
		for (int j = 0; j < size; ++j)
		{
			arr[j] = arr[j + 1] - arr[j];
		}
		--size;
	}

	for (int i = 0; i < size; ++i)
	{
		std::cout << arr[i] << ",";
	}
	std::cout << arr[size];
	return 0;
}
