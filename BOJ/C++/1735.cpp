#include <iostream>

int main()
{
	std::ios_base::sync_with_stdio(0);
	std::cout.tie(0);
	std::cin.tie(0);

	int a(0), b(0), c(0), d(0);
	std::cin >> a >> b >> c >> d;

	int top = (a * d) + (b * c);
	int bottom = b * d;
	
	int tempTop = top;
	int tempBottom = bottom;
	while (tempBottom != 0)
	{
		int temp = tempTop % tempBottom;
		tempTop = tempBottom;
		tempBottom = temp;
	}

	std::cout << (top / tempTop) << " " << (bottom / tempTop);
	
	return 0;
}
