/* 
  File:   main.cpp
  Author: Ian Huss
  Created on January 15, 2017, 11:00AM 
  Purpose:Write a program that calculates and displays a persons BMI. A persons 
 * BMI is calculated with the formula BMI= (weigh * 703) / (height*height). The
 * program should display a message indicating whether the person has optimal 
 * weight, is underweight, or overweight. A sedentary persons weight is 
 * considered to be optimal if his or her BMI is between 18.5 and 25. If the BMI
 * is less than 18.5 they are considered underweight. If the BMI is larger than
 * 25, that person is overweight.
 */

//System Libraries
#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

//Executable code begins here!!!
int main(int argc, char** argv) 
{
    //Declare Variables
    double weight, height, BMI;
    //Input values
    cout << " Enter the persons weight in pounds here: " << endl;
    cin >> weight;
    cout << " Enter the persons height in inches here: " << endl;
    cin >> height;
    //Process by mapping inputs to outputs
    BMI = (weight * 703) / (height * height);
    cout << " Your body mass index is:" << BMI << endl;
              
    //Output values
    if(BMI<18.5)
        cout << " You are underweight" << endl;
    else if (BMI>25)
        cout << " You are overweight. " << endl;
    else if(BMI>18.5 && BMI<25)
        cout << " You are the optimal weight. " <<endl;
    //Exit stage right!
    return 0 ;
}