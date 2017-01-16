/* 
  File:   main.cpp
  Author: Dr. Mark E. Lehr
  Created on January 15, 2017, 9:35 AM
  Purpose:  Body Mass Index
 */

//System Libraries
#include <iostream>
#include <cmath>
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
    int weight;
    float height, BMI;
    
    //Input values
    cout<<"Please enter your weight (in pounds)."<<endl;
    cin>>weight;
    cout<<"Please enter your height (in inches)."<<endl;
    cin>>height;
    
    //Process by mapping inputs to outputs
    BMI = (weight * 703)/(height*height);
    cout<<"\nYour body mass Index is: "<<BMI;
    if (BMI>25) {
        cout<<"\n\nYou are somewhat overweight."<<endl;
    }
    else if (BMI<18.5) {
        cout<<"\n\nYou are somewhat underweight."<<endl;
    }
    else if (BMI>18.5&&BMI<25) {
        cout<<"\n\nCongratulations! You are within a healthy weight range."
                ""<<endl;
    }
    
    //Output values
    

    //Exit stage right!
    return 0;
}