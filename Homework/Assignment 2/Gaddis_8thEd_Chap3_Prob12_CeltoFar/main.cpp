/* 
  File:   main.cpp
  Author: Dr. Mark E. Lehr
  Created on January 9, 2017, 1:40 PM
  Purpose:  Celsius to Fahrenheit
            Write a program that converts Celsius temperatures to Fahrenheit 
            temperatures. The formula is 
            F=(9/5)*C+32
            F is the Fahrenheit temperature, and C is the Celsius temperature.
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
    float C,//Degree in Celsius.
          F;//Degree in Fahrenheit.
    
    
    //Input values
    cout<<"This is a program that converts Celsius temperatures to Fahrenheit temperatures.\n"<<endl;
    cout<<"Please enter the degree of Celsius that you want to convert."<<endl;
    cin>>C;
    
    
    //Process by mapping inputs to outputs
    F=C*9/5+32;
    
    //Output values
    cout<<"\nDegree in Fahrenheit = "<<F<<"F"<<endl;

    //Exit stage right!
    return 0;
}