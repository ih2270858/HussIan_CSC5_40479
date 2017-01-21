/* 
  File:   main.cpp
  Author: Ian Huss
  Created on January 14, 2017, 6:13 PM
  Purpose: Write a program that asks for the length and width of two rectangles.
 * The program should tell the user which rectangle has the greater area, or if
 * the areas are the same. 
 */

//System Libraries
#include <iostream>
using namespace std;

//Executable code begins here!!!
int main(int argc, char** argv) 
{
    //Declare Variables
    int length1, width1, length2, width2, area1, area2;
    int rectangle_one, rectangle_two;
    //Input values
    cout << " Enter the length of rectangle one here: " << endl;
    cin >> length1;
    cout << " Enter the width of rectangle one here: " << endl;
    cin >> width1;
    cout << " Enter the length of rectangle two here: " << endl;
    cin >> length2;
    cout << " Enter the width of rectangle two here: " << endl;
    cin >> width2;
    
    area1 = (length1*width1);
    area2 = (length2*width2);
    
    //Process by mapping inputs to outputs
    if(area1 > area2)
    {
        cout <<  " The larger rectangle is: " << " rectangle_one" << endl;
    }
    if(area2 > area1)
    {
        cout << " The larger rectangle is: " << "rectangle_two" << endl;
    }
    if (area1 == area2)
    {
        cout << " Both rectangles have the same area! " << endl;
    }
    //Exit stage right!
    return 0;
}