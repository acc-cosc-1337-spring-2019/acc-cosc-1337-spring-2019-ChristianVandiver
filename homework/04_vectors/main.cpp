#include<iostream>
#include<vector>
#include"vectors.h"

using std::cout;
using std::cin;

/*
Prompt user for 1 for Get Max from vector and 2 for Get primes.
Prompt user for a number and return max value or list of primes
and display them to screen.
Program continues until user decides to exit.

*/
int main() 
{
	char choice = 'y';

	do
	{
		int choice2;
		cout << "Enter 1 if you want to get the max value from a list of numbers, and enter 2 if you want a list of prime numbers from a number:";
		cin >> choice2;

		if (choice2 == 1)
		{
			int num;
			std::vector<int> list;
			do
			{
				cout << "Please enter numbers and press enter after each number when you are done entering numbers type -1:";
				cin >> num;
				list.push_back(num);
			} while (num != -1);
			int max = get_max_from_vector(list);
			cout << "\n" << max;
		}
		else
			if (choice2 == 2)
			{
				std::vector<int> primes;
				int number;
				cout << "Please enter a number that you want all of the primes from:";
				cin >> number;
				primes = vector_of_primes(number);
				for (int i = 0; i < primes.size(); ++i)
				{
					int numbers = primes[i];
					cout << "\n" << numbers << "\n";
				}
			}

	} while (choice == 'y' || choice == 'Y');


	

	return 0;
}