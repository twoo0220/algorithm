#include <iostream>
#include <stack>
#include <string>

int main()
{
	int size(0);
	std::cin >> size;

	std::stack<char> ps;
	for (int i = 0; i < size; ++i)
	{
		std::string temp;
		std::cin >> temp;
		for (int j = 0; j < temp.size(); ++j)
		{
			if ((ps.size() > 0) && (ps.top() != temp[j]))
			{
				if (ps.top() == ')')
				{
					ps.push(temp[j]);
				}
				else
				{
					ps.pop();
				}
			}
			else
			{
				ps.push(temp[j]);
			}
		}

		if (ps.size() > 0)
		{
			std::cout << "NO\n";
		}
		else
		{
			std::cout << "YES\n";
		}
		ps = {};
	}


	return 0;
}
