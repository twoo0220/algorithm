#include <iostream>
#include <string>

int main()
{
	int count(0);
	std::cin >> count;

	for (int i = 0; i < count; ++i)
	{
		int repeat(0);
		std::cin >> repeat;

		std::string temp;
		std::cin >> temp;

		std::string result;
		for (int j = 0; j < temp.size(); ++j)
		{
			for (int k = 0; k < repeat; ++k)
			{
				result += temp[j];
			}
		}
		std::cout << result << "\n";
	}

	return 0;
}
