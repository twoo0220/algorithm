#include <iostream>

int main()
{
	int size(0), count(0);
	std::cin >> size >> count;

	int* basket = new int[size];
	for (int i = 0; i < size; ++i)
	{
		basket[i] = i + 1;
	}

	for (int i = 0; i < count; ++i)
	{
		int a(0), b(0);
		std::cin >> a >> b;
		
		int temp = basket[a - 1];
		basket[a - 1] = basket[b - 1];
		basket[b - 1] = temp;
	}

	for (int i = 0; i < size; ++i)
	{
		std::cout << basket[i] << " ";
	}

	delete[] basket;
	basket = nullptr;

	return 0;
}
