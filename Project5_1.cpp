#include <iostream>
#include <vector>
#include <Windows.h>

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	int mus[10] = { 10, 20, 30, 40, 50, 60, 70, 80, 90, 100 };

	for (int i = 0; i < 10; i++)
	{
		std::cout << mus[i];
		if (i != 9)
			std::cout << ", ";
	}
}
