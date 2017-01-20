/* 
  File:   main.cpp
  Author: Dr. Mark E. Lehr
  Created on January 19, 2017, 9:15 PM
  Purpose:  Calories Burned
            Running on a particular treadmill you burn 3.6 calories per minute. 
            Write a program that uses a loop to display the number of calories 
            burned after 5, 10, 15, 20, 25, and 30 minutes.
 */

//System Libraries
#include <iostream>
using namespace std;

//User Libraries

//Global Constants
//Such as PI, Vc, -> Math/Science values
//as well as conversions from system of units to another

//Function Prototypes

//Executable code begins here!!!
int main(int argc, char** argv) {
    //Declare Variables
    int min=0;//Minutes calories burned
    
    //Loop for the problem
    for (int min=5;min<=30;min+=5) {
        cout<<min*3.9<<" calories burnt after: "<<min<<" minutes"<<endl;
    }

    //Exit stage right!
    return 0;
}