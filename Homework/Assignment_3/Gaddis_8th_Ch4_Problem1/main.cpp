/* 
  File:   main.cpp
  Author: Ian Huss
  Created on January 14, 2017, 4:43 PM
  Purpose:  Template to be used in all programming
            projects!
 */

#include <iostream>
using namespace std;

//Executable code begins here!!!
int main(int argc, char** argv) {
    //Declare Variables
    int num1, num2;
    
    //Input values
    cout << " Please enter two numbers " << endl;
    cin >> num1 >> num2;
    //Process by mapping inputs to outputs
    if (num1 > num2)
    {
        cout << " The larger number is: " << num1 <<endl ;
    }
    if (num2 > num1)
    {
        cout << " The larger number is " << num2 <<endl;
    }

    return 0;
}