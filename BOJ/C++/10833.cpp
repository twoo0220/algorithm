#include <iostream>

int main()
{
	std::ios_base::sync_with_stdio(false);
	std::cout.tie(0);
	std::cin.tie(0);

	int size = 0;
	std::cin >> size;

	int remain = 0;
	for (int i = 0; i < size; ++i)
	{
		int student(0), apple(0);
		std::cin >> student >> apple;
		remain += apple - student * (apple / student);
	}

	std::cout << remain;
	return 0;
}
