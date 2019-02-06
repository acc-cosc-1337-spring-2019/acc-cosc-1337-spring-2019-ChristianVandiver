#include<iostream>
#include<string>
//write include statements
#include"decisions.h"

using std::cin;
using std::cout;
using std::string;
/*
In main write code to capture a letter_grade and credit_hours from the keyboard:


Grade   Credit Hours	grade_points   credit_points
A          3            4              12
B          3            3               9
C          3            2               6
-----------------------------------------------
           9                           27
After each user input convert the Grade to grade points by calling the get_grade_points function, and
keep a running total for both credit_points and credit_hours.

Call the calculate_gpa function with its arguments.
The GPA should calculate to 3.0, make sure to display it before program exits.

Display:
GPA 3.0

*/
int main() 
{
	int credit_hours = 0;
	double credit_points;
	string letter_grade;
	int total = 0;
	double second_total = 0;

	cout << "Enter the letter grade for the first class:\n";
	cin >> letter_grade;
	cout << "Enter the credit hours for the first class:\n";
	cin >> credit_hours;
	credit_points = get_grade_points(letter_grade) * credit_hours;
	total += credit_hours;
	second_total += credit_points;

	cout << "Enter the letter grade for the second class:\n";
	cin >> letter_grade;
	cout << "Enter the credit hours for the second class:\n";
	cin >> credit_hours;
	credit_points = get_grade_points(letter_grade) * credit_hours;
	total += credit_hours;
	second_total += credit_points;

	cout << "Enter the letter grade for the third class:\n";
	cin >> letter_grade;
	cout << "Enter the credit hours for the third class:\n";
	cin >> credit_hours;
	credit_points = get_grade_points(letter_grade) * credit_hours;
	total += credit_hours;
	second_total += credit_points;

	cout << total << "\n";
	cout << second_total << "\n";
	cout << "Your GPA Is: " << calculate_gpa(total,second_total);

	return 0;
}