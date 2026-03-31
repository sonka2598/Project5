#include <iostream>
#include <vector>
#include <Windows.h>

void coutArray(int mus[])
{
	for (int i = 0; i < 10; i++)
	{
		std::cout << mus[i];
		if (i != 9)
			std::cout << ", ";
	}
}

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	int mus[10] = { 101, 20, 30, 40, 505, 6, 70, 80, 90, 100 };

	std::cout << "Массив до сортировки: ";
	coutArray(mus);

	bool swapped{};
	for (int i = 0; i < 9; i++)
	{
		swapped = false;

		for (int j = 10 - 1; j > i; --j)
		{
			if (mus[j] < mus[j - 1])
			{
				int temporary{ mus[j] };
				mus[j] = mus[j - 1];
				mus[j - 1] = temporary;

				swapped = true;
			}
		}

		if (!swapped) { break; }
	}

	std::cout << "\nМассив после сортировки: ";
	coutArray(mus);
}

