/* 
  File:   main.cpp
  Author: Dr. Mark E. Lehr
  Created on January 19, 2017, 12:15 PM
  Purpose:  Ocean Levels
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
    float lvl=0;//Lever ocean per year
                
    //Loop on the problem
    for (unsigned short yrs=1;yrs<=25;yrs++) {
        lvl+=1.5;
        cout<<"Year "<<yrs<<": "<<lvl<<" millimeters."<<endl;
    }

    //Exit stage right!
    return 0;
}