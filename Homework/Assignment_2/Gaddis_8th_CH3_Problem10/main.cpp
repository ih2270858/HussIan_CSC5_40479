/* 
  File:   main.cpp
  Author: Ian Huss
  Created on January 11, 2017, 9:18 PM
  Purpose:Many financial experts advise that property owners should insure their
 * home or buildings for at least 80% of the amount it would cost to replace the
 * structure. Write a program that asks the user to enter the replacement cost 
 * of the building and then displays the minimum amount of insurance needed.
 */

//System Libraries
#include <iostream>
#include <cmath>
using namespace std;

//Executable code begins here!!!
int main(int argc, char** argv) {
    //Declare Variables
    double replacement_Cost, minimum_Amount, recommended_Amount;
   
    
    //Input values
    cout << " Enter the replacement cost here: " << endl;
    cin >> replacement_Cost;
  
    recommended_Amount = .80;
    minimum_Amount = (replacement_Cost * recommended_Amount);
    
    //Process by mapping inputs to outputs
    cout << " The recommended amount of insurance is :$ " << minimum_Amount
            << endl;

    return 0;
}