#include"loops.h"

/*
WITH LOOP OF YOUR CHOICE:
Write code for function factorial that accepts an int num
and returns the num's factorial

factorial(5);
1*2*3*4*5

returns 120

DON'T FORGET TO WRITE TEST CASE.  See file loop_test.cpp
*/

int factorial(int num)
{
	int x = 1;
	int total = 0;
	do 
	{
		total = x * (x+1);
		++x;
	}while (x < num);
	return total;
}