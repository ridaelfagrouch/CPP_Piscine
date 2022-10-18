
#include "Account.hpp"

void    Account::_displayTimestamp(void)
{
    time_t tmNow;
    tmNow = time(NULL);
    struct tm t = *localtime(&tmNow);
    std::cout << "[" << t.tm_year << t.tm_mon << t.tm_mday << "]" << std::endl;
}

void Account::displayAccountsInfos(void)
{
    ;
}

Account::Account()
{
    this.t
}