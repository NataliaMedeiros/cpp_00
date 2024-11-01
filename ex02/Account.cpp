/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Account.cpp                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: natalia <natalia@student.42.fr>              +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/10/31 13:48:43 by natalia       #+#    #+#                 */
/*   Updated: 2024/11/01 10:06:18 by natalia       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Account.hpp"
#include <iostream>

int Account::_nbAccounts = 0;
int Account::_totalAmount = 0;
int Account::_totalNbDeposits = 0;
int Account::_totalNbWithdrawals = 0;

Account::Account(int initial_deposit)
{
	_accountIndex = getNbAccounts();
	_amount = initial_deposit;
	_nbDeposits = 0;
	_nbWithdrawals = 0;
	_nbAccounts++;
	_totalAmount += _amount;
	_displayTimestamp();
	std::cout << "index: " << _accountIndex << " amount: " << _amount << " created" << std::endl;
}

Account::~Account(void)
{
	_displayTimestamp();
	std::cout << "index: " << _accountIndex << " amount: " << _amount << " destroyed" << std::endl;
}

int	Account::getNbAccounts(void)
{
	return (_nbAccounts);
}

int	Account::getTotalAmount(void)
{
	return (_totalAmount);
}

int	Account::getNbDeposits(void)
{
	return (_totalNbDeposits);
}

int	Account::getNbWithdrawals(void)
{
	return (_totalNbWithdrawals);
}

void	Account::displayAccountsInfos(void)
{
	std::cout << "Account status: " << std::endl;
	std::cout << "----------------" << std::endl;
	std::cout << "Accounts: " << _nbAccounts << std::endl;
	std::cout << "Total Amount: " << _totalAmount << std::endl;
	std::cout << "Total Nb Deposits: " << _totalNbDeposits << std::endl;
	std::cout << "Total nb Withdawals: " << _totalNbWithdrawals << std::endl;
	std::cout << "----------------" << std::endl;
}

void	Account::makeDeposit(int deposit)
{
	_displayTimestamp();
	_nbDeposits++;
	_amount += deposit;
	std::cout << "index: " << _accountIndex << "; Deposit of: " << deposit << "; new amount:" << _amount << std::endl;
	_totalNbDeposits++;
	_totalAmount += deposit;
}

bool	Account::makeWithdrawal(int withdrawal)
{
	_displayTimestamp();
	std::cout << "index: " << _accountIndex << " amount: " << _amount;
	if (withdrawal > _amount)
	{
		std::cout << "; Withdrawal of: " << withdrawal << " REFUSED" << std::endl;
		return (false);
	}
	_nbWithdrawals++;
	_amount -= withdrawal;
	std::cout << "; Withdrawal of: " << withdrawal << "; new amount:" << _amount << std::endl;
	_totalNbWithdrawals++;
	_totalAmount -= withdrawal;
	return (true);
}

int		Account::checkAmount(void) const
{
	return(_amount);
}

void	Account::displayStatus(void) const
{
	_displayTimestamp();
	std::cout << "STATUS: index: " << _accountIndex << "; amount: " << _amount;
	std::cout << "; nb_deposit: " << _nbDeposits << "; nb_withdrawals:" << _nbWithdrawals;
	std::cout << std::endl;
}

void	Account::_displayTimestamp( void )
{
	std::time_t current = time(NULL);
	char timestamp[20];

	strftime(timestamp, sizeof(timestamp), "[%Y%m%d_%H%M%S] ", localtime(&current));
	std::cout << timestamp;
}
