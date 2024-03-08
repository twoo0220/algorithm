#include <iostream>

int fibonacci(int number)
{
	if ((number == 0) || (number == 1))
	{
		return number;
	}

	return (fibonacci(number - 2) + fibonacci(number - 1));
}

int main()
{
	int number(0);
	std::cin >> number;

	std::cout << fibonacci(number);
	return 0;
}
