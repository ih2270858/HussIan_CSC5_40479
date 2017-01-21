/* 
  File:   main.cpp
  Author: Ian Huss
  Created on January 14, 2017, 5:38 PM
  Purpose:  Template to be used in all programming
            projects!
 */

//System Libraries
#include <iostream>
using namespace std;

int main(int argc, char** argv) 
{
    //Declare Variables
    int month, day, year;
    int magic_Number;
    //Input values
    cout << " Enter a month in two digit numeric form here: " << endl;
    cin >> month;
    cout << " Enter a day in numeric form here: " << endl;
    cin >> day;
    cout << " Enter the year in two digit numerical form here: " << endl;
    cin >> year;
    //Process by mapping inputs to outputs
    magic_Number = (month * day);
    //Output values
    if(magic_Number == year)
    {
        cout << " The date is magic!!! " << endl;
    }
    else
        cout << " The date is not magic!!!. " << endl;
    //Exit stage right!
    return 0;
}