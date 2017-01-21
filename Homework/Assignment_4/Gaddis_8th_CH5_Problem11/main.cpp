/* 
  File:   main.cpp
  Author: Ian Huss
  Created on January 3, 2017, 12:15 PM
  Purpose:  Template to be used in all programming
            projects!
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
    float populationStart = 0.0f;
    int daysOrganismsMultiplied =0;
    float averageDailyIncrease = 0.0f;
    float dailyPopulation = 0.0f;
    
    //Input values
    cout << " Enter the starting number of organisms here: " << endl;
    cin >> populationStart;
    
    while (populationStart < 2)
    {
        cout << "Please enter the start population larger than 2!" <<endl;
        cin >> populationStart;
    }
    cout << "Enter the average daily population increase as a % " << endl;
    cin >> averageDailyIncrease;
    
    while (averageDailyIncrease < 0)
    {
        cout << "Enter the average daily increase as a positive number.\n" ;
        cin >> averageDailyIncrease;
    }
    cout << "Enter the number of days the organisms multiplied here:\n" ;
    cin >> daysOrganismsMultiplied;
    
    while(daysOrganismsMultiplied < 1)
    {
        cout << "Enter a number more than one for days organisms multiplied.\n";
        cin >> daysOrganismsMultiplied;
    }
    //Process by mapping inputs to outputs
    for(int i = 1; i <= daysOrganismsMultiplied; i++)
    {
        dailyPopulation = ((averageDailyIncrease/100)*populationStart)+populationStart;
        cout << " Population for day " << i << " is  " << dailyPopulation << endl;
        
        populationStart = dailyPopulation;
    }
    //Output values
    //Exit stage right!
    return 0;
}