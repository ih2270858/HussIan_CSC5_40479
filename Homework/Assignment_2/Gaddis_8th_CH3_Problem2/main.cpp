/* 
  File:   main.cpp
  Author: Ian Huss
  Created on January 12, 2017, 7:39 PM
  Purpose: There are three seating categories at a stadium. For a softball game
 * , Class A seats are $15.00, Class B seats cost $12.00, and Class C seats
 * cost $9.00. Write a program that asks how many tickets for each class of 
 * seats were sold, then display the amount of income generated from the ticket
 * sales. Format your dollar amount in fixed-point notation , with two decimal
 * places of precision, and be sure the decimal point is always displayed
 */

//System Libraries
#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

//Executable code begins here!!!
int main(int argc, char** argv) {
    //Declare Variables
    double class_A = 15.00, class_B = 12.00, class_C = 9.00;
    double atickets_Sold, btickets_Sold, ctickets_Sold, amount_Generated;
    //Input values
    cout << " How many tickets were sold for Class A seats? " << endl;
    cin >> atickets_Sold;
    cout << " How many tickets were sold for Class B seats? " << endl;
    cin >> btickets_Sold;
    cout << " How many tickets were sold for Class C seats? " << endl;
    cin >> ctickets_Sold;
    //Process by mapping inputs to outputs
    amount_Generated = (class_A * atickets_Sold) + (class_B * btickets_Sold) +
            (class_C * ctickets_Sold);
    //Output values
    cout << setprecision(2) << fixed << endl;
    cout << " The total income generated is $" << amount_Generated << endl; 
    
    return 0;
}