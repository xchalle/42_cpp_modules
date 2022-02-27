#include "Account.hpp"
#include <iostream>
#include <ctime>
#include <iomanip>

int Account::_nbAccounts = 0;
int Account::_totalAmount = 0;
int Account::_totalNbDeposits = 0;
int Account::_totalNbWithdrawals = 0;

Account::Account( int initial_deposit )
{
    _displayTimestamp();
    _accountIndex = _nbAccounts;
    _nbAccounts++;
    _amount = initial_deposit;
    _totalAmount += initial_deposit;
    std::cout << "index:" << _accountIndex << ";";
    std::cout << "amount:" << _amount << ";";
    std::cout << "created" << std::endl;
    return ;
}

Account::~Account( void )
{
    _displayTimestamp();
    std::cout << "index:" << _accountIndex << ";";
    std::cout << "amount:" << _amount << ";";
    std::cout << "closed" << std::endl;
    return ;
}

void    Account::makeDeposit(int deposit)
{
    _displayTimestamp();
    std::cout << "index:" << _accountIndex << ";";
    std::cout << "p_amount:" << _amount << ";";
    std::cout << "deposit:" << deposit << ";";
    _amount = _amount + deposit;
    std::cout << "amount:" << _amount << ";";
    _totalNbDeposits++;
    _nbDeposits++;
    _totalAmount += deposit;
    std::cout << "nb_deposits:" << _nbDeposits << std::endl;
}

int	Account::getNbAccounts( void )
{
    return (_nbAccounts);
}

int	Account::getTotalAmount( void )
{
    return (_totalAmount);
}

int	Account::getNbDeposits( void )
{
    return (_totalNbDeposits);
}

int	Account::getNbWithdrawals( void )
{
    return (_totalNbWithdrawals);
}

void Account::displayAccountsInfos( void )
{
    _displayTimestamp();
    std::cout << "accounts:" << getNbAccounts() << ";total:" << getTotalAmount() << ";deposits:" << getNbDeposits() << ";withdrawals:" << getNbWithdrawals() << std::endl;
}

void	Account::displayStatus( void ) const
{
    _displayTimestamp();
    std::cout << "index:" << _accountIndex << ";amount:" << _amount << ";deposits:" << _nbDeposits << ";withdrawals:" << _nbWithdrawals << std::endl;
}

bool    Account::makeWithdrawal(int withdrawal)
{
    _displayTimestamp();
    std::cout << "index:" << _accountIndex << ";";
    std::cout << "p_amount:" << _amount << ";";
    if (withdrawal <= _amount)
    {
        _amount = _amount - withdrawal;
        std::cout << "withdrawals:" << withdrawal << ";";
        std::cout << "amount:" << _amount << ";";
        _nbWithdrawals++;
        std::cout << "nb_withdrawals:" << _nbWithdrawals << std::endl;
        _totalNbWithdrawals++;
        return (true);
    }
    std::cout << "withdrawals:refused" << std::endl;
    return (false);
}

void	Account::_displayTimestamp( void )
{
    time_t  timer;
    struct tm *test;

    time(&timer);
    test = localtime(&timer);
    std::cout << "[";
    std::cout << test->tm_year + 1900;
    std::cout << std::setfill ('0') << std::setw (2);
    std::cout << test->tm_mon + 1;
    std::cout << std::setfill ('0') << std::setw (2);
    std::cout << test->tm_mday;
    std::cout << "_";
    std::cout << std::setfill ('0') << std::setw (2);
    std::cout << test->tm_hour;
    std::cout << std::setfill ('0') << std::setw (2); 
    std::cout << test->tm_min;
    std::cout << std::setfill ('0') << std::setw (2);
    std::cout << test->tm_sec;
    std::cout << "]";
}
