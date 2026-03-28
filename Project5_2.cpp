#include <iostream>
#include <vector>
#include <Windows.h>

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	int mus[10] = { 101, 20, 30, 40, 505, 6, 70, 80, 90, 100 };
	int min = mus[0];
	int max = mus[0];
	std::cout << "Массив: ";
	for (int i = 0; i < 10; i++)
	{
		if (min > mus[i])
			min = mus[i];
		if (max < mus[i])
			max = mus[i];

		std::cout << mus[i];
		if (i != 9)
			std::cout << ", ";
	}
	std::cout << "\nМинимальный элемент: " << min;
	std::cout << "\nМаксммальный элемент: " << max;
}

