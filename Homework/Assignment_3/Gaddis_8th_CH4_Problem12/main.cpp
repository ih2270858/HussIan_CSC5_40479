/* 
  File:   main.cpp
  Author: Ian Huss
  Created on January 16, 2017, 11:49 AM
  Purpose:A software company sales a package that retails for $99. Quantity 
 * discounts are given according top the following scale:
 * 10-19 = 20%
 * 20-49 = 30%
 * 50-100=40%
 * 100+ = 40%
 * Write a program that asks for the number of units sold and computes the total
 * cost of the purchase.
 * input validation. Make sure the number of units > 0
 */

//System Libraries
#include <iostream>
using namespace std;

//Executable code begins here!!!
int main(int argc, char** argv) 
{
    //Declare Variables
    int unitsSold;
    double totalCost;
    //Input values
    cout << " Enter the number of units sold here: " << endl;
    cin >> unitsSold;
    //Process by mapping inputs to outputs
    totalCost = (unitsSold*99.00);
    //Output values
    if(unitsSold >= 10 && unitsSold < 19)
    {
        cout << " You receive a 20% discount. Total is: $\n" ;
        cout << totalCost - (totalCost*.20) << endl;       
    }
        else if (unitsSold >= 19 && unitsSold < 49) 
        {
            cout << " You receive a 30% discount. Total is: $\n" ; 
            cout << totalCost-(totalCost*.30)<< endl;    
        }
        else if(unitsSold >= 50 && unitsSold < 100 )
        {
            cout << " You receive a 40% discount. Total is: $\n" ; 
            cout << totalCost-(totalCost*.40)<< endl;
        }
        else if(unitsSold >=100 )
        {
            cout << " You receive a 50% discount. Total is: $\n" ;
            cout << totalCost-(totalCost*.50)<< endl;
        }
        else if(unitsSold < 0)
        {
            cout << " Input warning, only positive amounts may be entered.\n" ;      
        }
    //Exit stage right!
    return 0;
}