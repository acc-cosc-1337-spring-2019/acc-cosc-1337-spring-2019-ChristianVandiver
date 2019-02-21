#include"loops.h"
#include<iostream>

using std::cout;
using std::cin;

/*
Use a do while loop to prompt the user for 
a number, call the factorial function, and display the number's
factorial.  Also, loop continues as long as user wants to.
*/
int main() 
{
	char choice;
	int num;
	do
	{
		cout << "Enter a number:";
		cin >> num;
		cout << factorial(num);

		cout << "Want to continue? y or no:";
		cin >> choice;
	}while(choice == 'y' || choice == 'Y');
	return 0;
}