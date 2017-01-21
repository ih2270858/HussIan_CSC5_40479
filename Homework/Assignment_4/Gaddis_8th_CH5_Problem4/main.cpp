/* 
  File:   main.cpp
  Author: Ian Huss
  Created on January 19, 2017, 8:40 PM
  Purpose: Running on a particular treadmill you burn 3.6 calories per minute. 
 * Write a program that uses a loop to display the number of calories burned
 * after 5, 10, 15,20,25, and 30 minutes.
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
    float calories_Burned;
    float caloriesBurnedPerMinute = 3.6;
    //Input values
    cout << " This program displays the number of calories burned\n" ;
    cout << "in five minute intervals starting at 10 " << endl;
    //Process by mapping inputs to outputs
    for(int i=10;  i <= 30; i+=5)
    {
        calories_Burned = (i *caloriesBurnedPerMinute);
        cout << " In " << i << " minutes, you have burned " << calories_Burned 
                <<endl;
        cout << "calories!" << endl;
    }
    return 0;
}