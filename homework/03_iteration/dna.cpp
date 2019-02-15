#include<string>
#include"dna.h"

using std::string;

/*
Write code for function get_gc_content that accepts
a const reference string parameter and returns a double.
Calculate GC content:
Iterate string count Gs and Cs, divide count by string length.
Return quotient.
*/
double get_gc_content(const string word)
{
	double count = 0;
	double total;
	for (int i = 0;i < word.size();++i)
	{
		if (word[i] == 'G' || word[i] == 'g' || word[i] == 'C' || word[i] == 'c')
		{
			count += 1;
		}
	}
	return total = count / word.size();
}


/*
Write code for function get_reverse_string that
accepts a string parameter and returns a string reversed.
*/
string get_reverse_string(string word)
{
	string reverse;
	for (int i = word.size() - 1;i>=0;--i )
	{
		reverse+=word[i];		
	}
	return reverse;
}


/*
Write prototype for function get_dna_complement that
accepts a string dna and returns a string.
Calculate dna complement:
a. call function get_reverse_string(dna), save results to a local string variable
b. iterate local string variable and
    replace A with T, T with A, C with G and G with C
c. return string

*/
string get_dna_complement(string word)
{
	string complement = get_reverse_string(word);
	for (int i = 0;i<complement.size();++i)
	{
		if (complement[i] == 'A')
		{
			complement[i] = 'T';
		}
		else
			if(complement[i] == 'T')
			{
				complement[i] = 'A';
			}
			else
				if (complement[i] == 'C')
				{
					complement[i] = 'G';
				}
				else
					if (complement[i] == 'G')
					{
						complement[i] = 'C';
					}
	}
	return complement;
}
