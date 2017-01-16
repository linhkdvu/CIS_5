/* 
  File:   main.cpp
  Author: Dr. Mark E. Lehr
  Created on January 14, 2017, 3:19 PM
  Purpose:  Mass and Weight
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
    float mass, //Object's mass
          weight;
    
    //Input values
    cout<<"Enter an object's mass in kilograms."<<endl;
    cin>>mass;
    
    //Process by mapping inputs to outputs
    weight = mass * 9.8;
    if (weight >=1000) {
        cout<<"The object is too heavy."<<endl;
    }
    else if (weight<=10) {
        cout<<"The object is too light."<<endl;
    }
    else
        cout<<"The corresponding weight in newton is: "<<weight<<" newtons."
                <<endl;
    
    //Output values

    //Exit stage right!
    return 0;
}