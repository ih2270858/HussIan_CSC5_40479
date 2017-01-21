/* 
  File:   main.cpp
  Author: Ian Huss
  Created on January 15, 2017, 12:15 PM
  Purpose: Write a program that asks for the names of three runners nd the time
 * it took each of them to finish a race. The program should display who came in
 * first, second, and third.
 *  input validation = only accept positive numbers for the times.
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
    string runner1,runner2,runner3;
    double time1,time2,time3; 
    //Input values
    cout << " Enter the name of the first runner here: " << endl;
    cin >> runner1;
    cout << " Enter the time of the time runner here: " << endl;
    cin >> time1;
    cout << " Enter the name of the second runner here: " << endl;
    cin >> runner2;
    cout << " Enter the time of the second runner here: " << endl;
    cin >> time2;
    cout << "Enter the name of the third runner here: " << endl;
    cin >> runner3;
    cout << "Enter the time of the third runner here: " << endl;
    cin >> time3;
    //Process by mapping inputs to outputs
    
    //Output values
    if (time1  < time2 && time1 <time3)
        if(time2 < time3)
        {
            cout << " First Place: " << runner1 << endl;
            cout << " Second Place:" << runner2 << endl;
            cout << " Third Place:" << runner3 << endl;
        }
        else
        {
            cout <<" First place: " << runner1 << endl;
            cout <<" Second place: " << runner3 << endl;
            cout << "Third place: " << runner2 << endl;
        }
    else if((time2<time1) && (time2<time3))
        if(time1<time3)
    {
        cout << "First place:" << runner2 << endl;
        cout << "Second place:" << runner1 << endl;
        cout << "Third place:" << runner3 << endl;
    }
        else
        {
             cout << " First place: " << runner2 << endl;
             cout << " Second place: " << runner3 << endl;
             cout << " Third place: " << runner1 <<endl;
        }
    else
        if(time1 < time2)
        { 
            cout << " First place: " << runner3 <<endl;
            cout << " Second place: " << runner1 << endl;
            cout << "Third place: " << runner2 << endl;
        }
        else
        {
            cout << " First place: " << runner3 << endl;
            cout << "Second place:" << runner2 << endl;
            cout << "Third place: " << runner1 << endl;
        }
    //Exit stage right!
    return 0;
}