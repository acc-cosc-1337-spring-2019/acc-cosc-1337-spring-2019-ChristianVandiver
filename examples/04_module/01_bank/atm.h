#ifndef ATM_H
#define ATM_H
#include"bank_account.h"

class ATM
{
public:
	void display_balance();

private:
	BankAccount account;
};

#endif //ATM_H