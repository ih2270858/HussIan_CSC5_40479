/* 
  File:   main.cpp
  Author: Ian Huss
  Created on January 11, 2017, 8:32 PM
  Purpose:  Write a program that asks the user to input  the number of males and
 * numbers of females registered in a class. This program should display 
 * the percentage of males and females in the class
 */
//System Libraries
#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

//Executable code begins here!!!
int main(int argc, char** argv) 
{
    //Declare Variables
    double percent_Male, percent_Female, number_Males, number_Females, total;
    //Input values
    cout << " How many males are there in the class? " << endl;
    cin >> number_Males;
    
    cout << " How many females are there in the class " << endl;
    cin >> number_Females;
    
    total = (number_Males + number_Females);
    percent_Male = (number_Males/total);
    percent_Female =(number_Females/total);
    
    cout << " The percent of male students is:" << percent_Male *100 << endl;
    cout << " The percent of female students is " << percent_Female*100 << endl;
  
    return 0;
}