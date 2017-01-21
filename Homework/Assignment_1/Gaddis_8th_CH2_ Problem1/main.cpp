/* 
  File:   main.cpp
  Author: Ian Huss
  Created on January 6, 2017, 9:26PM
  Purpose:  Template to be used in all programming
            projects!
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
int main(int argc, char** argv) {
    //Declare Variables
    int apple,
            pear,
            total;
    //Input values
    apple = 50;
    pear = 100;
    //Process by mapping inputs to outputs
    total = apple + pear;
    //Output values
    cout << apple << " + " << pear << " = " << total << endl;
    //Exit stage right!
    return 0;
}