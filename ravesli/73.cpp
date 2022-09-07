#include <iostream>

int main()
{
	int scores[] = { 73, 85, 84, 44, 78 };
	const int numStudents = sizeof(scores) / sizeof(scores[0]);

	int maxScore = 0; // отслеживаем самую высокую оценку
	int maxIndex = 0;

	for (int student = 0; student < numStudents; ++student)
	{
		if (scores[student] > maxScore)
			maxScore = scores[student];
		//maxIndex == scores[student];
	}

	for (int i = 0; i < numStudents; i++)
		if (maxScore == scores[i])
			maxIndex = i;

	std::cout << "The best score was " << maxScore << '\n';
	std::cout << "MaxIndex is " << maxIndex << std::endl; 

	return 0;
}