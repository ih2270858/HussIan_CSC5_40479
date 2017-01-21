/* 
  File:   main.cpp
  Author: Ian Huss
  Created on January 11, 2017, 9:00 PM
  Purpose:  a bag of cookies holds 30 cookies. The calorie information on the 
 * bag claims that there are 10 servings in the bag and that a serving equals
 * 300 calories. Write a program that asks the user to input how many cookies
 * he or she ate and then reports how many total calories were consumed
 * 
 */

//System Libraries
#include <iostream>
using namespace std;

//Executable code begins here!!!
int main(int argc, char** argv) 
{
    //Declare Variables
    double numberof_Cookies, total_Calories;
    //Input values
    cout << " Enter the number of cookies eaten: " << endl;
    cin >> numberof_Cookies;
    
    //30 cookies in a bag with 10 servings = 3 cookies a serving
    // 3 cookies in 1 serving = 100 calories a cookie
    total_Calories = (numberof_Cookies *100); // calories per cookie

    cout << " The total amount of calories consumed is: " << total_Calories <<
            endl;
    //Exit stage right!
    return 0;
}