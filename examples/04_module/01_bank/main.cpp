#include "bank_account.h"
#include"atm.h"
#include"customer.h"
#include"savings_account.h"
#include"checking_account.h"
#include<vector>
#include<iostream>

using std::vector;

int main() 
{
	SavingsAccount s(12345, 1000);
	std::cout << s.get_balance();

	BankAccount& b = s;
	std::cout << "\n" << b.get_balance() << "\n";

	CheckingAccount c(54321, 500);
	std::cout << c.get_balance() << "\n";

	BankAccount& d = c;
	std::cout << "\n" << d.get_balance();

	vector < std::reference_wrapper<BankAccount>> accounts{ s,c };

	for (auto & account : accounts)
	{ //account must be unwraped with .get() to get the instance of Acount
		std::cout << account.get().get_balance() << std::endl;
	}

	/*BankAccount account(123456, 500);
	Customer customer(account);
	ATM atm(customer);
	
	atm.display_balance();
	atm.deposit(50);
	atm.display_balance();
	
	display(account);

	BankAccount b(1, 900);
	BankAccount c = account + b;
	std::cout << c << "\n";
	//std::cin << c;
	std::cout << "\n";

	display(c);/*

	/*
	std::vector<BankAccount> accounts;
	BankAccount account(12345689, 500);
	BankAccount account1(55545689, 5000);

	accounts.push_back(account);
	accounts.push_back(account1);

	for (auto act : accounts)
	{
		std::cout << act.get_balance() << "\n";
	}*/

	/*
	for(auto tic_tac_toe: list)
	{
		cout<<tic_tac_toe<<"\n";
	}

	*/

	return 0;
}