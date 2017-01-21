/* 
  File:   main.cpp
  Author: Dr. Mark E. Lehr
  Created on January 3, 2017, 12:15 PM
  Purpose:  Template to be used in all programming
            projects!
 */

//System Libraries
#include <iostream>
using namespace std;

//Executable code begins here!!!
int main(int argc, char** argv) 
{
    //Declare Variables
    double itemOne , itemTwo, itemThree, itemFour, itemFive, subtotal, tax, total ;
    //Input values
   itemOne = 15.95,
   itemTwo = 24.95,
   itemThree = 6.95,
   itemFour = 12.95,
   itemFive = 3.95,
   subtotal = itemOne + itemTwo + itemThree + itemFour + itemFive;
   tax = (subtotal * .07);
   total = subtotal + tax;
   
    //Output values
   cout << " The price of item one is $" << itemOne << endl;
   cout << " The price of item two is $" << itemTwo << endl;
   cout << " The Price of item three is $" << itemThree << endl;
   cout << " The price of item four is $" << itemFour << endl;
   cout << " The price of item five is $" << itemFive << endl;
   cout << " The subtotal is $" << subtotal << endl;
   cout << " The tax total is $" << tax << endl;
   cout << " The Total is $" << total << endl;
    //Exit stage right!
    return 0;
}