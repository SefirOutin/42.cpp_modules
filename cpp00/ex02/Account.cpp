/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: soutin <soutin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/09 18:18:59 by soutin            #+#    #+#             */
/*   Updated: 2024/04/11 13:47:28 by soutin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <iomanip>
#include <ctime>
#include "Account.hpp"

int	Account::_nbAccounts = 0;
int	Account::_totalAmount = 0;
int	Account::_totalNbDeposits = 0;
int	Account::_totalNbWithdrawals = 0;


Account::Account( int initial_deposit ):
	_amount(initial_deposit),
	_nbDeposits(0),
	_nbWithdrawals(0)
{
	_accountIndex = _nbAccounts;
	_totalAmount += initial_deposit;
	_nbAccounts++;
	_displayTimestamp();
	std::cout << "index:" << _accountIndex
			<< ";" << "amount:" << _amount
			<< ";created" << std::endl;
}

Account::~Account()
{
	_displayTimestamp();
	std::cout << "index:" << _accountIndex
			<< ";" << "amount:" << _amount
			<< ";closed" << std::endl;
}

void	Account::displayAccountsInfos( void )
{
	_displayTimestamp();
    std::cout << "accounts:" << _nbAccounts
			<< ";total:" << _totalAmount
			<< ";deposits:" << _totalNbDeposits
			<< ";withdrawals:" << _totalNbWithdrawals << std::endl;
}


void	Account::makeDeposit( int deposit )
{
	_nbDeposits++;
	_totalNbDeposits++;
	_totalAmount += deposit;
	 _displayTimestamp();
    std::cout << "index:" << _accountIndex
			<< ";p_amount:" << _amount
			<< ";deposit:" << deposit
			<< ";amount:" << _amount + deposit
			<< ";nb_deposits:" << _nbDeposits << std::endl;
	_amount += deposit;
}
bool	Account::makeWithdrawal( int withdrawal )
{
	_displayTimestamp();
    std::cout << "index:" << _accountIndex
		<< ";p_amount:" << _amount
		<< ";withdrawal:";
	if (_amount - withdrawal < 0)
	{
		std::cout << "refused" << std::endl;
		return false;
	}
	_totalNbWithdrawals++;
	_totalAmount -= withdrawal;
	_nbWithdrawals++;
	std::cout << withdrawal
		<< ";amount:" << _amount - withdrawal
		<< ";nb_withdrawals:" << _nbWithdrawals << std::endl;
	_amount -= withdrawal;
	return true;
}

int		Account::checkAmount( void ) const
{
    return _amount;
}

void	Account::displayStatus( void ) const
{
    _displayTimestamp();
    std::cout << "index:" << _accountIndex
			<< ";amount:" << _amount
			<< ";deposits:" << _nbDeposits
			<< ";withdrawals:" << _nbWithdrawals << std::endl;
}

void	Account::_displayTimestamp( void )
{
	std::time_t	timestamp;
	tm			*t;

	timestamp = std::time(0);
	t = localtime(&timestamp);
	std::cout << '['
			<< t->tm_year + 1900
			<< std::setfill('0') << std::setw(2) << t->tm_mon + 1
			<< std::setfill('0') << std::setw(2) << t->tm_mday
			<< '_'
			<< std::setfill('0') << std::setw(2) << t->tm_hour
			<< std::setfill('0') << std::setw(2) << t->tm_min
			<< std::setfill('0') << std::setw(2) << t->tm_sec
			<< "] ";
}