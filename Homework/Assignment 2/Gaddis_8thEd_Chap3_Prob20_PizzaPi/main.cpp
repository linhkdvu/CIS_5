/* 
  File:   main.cpp
  Author: Dr. Mark E. Lehr
  Created on January 12, 2017, 1:32 PM
  Purpose:  Pizza Pi
            Joe’s Pizza Palace needs a program to calculate the number of slices
            a pizza of any size can be divided into. The program should perform 
            the following steps:
            A) Ask the user for the diameter of the pizza in inches.
            B) Calculate the number of slices that may be taken from a pizza of that size.
            C) Display a message telling the number of slices.
            To calculate the number of slices that may be taken from the pizza, you must know
            the following facts:
            • Each slice should have an area of 14.125 inches.
            • To calculate the number of slices, simply divide the area of the pizza by 14.125.
            • The area of the pizza is calculated with this formula:
            Area = πr^2
 
 */

//System Libraries
#include <iostream>
#include <iomanip>
using namespace std;

//User Libraries

//Global Constants
//Such as PI, Vc, -> Math/Science values
//as well as conversions from system of units to 
//another

//Function Prototypes

//Executable code begins here!!!
int main(int argc, char** argv) {
    //Declare Variables
    const char PI=3.14159,    //PI
               aSlice=14.125; //Area of a slice
    float dimeter,            //The diameter of the pizza
          r,                  //The radius
          nSlice;             //Number of slices
    
    //Input values
    cout<<"\nThis program can calculates the number of slices a pizza of any"
            "size can be divided into."<<endl;
    cout<<"Enter the diameter of the pizza (inches)."<<endl;
    cin>>dimeter;
    
    
    //Process by mapping inputs to outputs
    r=dimeter/2.0;
    nSlice=r/aSlice;
      
    //Output values
    cout<<"\nThe number of slices that may be taked from the pizza = "<<fixed
            <<setprecision(2)<<nSlice<<endl;

    //Exit stage right!
    return 0;
}