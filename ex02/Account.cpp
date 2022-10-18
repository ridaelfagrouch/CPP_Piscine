/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rel-fagr <rel-fagr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/15 22:55:23 by rel-fagr          #+#    #+#             */
/*   Updated: 2022/10/18 10:23:41 by rel-fagr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Account.hpp"
#include <ctime>

int	Account::_nbAccounts = 0;
int	Account::_totalAmount = 0;
int	Account::_totalNbDeposits = 0;
int	Account::_totalNbWithdrawals = 0;

//-----------------------------------------------------------------------

void Account::_displayTimestamp()
{
	time_t ttime = time(0);
    tm *local_time = localtime(&ttime);
	std::cout << "[" << 1900 + local_time->tm_year << 1 + local_time->tm_mon << \
		local_time->tm_mday << "_091532] "; 
}

//-----------------------------------------------------------------------

Account::Account(int initial_deposit)
{
	this->_accountIndex = this->_nbAccounts++;
	this->_amount = initial_deposit;
	this->_nbDeposits = 0;
	this->_nbWithdrawals = 0;
	this->_totalAmount += this->_amount;
	Account::_displayTimestamp();
	std::cout << "index:" << this->_accountIndex << ";";
	std::cout << "amount:" << initial_deposit << ";";
	std::cout << "created" << std::endl;
}

//-----------------------------------------------------------------------

Account::~Account()
{
	Account::_displayTimestamp();
	this->_nbAccounts--;
	std::cout << "index:" << this->_accountIndex << ";";
	std::cout << "amount:" << this->_amount << ";";
	std::cout << "closed" << std::endl;
}

//-----------------------------------------------------------------------

void Account::displayStatus(void) const
{
	Account::_displayTimestamp();
	std::cout << "index:" << this->_accountIndex << ";";
	std::cout << "amount:" << this->_amount << ";";
	std::cout << "deposits:" << this->_nbDeposits << ";";
	std::cout << "withdrawals:" << this->_nbWithdrawals << std::endl;
}

//-----------------------------------------------------------------------

bool Account::makeWithdrawal(int withdrawal)
{
	int	p_amount = this->_amount;
	Account::_displayTimestamp();
	std::cout << "index:" << this->_accountIndex << ";";
	std::cout << "p_amount:" << p_amount << ";";
	if (p_amount < withdrawal)
		std::cout << "withdrawal:refused" << std::endl;
	else
	{
		this->_amount -=  withdrawal;
		this->_totalNbWithdrawals++;
		this->_totalAmount -= withdrawal;
		this->_nbWithdrawals = 1;
		std::cout << "withdrawal:" << withdrawal << ";";
		std::cout << "amount:" << this->_amount << ";";
		std::cout << "nb_withdrawals:" << this->_nbDeposits << std::endl;	
	}
	return 1;
}

//-----------------------------------------------------------------------

void Account::makeDeposit(int deposit)
{
	int	p_amount = this->_amount;
	this->_amount +=  deposit;
	this->_nbDeposits = 1;
	this->_totalNbDeposits += this->_nbDeposits;
	this->_totalAmount += deposit;
	Account::_displayTimestamp();
	std::cout << "index:" << this->_accountIndex << ";";
	std::cout << "p_amount:" << p_amount << ";";
	std::cout << "deposit:" << deposit << ";";
	std::cout << "amount:" << this->_amount << ";";
	std::cout << "nb_deposits:" << this->_nbDeposits << std::endl;
}

//----------------------------------static-------------------------------

void Account::displayAccountsInfos(void)
{
	Account::_displayTimestamp();
	std::cout << "accounts:" << Account::_nbAccounts << ";";
	std::cout << "total:" << Account::_totalAmount << ";";
	std::cout << "deposits:" << Account::_totalNbDeposits << ";";
	std::cout << "withdrawals:" << Account::_totalNbWithdrawals << std::endl;
}
