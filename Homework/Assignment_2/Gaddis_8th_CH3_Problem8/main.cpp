/* 
  File:   main.cpp
  Author: Ian Huss
  Created on January 12, 706 PM
  Purpose: The Yukon Widget COmpany manufactures widgets that weigh 12.5 pounds
 * each. Write a program that calculates how many widgets are stacked on a 
 * pallet, based on the total weight of the pallet. The program should ask the 
 * user how much the pallet  weighs by itself and with the widgets stacked on
 * it. It should calculate and display the number of widgets stacked on the 
 * pallet
 */

#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

//Executable code begins here!!!
int main(int argc, char** argv) {
    //Declare Variables
    double weight_Pallet, stacked_Widgetweight, total_Weight, amount_Widget;
    double weight = 12.5;
    //Input values
    cout << " Enter the weight of the pallet: " << endl;
    cin >> weight_Pallet;
    
    cout << " Enter the weight of the pallet when stacked with widgets: "
            << endl;
    cin >> stacked_Widgetweight;
    //Process by mapping inputs to outputs
    total_Weight = (weight_Pallet + stacked_Widgetweight);
    amount_Widget = (total_Weight - weight_Pallet) / weight;
    //Output values
    cout << " The total weight is: " << total_Weight << endl;
    cout << " The amount of widgets stacked is: " << amount_Widget;
    //Exit stage right!
    return 0;
}