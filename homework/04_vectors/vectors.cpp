#include<vector>
#include"vectors.h"

/*
Write a value return function get_max_from_vector with a const reference 
vector of intsparameter that returns the max value in a vector

@param numbers is a const reference to a vector of integers
@return the max value in the vector
*/
int get_max_from_vector(const std::vector<int> numbers)
{
	int max = numbers[0];
	for (int x = 0; x <= numbers.size() - 1; ++x)
	{
		if (numbers[x] > max)
		{
			max = numbers[x];
		}
	}
	return max;
}



/*
Write a function named is_prime with an integer parameter that
given a number returns true if prime or false if not prime

@param number: Any whole number
@return: bool if prime False if not
*/
bool is_prime(int num2)
{
	bool prime = true;
	for (int x = 2; x <= num2 / 2; x++) 
	{
		if (num2 % x == 0) 
		{
			prime = false;
		}
	}
	return prime;
}

/*
Write a a function named vector_of_primes with an integer parameter
that given a number returns all the prime numbers up to the number

Example given number 10 returns a vector with elements 2,3,5,7,

@param int integer value
@return vector of ints containing prime values up to a value

Make sure to use the is_prime function to determine if current 
number is prime.
*/
std::vector<int> vector_of_primes(int num3)
{
	bool prime;
	std::vector<int> primenums;
	for (int x = 2; x < num3; ++x)
	{
		prime = is_prime(x);
		if(prime == true)
		{
			primenums.push_back(x);
		}
	}
	return primenums;
}



