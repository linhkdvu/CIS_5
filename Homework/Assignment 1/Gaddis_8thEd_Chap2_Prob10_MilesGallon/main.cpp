/* 
  File:   main.cpp
  Author: Dr. Mark E. Lehr
  Created on January 7, 2017, 2:22 PM
  Purpose:  Miles per Gallon
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
int main(int argc, char** argv) {
    //Declare Variables
    float mDriven = 350,//Miles driven 
          galGas = 15,  //Gallons of Gas a car can hold.
          uGas,//Gallons of Gas Used.
          MPG;//Miles per Gallon
    
    //Input values
    cout<<"This is a program that calculates the number"<<endl;
    cout<<"of miles per gallon the car gets."<<endl;
    cout<<"Please enter the number of gallons of gas used: "<<endl;
    cin>>uGas;
    cout<<"Enter the number of miles driven: "<<endl;
    cin>>mDriven;
    
    //Process by mapping inputs to outputs
    MPG=mDriven/uGas;
    
    //Output values
    cout<<"Number of miles per gallon the car gets = "<<MPG<<endl;

    //Exit stage right!
    return 0;
}