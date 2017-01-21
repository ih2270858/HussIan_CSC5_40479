/* 
  File:   main.cpp
  Author: Ian Huss
  Created on January 16, 2017, 11:02am 
  Purpose: Serendipity booksellers has a book club that awards points to its 
 * customers based on he number of books bought. The points are awarded as 
 * follows:
 * If a customer purchases 0 books he or she earns 0 points.
 * If a customer purchases 1 books he or she earns 5 points.
 * If a customer purchases 2 books he or she earns 15 points.
 * If a customer purchases 3 books he or she earns 30 points.
 * If a customer purchases 4+ books he or she earns 60 points.
 * Write a program that asks the user to enter the number of books he or she has
 * purchased this month and display the number of points rewarded.
 */

//System Libraries
#include <iostream>
using namespace std;

//Executable code begins here!!!
int main(int argc, char** argv) 
{
    //Declare Variables
    int numberOfBooks;
    //Input values
    cout << " Enter how many books you have purchased here: " << endl;
    cin >> numberOfBooks;
    //Process by mapping inputs to outputs
    if(numberOfBooks == 0)
    { 
        cout << " You have 0 reward points! " << endl;
    }
        else if(numberOfBooks == 1)
        {
            cout << " You have 5 reward points! " << endl;
        }
        else if(numberOfBooks == 2)
        {
            cout << " You have 15 reward points! " <<endl;
        }
        else if (numberOfBooks == 3)
        {
            cout << "You have 30 reward points! " << endl;
        }
        else if(numberOfBooks >=4)
        {
            cout << " You have 60 reward points!" << endl;
        }
    //Output values

    //Exit stage right!
    return 0;
}