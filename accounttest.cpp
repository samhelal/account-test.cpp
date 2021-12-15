/* (Modified Account Class) Modify class Account (Fig. 3.8) to
provide a member function called money from an Account .
does not exceed the withdraw that withdraws
Ensure that the withdrawal amount Account ’s balance. If it does, the balance
should be left unchanged and the member function should 
display a message indicating "Withdrawal amount exceeded account balance."
member function Modify class (Fig. 3.9) to test AccountTest withdraw 
(c++ how to program)*/
//account test
//displayin account name and balance and updating acount info
#include <iostream>
#include "account.h"
using namespace std ;

int main () {

    account account1 ("Gane Green " , 50 ) ;
    account account2 ("John blue" , -7) ;
    cout << account1.getName() << account1.getBalance()<< endl ;
    cout << " please enter withdraw amount : "  ;
    int withdrawAmount (0) , depositeAmount(0) ;
    cin >> withdrawAmount ;
    if(account1.getBalance()<withdrawAmount){      // to make sure the withdraw amount does not exceed the balance 
    cout << " Withdrawal amount exceeded account balance." ;
    }
    if (account1.getBalance()>=withdrawAmount){   // to make sure the withdraw amount does not exceed the balance 
    account1.withdraw(withdrawAmount) ;
    }
    cout << account1.getName() << account1.getBalance()<< endl ;
    cout << " please enter deposite amount : " ;
    cin >> depositeAmount ;
    account1.deposite(depositeAmount) ;
    cout << account1.getName() << account1.getBalance()<< endl ;



}
