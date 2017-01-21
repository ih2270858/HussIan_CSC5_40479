/* 
  File:   main.cpp
  Author: Ian Huss
  Created on January 19, 2017, 9:10 PM
  Purpose:The distance traveled a vehicle travels can be calculated as follows:
 * distance = speed * time
 * write a program that asks for the user for the speed of the vehicle (in mph)
 * and how many hours it has traveled. The program then use a loop to display 
 * the distance the vehicle has traveled for each hour of the time period.
 */

//System Libraries
#include <iostream>
using namespace std;

//User Libraries

//Global Constants
//Such as PI, Vc, -> Math/Science values
//as well as conversions from system of units to 
//another

//Function Prototypes

//Executable code begins here!!!
int main(int argc, char** argv) 
{
    //Declare Variables
    int speed;
    int time;
    int distance;
    
    //Input values
    cout << " What is the speed in miles per hour? :" << endl;
    cin >> speed;
    
    while (speed <=0)
    { 
        cout << " Please enter a speed greater than zero!\n " ;
        cout << " Please submit again.\n " ;
        cin >> speed;
                
    }
    cout << " Enter the number of hours traveled, must be greater than one.\n" ;
    cin >> time;
    
    while(time<1)
    { 
        cout << " Please enter a time greater than 1!\n " ;
        cin >> time;
    }
    
    cout << "Hour          Distance Traveled\n" ;
    cout << " ------------------------------\n" ;
 
    //Process by mapping inputs to outputs
    for(int i =1; i <= time; i++)
    {
      distance = (speed*i);
      cout << i << "                  " << distance << endl;
    }
    //Output values

    //Exit stage right!
    return 0;
}