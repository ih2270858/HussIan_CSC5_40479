/* 
  File:   main.cpp
  Author: Ian Huss
  Created on January 7, 2017, 11:30 PM
  Purpose:  write a c++ program that will determine the amount of memory used by
 * these types and display the information on the screen
 */

//System Libraries
#include <iostream>
using namespace std;

//Problem 9
//Executable code begins here!!!
int main(int argc, char** argv) {

   cout << " A char is stored in " << sizeof(char) << " bytes" << endl;
   cout << " An int is stored in " << sizeof(int) << " bytes\n";
   cout << " A float is stored in " << sizeof(float) << " bytes\n";
   cout << " A double is stored in " << sizeof(double) << " bytes\n";
    
    
    
     //Exit stage right!
    return 0;
}