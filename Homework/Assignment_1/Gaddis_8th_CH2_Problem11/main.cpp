/* 
  File:   main.cpp
  Author: Ian Huss
  Created on January 7, 2017, 10:49 am
  Purpose:  Template to be used in all programming
            projects!
 */

//System Libraries
#include <iostream>
using namespace std;

// This program calculates the average distance a car can travel 
//Executable code begins here!!!
int main(int argc, char** argv) {
    //Declare Variables
    double gas_Tank = 20,
    average_City = 23.5,
    average_Highway = 28.9,
    distance;
    //Input values
   
    //Output values
   
    cout << " The car will travel " << gas_Tank * average_Highway << " on the highway " << endl;
    cout << " The car will travel " << gas_Tank * average_City << " on city streets " << endl;
    //Exit stage right!
    return 0;
}