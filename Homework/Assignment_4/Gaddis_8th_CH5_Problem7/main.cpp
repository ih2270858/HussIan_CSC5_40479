/* 
  File:   main.cpp
  Author: Ian Huss
  Created on January 19, 2017, 9:30 PM
  Purpose:Write a program that calculates how much a person would earn over a 
 * period of time if his or her salary is one penny the first day and two 
 * pennies the next day and continues to double each day. The program should ask 
 * the user to for the number of days. Display a table showing how much the 
 * salary was for each day, then show the total pay  at the end of the period.
 * input validation: do not accept a number less than one for the number of days
 * worked
 */

//System Libraries
#include <iostream>
using namespace std;


//Executable code begins here!!!
int main(int argc, char** argv) 
{
    //Declare Variables
    int number_Days =1;
    double money = 1.0;
    int total = 0;
    
    //Input values
    cout << " Enter the number of days worked here:\n " ;
    cin >> number_Days;
    
    while(number_Days < 1)
    {
        cout << " The number of days must be positive. Please resubmit here\n" ;
        cin >> number_Days;
    }
    //Process by mapping inputs to outputs
    for(int i = 1; i <= number_Days; i++)
    { 
        cout << " Day " << i << " earned " << money / 100 << " dollars\n" ;
        money *=2;
 
    }
    //Output values

    //Exit stage right!
    return 0;
}