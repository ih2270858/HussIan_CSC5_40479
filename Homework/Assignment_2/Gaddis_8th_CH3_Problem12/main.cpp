/* 
  File:   main.cpp
  Author: Ian HUss
  Created on January11, 2017, 5:37 PM
  Purpose:  Converts Celsius to Fahrenheit temperatures
 */

//System Libraries
#include <iostream>
#include <cmath>
using namespace std;

//Executable code begins here!!!
int main(int argc, char** argv) {
    //Declare Variables
    float celsius, fahrenheit;
   
    //Input values
    cout << " Enter the temperature in degrees celsius: " << endl;
    cin >> celsius;
    //Process by mapping inputs to outputs
    // fahrenheit = 9/5c + 32
    // fahrenheit = 1.8c + 32
   fahrenheit = (1.8 * celsius) + 32;
    //Output values
   cout << " THe temperature converts to " << fahrenheit << " degrees "
           << "fahrenheit. " << endl;
          
           
    //Exit stage right!
    return 0;
}