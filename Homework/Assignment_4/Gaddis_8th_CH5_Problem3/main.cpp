/* 
 File:   main.cpp
 Author: Ian Huss
 Created on January 19, 2017, 9:00 PM
 Purpose: Assuming the ocean's level is currently rising at about 1.5 milimeters 
 * per year, write a program that displays the number of millimeters the ocean 
 * will have risen for the next 25 years.
 */

//System Libraries
#include <iostream>
using namespace std;

//Executable code begins here!!!
int main(int argc, char** argv) 
{
    //Declare Variables
    float level = 0;
    int years= 25;
    //Input values
    for (int i = 1; i <= years; i++)
    {
        level += 1.5;
        cout << " In  Year: " << i << " the ocean has risen: " << level << endl;
        cout << "milimeters. " << endl;
                
    }
    //Process by mapping inputs to outputs
    
    //Output values

    //Exit stage right!
    return 0;
}