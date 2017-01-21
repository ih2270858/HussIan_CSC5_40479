/* 
  File:   main.cpp
  Author: Ian Huss
  Created on January 15, 2017, 12:15 PM
  Purpose:  Create a change-counting game that gets the user to enter the number
 * of coin required to make exactly one dollar. THe program should ask the user 
 * to enter the number of pennies, nickel, dimes and quarters. If the total
 * value of the coins enter is equal to one dollar, the program should
 * congratulate the user for winning the game. Otherwise the program should
 * display a message indicating whether the amount entered was more than or less
 * than one dollar.
 */

#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

//Executable code begins here!!!
int main(int argc, char** argv) 
{
    //Declare Variables
    double pennies,nickles,dimes,quarters,amount;
    
    //Input values
    cout << " Enter the numbers of pennies here: " << endl;
    cin >> pennies;
    cout << " Enter the number of nickels here: " << endl;
    cin >> nickles;
    cout << " Enter the number of dimes here: " << endl;
    cin >> dimes;
    cout << " Enter the number of quarters here: " <<endl;
    cin >> quarters;
    cout << " Your total is: " << amount << endl;
    //Process by mapping inputs to outputs
    amount = (pennies*.01)+(nickles*.05)+(dimes*.10)+(quarters*.25);
    //Output values
    if(amount == 1.00)
        cout << " Congratulations you have won the game!!!!! " << endl;
    else if(amount<1.00 && amount>0)
        cout << " The amount is less then one dollar try again!" << endl;
    else if(amount>1.00)
        cout << " The amount is more than one dollar try again!" << endl;
    //Exit stage right!
    return 0;
}