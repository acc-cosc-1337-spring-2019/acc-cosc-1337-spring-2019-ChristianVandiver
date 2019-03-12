#include"atm.h"
#include<iostream>

void ATM::display_balance()
{
	std::cout << "Balance: " << customer.get_account().get_balance();
}

void ATM::deposit(double amt)
{
	//BankAccount act = customer.get_account();
	//act.deposit(amt);
	customer.get_account().deposit(amt);
}

void ATM::withdraw(double amt)
{
	customer.get_account().withdraw(amt);
}

void ATM::display_transactions() const
{
	std::cout << "Type " << "Amount " << "Balance ";

	for (auto tran : customer.get_account().get_transaction())
	{
		std::cout << tran;
	}
}
