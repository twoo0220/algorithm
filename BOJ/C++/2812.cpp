#include <iostream>
#include <vector>
#include <string>

int main()
{
	std::ios_base::sync_with_stdio(0);
	std::cout.tie(0);
	std::cin.tie(0);

	std::vector<char> vec;
	std::string number;
	int size(0), out(0);
	std::cin >> size >> out;
	std::cin >> number;

	for (int i = 0; i < size; ++i)
	{
		while ((out > 0) && (!vec.empty()) && (number[i] > vec.back()))
		{
			out--;
			vec.pop_back();
		}
		vec.push_back(number[i]);
	}

	while (out--)
	{
		vec.pop_back();
	}

	for (int i = 0; i < vec.size(); ++i)
	{
		std::cout << vec[i];
	}

	return 0;
}
