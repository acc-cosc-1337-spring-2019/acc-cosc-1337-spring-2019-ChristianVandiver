#include"if.h"
#include<iostream>

using std::cout;
using std::cin;

int main() 
{
	//create a bool variable named even
	bool even;
	//create an int variable named value
	int value;
	//prompt user for a keyboard number
	//assign the number to the value variable
	cout << "Please enter a number:";
	cin >> value;

	//call the is_even function with value as its argument
	//and assign its return value to the even variable
	even = is_even(value);

	//display whether the number is even or not
	if (even == true)
	{
		cout << value << " is even";
	}
	else
	{
		cout << value << " is odd";
	}
	return 0;
}
