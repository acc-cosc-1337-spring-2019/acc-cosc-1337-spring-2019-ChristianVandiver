#include<iostream>

int main()
{
	const int SIZE = 5;

	int hours[SIZE] = { 5,10,30,20,7 };

	for (auto hour : hours)
	{
		std::cout << hour << "\n:";
	}

	int i = 1;
	for (auto& hour : hours)
	{
		std::cout << hour << "\n";
		hour = i++;
	}
	
	for (auto hour : hours)
	{
		std::cout << hour << "\n:";
	}

	return 0;
}