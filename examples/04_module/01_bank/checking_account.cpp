#include"checking_account.h"

double CheckingAccount::get_balance()
{
	std::cout << "Checking_Account::get_balance();";
	return BankAccount::get_balance();
}