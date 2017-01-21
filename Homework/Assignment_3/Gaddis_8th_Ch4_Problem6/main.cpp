/* 
  File:   main.cpp
  Author: Ian Huss
  Created on January 15, 2017, 11:19 PM
  Purpose:Scientists measure an objects mass in kilograms and its weight in 
 * newtons. If you know the amount of mass that an object has, you can calculate
 * its weight in newtons with the formula weight = mass 8 9.8. Write a program 
 * that asks the user to enter an objects mass, and then calculate and display
 * its weight. IF the object weights more than 1000 newtons, display a message 
 * indicating it is too heavy. If the object weighs less than 10 newtons, 
 * display a message indicating the object is too light.
 */

#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

//Executable code begins here!!!
int main(int argc, char** argv) 
{
    //Declare Variables
    int mass, weight;
    //Input values
    cout << " Enter the objects mass in kilograms here: " << endl;
    cin >> mass;
    //Process by mapping inputs to outputs
    
    weight = (mass*9.8);
    cout << " The weight of the object is: " << weight << endl;
    //Output values
    if(weight > 1000)
        cout << " The object is too heavy!" <<endl;
    else if(weight<10)
        cout << " The object is too light! " << endl;
    //Exit stage right!
    return 0;
}