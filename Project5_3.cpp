#include <iostream>
#include <vector>
#include <Windows.h>

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	int mus[3][6] = { { 10, 20, 3, 4, 5, 6 }, { 7, 8, 9, 100, 11, 12 }, { 13, 14, 15, 16, 17, 18 } };
	int min = mus[0][0];
	int max = mus[0][0];

	int indexMin_i = 0;
	int indexMin_j = 0;
	int indexMax_i = 0;
	int indexMax_j = 0;

	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 6; j++)
		{
			if (min > mus[i][j])
			{
				min = mus[i][j];
				indexMin_i = i;
				indexMin_j = j;
			}
			if (max < mus[i][j])
			{
				max = mus[i][j];
				indexMax_i = i;
				indexMax_j = j;
			}

			std::cout << mus[i][j];
			if (i == 2 && j == 5)
				std::cout << " ";
			else std::cout << ", ";
		}
	}
	std::cout << "\nИндекс минимального элемента: [" << indexMin_i << "] [" << indexMin_j << "], значение: " << min;
	std::cout << "\nИндекс максимального элемента элемента: [" << indexMax_i << "] [" << indexMax_j << "], значение: " << max;
}
