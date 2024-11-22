#include <iostream>

int main()
{
	std::ios_base::sync_with_stdio(false);
	std::cout.tie(0);
	std::cin.tie(0);

	int A(0), B(0), C(0), D(0), P(0);
	std::cin >> A >> B >> C >> D >> P;

	int X = A * P;
	int Y = B;

	if (P > C)
	{
		int over = P - C;
		Y += (over > 0) ? over * D : 0;
	}

	if (X > Y)
	{
		std::cout << Y;
	}
	else
	{
		std::cout << X;
	}
	return 0;
}
