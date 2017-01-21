/* 
  File:   main.cpp
  Author: Ian Huss
  Created on January 10, 2017, 6:38 PM
  Purpose:  Problem 4 Chapter 3
 */

//System Libraries
#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

//Executable code begins here!!!
int main(int argc, char** argv) 
{
    //Declare Variables
    string month1, month2, month3;
    double rain_Amount1, rain_Amount2, rain_Amount3;
    double average;
    //Input values
    cout << " Enter the first month " << endl;
    cin >> month1;
    cout << " Enter the amount of rain in inches for month 1 " << endl;
    cin >> rain_Amount1;
    
    cout << " Enter the second month " << endl;
    cin >> month2;
    cout << " Enter the amount of rain in inches for month 2 " << endl;
    cin >> rain_Amount2;
    
    cout << " Enter the third month " << endl;
    cin >> month3;
    cout << " Enter the amount of rain in inches for month 3 " << endl;
    cin >> rain_Amount3;
    
    average = (rain_Amount1 + rain_Amount2 + rain_Amount3) / 3;
    
    cout << setprecision(2) << fixed;
    cout << " The average rainfall for " <<  month1 << "," << month2 << ","
            << " and " << month3 << " is " << average << endl;
    //Process by mapping inputs to outputs
    
    //Output values

    //Exit stage right!
    return 0;
}