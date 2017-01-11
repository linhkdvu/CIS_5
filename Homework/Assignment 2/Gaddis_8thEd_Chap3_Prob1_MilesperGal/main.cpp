/* 
  File:   main.cpp
  Author: Dr. Mark E. Lehr
  Created on January 11, 2017, 1:21 PM
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
    float cargal,//The number of gas the car can hold
          miles,//Number of miles it can be driven on a full tank
          MPG;//Car's gas mileage
    
    //Input values
    cout<<"This program calculates a car's gas mileage.\n"<<endl;
    cout<<"Please input the number of gallons of gas your car can hold:"<<endl;
    cin>>cargal;
    cout<<"The number of miles it can be driven on a full tank:"<<endl;
    cin>>miles;
    
    
    //Process by mapping inputs to outputs
    MPG=miles/cargal;
    
    //Output values
    cout<<"Your car's gas mileage = "<<MPG<<" mpg"<<endl;

    //Exit stage right!
    return 0;
}