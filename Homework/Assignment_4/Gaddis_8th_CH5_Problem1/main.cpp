/* 
  File:   main.cpp
  Author: Ian Huss
  Created on January 18, 2017, 10:27 PM
  Purpose: Write a program that asks the user for a positive integer value. 
 * The program should use a loop to get the sum of all integers from 1 up to the 
 * number entered. For example, if the user inputs 50, the loop, will find the 
 * sum of 1=2=3=4/...+50.
 * Input validation: Do not accept a negative starting number.
 */

//System Libraries
#include <iostream>
using namespace std;

//User Libraries

//Global Constants
//Such as PI, Vc, -> Math/Science values
//as well as conversions from system of units to 
//another

//Function Prototypes

//Executable code begins here!!!
int main(int argc, char** argv) 
{
    //Declare Variables
    int number = 0;
    int sum = 0;
    //Input values
    cout << "Enter the number to be compiled here: " << endl;
    cin >> number;
    
    //Process by mapping inputs to outputs
    while(number < 0)
    {
      cout << " Invalid input please enter only positive numbers here:\n";
      cin >> number;
    }
    for(int i = 1; i <= number; i++)
    {
       sum += i;
    }
        cout <<  " Total sum is: " << sum << endl;
   
    return 0;
}