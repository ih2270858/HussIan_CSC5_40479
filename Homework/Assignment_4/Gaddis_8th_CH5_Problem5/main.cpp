/* 
  File:   main.cpp
  Author: Ian Huss
  Created on January 9, 2017, 8:24 PM
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
int main(int argc, char** argv) 
{
    //Declare Variables
    float increase = .04;
    float years = 6;
    float membership = 2500;
    
    //Input values
    for (int i =1 ; i <= years; i++)
    //Process by mapping inputs to outputs
    { 
        membership = membership + (membership*increase);
                cout << "Year " << i << " Fees are: $" << membership << endl;
    }
    //Output values

    //Exit stage right!
    return 0;
}