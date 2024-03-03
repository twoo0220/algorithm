#include <iostream>
#include <string>

int main()
{
	std::string temp;
	std::cin >> temp;

	int count = 0;
	int end = temp.size();
	for (int i = 0; i < end; ++i)
	{
		if (temp[i] == 'c')
		{
			if ((temp[i + 1] == '=') || (temp[i + 1] == '-'))
			{
				++i;
			}
		}
		else if (temp[i] == 'd')
		{
			if (temp[i + 1] == '-')
			{
				++i;
			}
			else if ((temp[i + 1] == 'z') && (temp[i + 2] == '='))
			{
				i += 2;
			}
		}
		else if ((temp[i] == 'l') && (temp[i + 1] == 'j'))
		{
			++i;
		}
		else if ((temp[i] == 'n') && (temp[i + 1] == 'j'))
		{
			++i;
		}
		else if ((temp[i] == 's') && (temp[i + 1] == '='))
		{
			++i;
		}
		else if ((temp[i] == 'z') && (temp[i + 1] == '='))
		{
			++i;
		}

		count++;
	}

	std::cout << count;
	return 0;
}
