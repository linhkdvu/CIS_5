/* 
  File:   main.cpp
  Author: Linh Vu
  Created on February 1, 2017, 11:00 PM
  Purpose:  Falling Distance
 */

//System Libraries
#include <iostream>
using namespace std;

//User Libraries

//Global Constants
//Such as PI, Vc, -> Math/Science values
//as well as conversions from system of units to another

//Function Prototypes
float fDstnce(float); //Falling distance

//Executable code begins here!!!
int main(int argc, char** argv) {
    //Output values
    static float time;
    cout<<"  Different falling times and distances.\n";
    cout<<"     -----------------------------\n";
    cout<<"\tTime\t\tDistance\n";
    cout<<"     -----------------------------\n";
    
    //Loop
    for (time=1;time<=10;time++) {
        cout<<"\t  "<<time<<"\t\t"<<fDstnce(time)<<endl;
    }

    //Exit stage right!
    return 0;
}

float fDstnce(float time) {
    float fDstnce;
    fDstnce=0.5*9.8*time*time;
    return fDstnce;
}