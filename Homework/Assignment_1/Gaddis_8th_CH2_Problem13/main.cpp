/* 
  File:   main.cpp
  Author: Ian Huss
  Created on January 7 2017 12:11pm
  Purpose: An electronics company sells circuit board at a 35% profit 
 * Calculate the selling price of a circuit that costs $14.95
 *         
 */

//System Libraries
#include <iostream>
using namespace std;

//Executable code begins here!!!
int main(int argc, char** argv) 
{
    float base_Price = 14.95,
    selling_Price;
 
    //Process by mapping inputs to outputs
    selling_Price = (.40 * 14.95) + 14.95;
    //Output values
    cout << " the selling price would be $" << selling_Price << endl;
    //Exit stage right!
    return 0;
}