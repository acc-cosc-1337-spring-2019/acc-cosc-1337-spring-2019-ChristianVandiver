//
#include"report.h"
#include "examples/12_module/08_arrays_dyn_1/bank_account.h"
#include<iostream>

Report::Report()
{
	//read from file or database
	accounts = new BankAccount[5];
	//iterate to update balance
	accounts[0].get_balance();
}

Report::~Report()
{
	std::cout << "clear array \n";
	delete[] accounts;
	accounts = nullptr;
}

void Report::display()
{
	for (int i = 0; i < 5; ++i)
	{
		std::cout << accounts[i].get_balance() << "\n";
	}
}