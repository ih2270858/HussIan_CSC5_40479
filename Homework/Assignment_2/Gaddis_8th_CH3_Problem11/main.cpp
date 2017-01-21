/* 
  File:   main.cpp
  Author: Ian Huss
  Created on January 11, 2017, 9:42 PM
  Purpose: Write a program that asks the user to enter the monthly costs for the
 * following expenses incurred from operating his or her automobile: loan
 * payment, insurance, gas, oil, tires, and maintenance. The program should then
 * display the total monthly cost of these expenses, and the total annual cost
 * of these expenses
 */

//System Libraries
#include <iostream>
using namespace std;

//Executable code begins here!!!
int main(int argc, char** argv) 
{
    //Declare Variables
    double loan_Payment, insurance, gas, oil, tires, maintenance, monthly_Cost,
            annual_Cost;
    //Input values
    cout << " Enter the cost of the loan payment here: " << endl;
    cin >> loan_Payment;
    cout << " Enter the cost of the insurance here: " << endl;
    cin >> insurance;
    cout << " Enter the cost of the gas here: " << endl;
    cin >> gas;
    cout << " Enter the cost of the oil here: " << endl;
    cin >> oil;
    cout << " Enter the cost of the tires here: " << endl;
    cin >> tires;
    cout << " Enter the cost of the maintenance here: " << endl;
    cin >> maintenance;
    
    monthly_Cost = (loan_Payment+insurance+gas+oil+tires+maintenance);
    annual_Cost = (monthly_Cost*12);
    //Process by mapping inputs to outputs
    cout << " The monthly expenses are: " << monthly_Cost << endl;
    cout << " The annual expenses are: " << annual_Cost << endl;
    //Output values

    //Exit stage right!
    return 0;
}