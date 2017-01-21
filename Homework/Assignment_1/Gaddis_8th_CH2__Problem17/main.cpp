/* 
  File:   main.cpp
  Author: Ian Huss
  Created on January 8, 2017 10:09am
  Purpose: Write a program that calculates and displays the following
 * 1) the amount paid for the stock (without commission)
 * 2) the amount of the commission 
 * 3) the total amount paid (for the stock and commission)
 */

//System Libraries
#include <iostream>
using namespace std;

//Executable code begins here!!!
int main(int argc, char** argv) {
    //Declare Variables
    double stock_Amount, stock_Price, stock_Commission, amount_Paid, commission_Amount, total;
    //Input values
    stock_Amount = 750;
    stock_Price = 35.00;
    stock_Commission = .02;
    amount_Paid;
    commission_Amount;
    total;
    //Process by mapping inputs to outputs
    amount_Paid = (stock_Amount * stock_Price);
    commission_Amount = (amount_Paid * .02);
    total = (amount_Paid + commission_Amount);
    
    //Output values
    cout << " The amount paid is $" << amount_Paid << endl;
    cout << " The commission amount is $" << commission_Amount << endl;
    cout << " The total amount paid is $" << total << endl;
    //Exit stage right!
    return 0;
}