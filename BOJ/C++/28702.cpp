#include <iostream>
#include <string>

static void fizzbuzz(int number)
{
	if ((number % 3) == 0)
	{
		if ((number % 5) == 0)
		{
			std::cout << "FizzBuzz";
		}
		else
		{
			std::cout << "Fizz";
		}
	}
	else if ((number % 5) == 0)
	{
		std::cout << "Buzz";
	}
	else
	{
		std::cout << number;
	}
}

int main()
{
	std::ios_base::sync_with_stdio(0);
	std::cout.tie(0);
	std::cin.tie(0);

	std::string str1, str2, str3;
	std::cin >> str1 >> str2 >> str3;

	if ((str3 != "FizzBuzz") && (str3 != "Fizz") && (str3 != "Buzz"))
	{
		fizzbuzz(std::stoi(str3) + 1);
	}
	else if ((str2 != "FizzBuzz") && (str2 != "Fizz") && (str2 != "Buzz"))
	{
		fizzbuzz(std::stoi(str2) + 2);
	}
	else
	{
		fizzbuzz(std::stoi(str1) + 3);
	}
	return 0;
}
