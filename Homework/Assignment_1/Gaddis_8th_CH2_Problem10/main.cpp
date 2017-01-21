/* 
  File:   main.cpp
  Author: Ian Huss
  Created on January 8, 2017, 1/8/17 11:39 AM
  Purpose:  Write a program that calculates the number of miles per gallon the
 * car gets
 */

//System Libraries
#include <iostream>
using namespace std;

//Executable code begins here!!!
int main(int argc, char** argv) {
    //Declare Variables
    float gas_Tank, miles_Driven, MPG;

    //Input values
    gas_Tank = 15;
    miles_Driven = 375;
   
    //Process by mapping inputs to outputs
    MPG = (miles_Driven / gas_Tank);
    //Output values
    cout << " The total MPG of the car is " << MPG << "." << endl;
    //Exit stage right!
    return 0;
}