/* 
  File:   main.cpp
  Author: Dr. Mark E. Lehr
  Created on January 11, 2017, 12:22 PM
  Purpose:  Paycheck (>40 hours double/time)
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
    float hrs,//The hours worked
          rate,//The rate per hour
          pCheck;//Paycheck
    
    //Input values
    cout<<"This program calculates your paycheck."<<endl;
    cout<<"Please know that if you've worked more than 40 hours your times will"
            "be double."<<endl;
    cout<<"Input your hours:"<<endl;
    cin>>hrs;
    cout<<"Input your rate:"<<endl;
    cin>>rate;
  
    
    //Process by mapping inputs to outputs
    if (hrs>40) {
    pCheck=40*rate+(hrs-40)*2*rate;
    cout<<fixed<<setprecision(2);
    }
    else {
    pCheck=hrs*rate;
    cout<<fixed<<setprecision(2);
    }
    
    //Output values
    cout<<"\nYour paycheck = $"<<pCheck<<endl;

    //Exit stage right!
    return 0;
}