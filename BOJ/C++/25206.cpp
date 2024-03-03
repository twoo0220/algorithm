#include <iostream>
#include <string>

int main()
{
	float totalCredit = 0.0f;
	float totalScore = 0.0f;
	for (int i = 0; i < 20; ++i)
	{
		std::string temp;
		float credit = 0.0f;
		std::string grade;
		std::cin >> temp >> credit >> grade;
		
		if (grade == "P")
		{
			continue;
		}

		totalCredit += credit;
		if (grade == "F")
		{
			continue;
		}

		float gradeScore = 1.0f;
		if (grade[0] == 'A')
		{
			gradeScore = 4.0f;
		}
		else if (grade[0] == 'B')
		{
			gradeScore = 3.0f;
		}
		else if (grade[0] == 'C')
		{
			gradeScore = 2.0f;
		}
		//else if (grade[0] == 'D')
		//{
		//}

		if (grade[1] == '+')
		{
			gradeScore += 0.5f;
		}

		totalScore += credit * gradeScore;
	}

	std::cout << (totalScore / totalCredit);
	return 0;
}
