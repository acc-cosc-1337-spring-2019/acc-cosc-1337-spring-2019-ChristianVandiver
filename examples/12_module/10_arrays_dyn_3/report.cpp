//
#include"report.h"
#include "examples/12_module/08_arrays_dyn_1/bank_account.h"
#include<iostream>

Report::Report()
{
	//read from file or database
	for (int i = 0; i < 5; ++i)
	{
		accounts[i] = new BankAccount(i * 100);
	}
}

Report::~Report()
{
	for (int i = 0; i < 5; ++i)
	{
		std::cout << "clear element \n";
		delete accounts[i];
		accounts[i] = nullptr;
	}
}

void Report::display()
{
	for (int i = 0; i < 5; ++i)
	{
		std::cout << accounts[i]->get_balance() << "\n";
	}
}