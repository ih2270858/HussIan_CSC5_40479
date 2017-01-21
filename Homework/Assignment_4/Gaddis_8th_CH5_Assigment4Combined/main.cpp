/* 
  File:   main.cpp
  Author: Ian Huss
  Created on January 20, 2017, 2:00 am
  Purpose:  Template to be used in all programming
            projects!
 */

//System Libraries
#include <iostream>//Input Output Library
#include <cstdlib> //Random number generator seed
#include <ctime>   //Time Library
#include <iomanip> //Format Library
using namespace std;

int main(int argc, char** argv){
    //Declare Variables
    char choice;
    //Loop on the menu
    do
    {
        //Input values
        cout<<"Choose from the list"<<endl;
        cout<<"Type 1 for Problem 1: "<<endl;
        cout<<"Type 3 for Problem 4:" <<endl;
        cout<<"Type 4 for Problem 5:" <<endl;
        cout<<"Type 5 for Problem 6:" <<endl;
        cout<<"Type 6 for Problem 7:" <<endl;
        cout<<"Type 7 for Problem 11:" <<endl;
        cin>>choice;
        
        //Switch to determine the Problem (Problem 1)
        switch(choice){
            case '1':{
                 //Set the random number seed
                 srand(static_cast<unsigned int>(time(0)));
                 
                 //Declare and Initialize local Variables to main
                 int number = 0;
                 int sum = 0;
                 
                 //Input values
                 cout << "Enter the number to be compiled here: " << endl;
                 cin >> number;
                 
                 //Process by mapping inputs to outputs
                 while(number < 0)
                 {
                     cout << " Invalid input please enter only positive numbers "
                             "here:\n" ;
                     cin >> number;
                 }
                 for(int i = 1; i <= number; i++)
                 {
                     sum += i;
                 }
                 cout << " Total sum is: " << sum << endl;
                 break;
            }
            case '2':{
                 //Set the random number seed (Problem3)
                 srand(static_cast<unsigned int>(time(0)));
                 
                 //Declare and Initialize local Variables to main
                 float level = 0;
                 int years= 25;
                 
                 //Input values
                 for (int i = 1; i <= years; i++)
                 {
                     level += 1.5;
                     cout << " In  Year: " << i << " the ocean has risen: " 
                             << level << endl;
                     cout << "milimeters. " << endl;
                 }
                 break;
            }
            case '3':{
                 //Set the random number seed(Problem4)
                 srand(static_cast<unsigned int>(time(0)));
                 
                 //Declare and Initialize local Variables to main
                 float calories_Burned;
                 float caloriesBurnedPerMinute = 3.6;
                 
                 //Input values
                 cout << " This program displays the number of\n" ; 
                 cout << " calories burned\n" ;
                 cout << "in five minute intervals starting at 10 " << endl;
                 
                 //Process by mapping inputs to outputs
                 for(int i=10; i <= 30; i+=5)
                 {
                     calories_Burned = (i *caloriesBurnedPerMinute);
                     cout << " In " << i << " minutes, you have burned " << calories_Burned
                              <<endl;
                     cout << "calories!" << endl;
                 }
                 break;
            }
            case '4':{
                 //Set the random number seed(Problem5)
                 srand(static_cast<unsigned int>(time(0)));
                 
                  //Declare and Initialize local Variables to main
                 float increase = .04;
                 float years = 6;
                 float membership = 2500;
                 
                 //Input values
                 for (int i =1 ; i <= years; i++)
                 {
                     membership = membership + (membership*increase);
                     cout << "Year " << i << " Fees are: $" << membership << endl;
                 }
                 break;
            }
            case '5':{
                 //Set the random number seed(Problem6)
                 srand(static_cast<unsigned int>(time(0)));
                 
                 //Declare and Initialize local Variables to main
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
                 break;
            }
            case '6':{
                 //Set the random number seed(problem7)
                 srand(static_cast<unsigned int>(time(0)));
                 
                 //Declare and Initialize local Variables to 
                 int number_Days =1;
                 double money = 1.0;
                 int total = 0;
                 
                 //Input values
                 cout << " Enter the number of days worked here:\n " ;
                 cin >> number_Days;
                 
                 //Process by mapping inputs to outputs
                 while(number_Days < 1)
                 {
                     cout << " The number of days must be positive. Please resubmit here\n" ;
                     cin >> number_Days;
                 }
                 //Process by mapping inputs to outputs
                 for(int i = 1; i <= number_Days; i++)
                 {
                     cout << " Day " << i << " earned " << money / 100 << " dollars\n" ;
                     money *=2;
                 }
                 break;
            }
            case '7':
            {
                 //Set the random number seed(Problem11)
                 srand(static_cast<unsigned int>(time(0)));
                 
                 //Declare and Initialize local Variables to main
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
                 break;
  }
            default:
                cout<<"You are exiting the program"<<endl;
        }
    }while(choice>='1' && choice<='7');
    
    //Exit stage right!
    return 0;
}