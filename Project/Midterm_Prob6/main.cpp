/* 
  File:   main.cpp
  Author: Dr. Mark E. Lehr
  Created on January 25, 2017, 12:15 PM
  Purpose:  Just another sequence, 
            sum = x - x^3/3! + x^5/5! - x^7/7! + ............
            Input x and the number of terms=n, output the result.
            Note:  x^1 = x,   x^2 = x*x,  x^3 = x*x*x
            3! = 1*2*3  5!=1*2*3*4*5

Flowchart and code this solution.
 */

//System Libraries
#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

//User Libraries

//Global Constants
//Such as PI, Vc, -> Math/Science values
//as well as conversions from system of units to another

//Function Prototypes

//Executable code begins here!!!
int main(int argc, char** argv) {
    //Declare Variables
    float sum=0, //The sum of the sequence
          fact;
    int   xInput,//The value of x
          nTerms;//Number of terms
    
    //Input values
    cout<<"This program calculates the sum of a sequence: "<<endl;
    cout<<"Sum = x - x^3/3! + x^5/5! - x^7/7! + ..."<<endl;
    cout<<"\nPlease input a number of x: "<<endl;
    cin>>xInput;
    cout<<"Please input the number of terms(n): "<<endl;
    cin>>nTerms;
    
    //Loop the Series
    for (int x=1;x<=nTerms;x+=2) {
        p=1;
        fact=1;
        for ()
    }
            
    //Process by mapping inputs to outputs
    
    
    //Output values

    //Exit stage right!
    return 0;
}