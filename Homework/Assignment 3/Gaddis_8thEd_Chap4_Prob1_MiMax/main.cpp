/* 
  File:   main.cpp
  Author: Dr. Mark E. Lehr
  Created on January 14, 2017, 9:39 AM
  Purpose:  Minimum/Maximum
            Write a program that asks the user to enter two numbers. 
            The program should use the conditional operator to determine which 
            number is the smaller and which is the larger.
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
    float number1,
          number2;
    
    //Input values
    cout<<"Enter two numbers."<<endl;
    cin>>number1>>number2;
    
    //Process by mapping inputs to outputs
    if (number1>number2)
        cout<<number1<<" is the larger number."<<endl;
    else if (number2>number1)
        cout<<number2<<" is the larger number."<<endl;
    else
        cout<<"Both numbers are equal."<<endl;
    

    //Exit stage right!
    return 0;
}