/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rel-fagr <rel-fagr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/15 22:55:23 by rel-fagr          #+#    #+#             */
/*   Updated: 2022/10/17 22:44:47 by rel-fagr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Account.hpp"

int	Account::_nbAccounts = 0;
int	Account::_totalAmount = 0;
int	Account::_totalNbDeposits = 0;
int	Account::_totalNbWithdrawals = 0;

Account::Account(int initial_deposit)
{
	this->_accountIndex = this->_nbAccounts++;
	this->_amount = initial_deposit;
	this->_nbDeposits = 0;
	this->_nbWithdrawals = 0;
	Account::_totalAmount += initial_deposit;
	// Account::_displayTimestamp();
	std::cout << "index:" << this->_accountIndex << ";";
	std::cout << "amount:" << initial_deposit << ";";
	std::cout << "created" << std::endl;
}

Account::Account()
{
	this->_accountIndex = this->_nbAccounts++;
	this->_amount = 0;
	this->_nbDeposits = 0;
	this->_nbWithdrawals = 0;
	// Account::_displayTimestamp();
	std::cout << "index:" << this->_accountIndex << ";";
	std::cout << "amount:0;";
	std::cout << "created" << std::endl;
}

Account::~Account()
{
	// Account::_displayTimestamp();
	this->_nbAccounts--;
	std::cout << "index:" << this->_accountIndex << ";";
	std::cout << "amount:" << this->_amount << ";";
	std::cout << "closed" << std::endl;
}

// void Account::displayAccountsInfos(void)
// {
// 	Account::_displayTimestamp();
// 	std::cout << "accounts:" << Account::_nbAccounts << ";";
// 	std::cout << "total:" << Account::_totalAmount << ";";
// 	std::cout << "deposits:" << Account::_totalNbDeposits << ";";
// 	std::cout << "withdrawals:" << Account::_totalNbWithdrawals << std::endl;
// }

// void Account::displayStatus(void) const
// {
// 	Account::_displayTimestamp();
// 	std::cout << "index:" << this->_accountIndex << ";";
// 	std::cout << "amount:" << this->_amount << ";";
// 	std::cout << "deposits:" << this->_nbDeposits << ";";
// 	std::cout << "withdrawals:" << this->_nbWithdrawals << std::endl;
// }


int Account::getNbAccounts(void)
{
	return (Account::_nbAccounts);
}

int Account::getTotalAmount(void)
{
	return (Account::_totalAmount);
}

int Account::getNbDeposits(void)
{
	return (Account::_totalNbDeposits);
}

int Account::getNbWithdrawals(void)
{
	return (Account::_totalNbWithdrawals);
}