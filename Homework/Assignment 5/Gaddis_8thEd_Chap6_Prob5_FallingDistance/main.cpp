/* 
  File:   main.cpp
  Author: Linh Vu
  Created on February 1, 2017, 11:00 PM
  Purpose:  Falling Distance
            When an object is falling because of gravity, the following formula 
            can be used to determine the distance the object falls in a specific
            time period:
            d=1/2gt^2
            The variables in the formula are as follows: d is the distance in 
            meters, g is 9.8, and t is the amount of time, in seconds, that the 
            object has been falling.
            Write a function named fallingDistance that accepts an object’s 
            falling time (in seconds) as an argument. The function should return
            the distance, in meters, that the object has fallen during that time
            interval. Write a program that demonstrates the function by calling 
            it in a loop that passes the values 1 through 10 as arguments and
            displays the return value.
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