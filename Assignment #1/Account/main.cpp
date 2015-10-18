#include <iostream>
#include "Account.h"
using namespace std;

int main()
{
    Account a ("Shady Atef","52655",2535.0);
    a.show();
    a.deposit(516);
    a.withdraw(623.250);
    a.show();
    return 0;
}
