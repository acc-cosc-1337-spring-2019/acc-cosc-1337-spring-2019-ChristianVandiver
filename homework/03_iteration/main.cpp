/*
Write code that prompts user to enter 1 for Get GC Content, 
or 2 for Get DNA Complement.  The program will prompt user for a 
DNA string and call either get gc content or get dna complement
function and display the result. Program runs as long as 
user enters a y or Y.
*/

#include<iostream>
#include"dna.h"

using std::cout;
using std::cin;

int main() 
{
	string dna;
	char choice2;
	int choice1;
	do
	{
		cout << "Type 1 for Get GC Content or 2 for Get DNA Complement: ";
		cin >> choice1;
		if (choice1 == 1)
		{
			cout << "Please enter the DNA string: ";
			cin >> dna;
			cout << "The GC content is " << get_gc_content(dna) << "\n";
			
			cout << "Do you want to restart? y or n: ";
			cin >> choice2;
		}
		else
			if (choice1 == 2)
			{
				cout << "Please enter the DNA string: ";
				cin >> dna;
				cout << "The dna complement is " << get_dna_complement(dna) << "\n";

				cout << "Do you want to restart? y or n: ";
				cin >> choice2;
			}
	
	} while (choice2 == 'y' || choice2 == 'Y');
	return 0;
}