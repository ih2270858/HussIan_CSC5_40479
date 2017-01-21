/* 
  File:   main.cpp
  Author: Ian Huss
  Created on January 8, 2017, 10:54 AM
  Purpose: Calculate the employees total annual pay by multiplying the employees
 * pay mount by the number of pay periods in a year and store the result in the 
 * annualPay variable. Display the total annual pay on your screen.
 */

//System Libraries
#include <iostream>
using namespace std;
//Executable code begins here!!!
int main(int argc, char** argv) 
{
    //Declare Variables
    double pay_Amount, pay_Periods, annual_Pay;
    //Input values
    pay_Amount = 2200.00;
    pay_Periods = 26;
    annual_Pay = (pay_Amount * pay_Periods);
  
    //Output values
cout << " The total annual pay is $" << annual_Pay << endl;
    //Exit stage right!
    return 0;
}