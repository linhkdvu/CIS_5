/* 
  File:   main.cpp
  Author: Dr. Mark E. Lehr
  Created on January 19, 2017, 9:53 PM
  Purpose:  Membership Fees Increase
 */

//System Libraries
#include <iostream>
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
    float fee=2500;//Membership per year
    const float inc=0.04;//Increase Percentage
    
    //Loop on the problem
    for (int yrs=1;yrs<=6;yrs++) {
        fee+=fee*inc;
        cout<<fixed<<setprecision(2)<<showpoint;
        cout<<"Year "<<yrs<<" fees are: $"<<fee<<endl;
    }

    //Exit stage right!
    return 0;
}