/* 
  File:   main.cpp
  Author: Ian Huss
  Created on January 10, 2017, 5:23 PM
  Purpose:  Problem 1 Chapter 3
 */

//System Libraries
#include <iostream>
using namespace std;

//Executable code begins here!!!
int main(int argc, char** argv) {
    //Declare Variables
    int number_Gallons, miles_Driven, total;
    //Input values
    
    //Process by mapping inputs to outputs
    
    //Output values
    cout << " This Program calculates a cars gas mileage. " << endl;
    cout << " How many miles can the car be driven on a full tank of gas? " << endl;
    cin >> miles_Driven;
    cout << " How many gallons of gas can the car hold? " << endl;
    cin >> number_Gallons;
    total = (miles_Driven / number_Gallons);
    cout << " The cars gas mileage is: " << total << endl;
    
    //Exit stage right!
    return 0;
}