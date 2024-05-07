#include <iostream>
#include <string>
#include <stack>

int main()
{
	std::ios_base::sync_with_stdio(0);
	std::cout.tie(0);
	std::cin.tie(0);

	while (true)
	{
		std::string line;
		std::getline(std::cin, line);

		int size = static_cast<int>(line.length());
		if ((size == 1) && line[0] == '.')
		{
			break;
		}

		std::stack<char> st;
		bool pairCheck = true;
		for (int i = 0; i < size; ++i)
		{
			if (line[i] == '(')
			{
				st.push(line[i]);
			}
			else if (line[i] == '[')
			{
				st.push(line[i]);
			}
			else if (line[i] == ')')
			{
				if ((!st.empty()) && (st.top() == '('))
				{
					st.pop();
				}
				else
				{
					goto result;
				}
			}
			else if (line[i] == ']')
			{
				if ((!st.empty()) && (st.top() == '['))
				{
					st.pop();
				}
				else
				{
					goto result;
				}
			}
		}

		if (st.empty())
		{
			std::cout << "yes\n";
		}
		else
		{
result:
			std::cout << "no\n";
		}
	}

	return 0;
}
