#include <iostream>
#include <stack>
#include <string>

int main()
{
	std::ios_base::sync_with_stdio(0);
	std::cout.tie(0);
	std::cin.tie(0);

	int size = 0;
	std::cin >> size;

	std::stack<int> st;
	std::string ans = "";
	int curNumber = 1;
	bool faileCheck = false;
	
	for (int i = 0; i < size; ++i)
	{
		int number = 0;
		std::cin >> number;

		while (curNumber <= number)
		{
			st.push(curNumber);
			ans += '+';
			curNumber++;
		}

		if (st.top() == number)
		{
			st.pop();
			ans += '-';
		}
		else
		{
			faileCheck = true;
			break;
		}
	}

	if (faileCheck == true)
	{
		std::cout << "NO";
	}
	else
	{
		for (int i = 0; i < ans.size(); ++i)
		{
			std::cout << ans[i] << "\n";
		}
	}

	return 0;
}
