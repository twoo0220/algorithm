#include <iostream>

int main()
{
	int count(0);
	std::cin >> count;

	int total(0);
	for (int i = 0; i < count; ++i)
	{
		int temp(0);
		//int res = scanf_s("%1d", &temp);
		scanf("%1d", &temp);
		total += temp;
	}

	std::cout << total;
	return 0;
}
