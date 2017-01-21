/* 
  File:   main.cpp
  Author: Ian Huss
  Created on January 10, 2017, 6:09 PM
  Purpose:  Problem 3 Chapter 3
 */

//System Libraries
#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

//Executable code begins here!!!
int main(int argc, char** argv) {
    //Declare Variables
    double test1, test2, test3, test4, test5 ;
    double average;
    //Input values
    cout << " Enter the value for test one " << endl;
    cin >> test1;
    cout << " Enter the value for test two " << endl;
    cin >> test2;
    cout << " Enter the value for test three " << endl;
    cin >> test3;
    cout << " Enter the value for test four " << endl;
    cin >> test4;
    cout << " Enter the value for test five " << endl;
    cin >> test5;
    
    average =( test1 + test2 + test3 + test4 + test5) / 5.0;
    
    //Process by mapping inputs to outputs
    
    //Output values
    cout << setprecision (1) << fixed;
    cout << " Test 1: " << test1 << endl;
    cout << " Test 2: " << test2 << endl;
    cout << " Test 3: " << test3 << endl;
    cout << " Test 4: " << test4 << endl;
    cout << " Test 5: " << test5 << endl;
    cout << "Average: " << average << endl; 
          
    //Exit stage right!
    return 0;
}