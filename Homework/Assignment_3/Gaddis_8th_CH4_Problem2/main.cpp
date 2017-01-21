/* 
  File:   main.cpp
  Author: Ian Huss
  Created on January 14, 2017 5:02PM
  Purpose: Roman numeral converter: Write a program that asks the user to enter 
 * a number within the the range of 1-10. Use a switch statement to display the
 * Roman numeral version of the number
 */

//System Libraries
#include <iostream>
using namespace std;

//Executable code begins here!!!
int main(int argc, char** argv) {
    //Declare Variables
    int number;
    //Input values
    cout << "Enter a number (1-10) " << endl;
    cin >> number;
    
    //Process by mapping inputs to outputs
    switch(number)
    {
        case 1: cout << "The Roman numeral version of " << number << " is ";
        cout << "I." <<endl;
        break;
        case 2: cout << "The Roman numeral version of " << number << " is ";
        cout << "II." <<endl;
        break;
        case 3: cout << "The Roman numeral version of " << number << " is ";
        cout << "III." <<endl;
        break;
        case 4: cout << "The Roman numeral version of " << number << " is ";
        cout << "IV." <<endl;
        break;
        case 5: cout << "The Roman numeral version of " << number << " is ";
        cout << "V." <<endl;
        break;
        case 6: cout << "The Roman numeral version of " << number << " is ";
        cout << "VI." <<endl;
        break;
        case 7: cout << "The Roman numeral version of " << number << " is ";
        cout << "VII." <<endl;
        break;
        case 8: cout << "The Roman numeral version of " << number << " is ";
        cout << "VIII." <<endl;
        break;
        case 9: cout << "The Roman numeral version of " << number << " is ";
        cout << "IX." <<endl;
        break;
        case 10: cout << "The Roman numeral version of " << number << " is ";
        cout << "X." <<endl;
        break;
        default:  cout << " You did not enter a number (1-10)!!!!! " << endl;    
    }
    //Exit stage right!
    return 0;
}