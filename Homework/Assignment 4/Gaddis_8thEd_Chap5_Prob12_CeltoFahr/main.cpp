/* 
  File:   main.cpp
  Author: Dr. Mark E. Lehr
  Created on January 19, 2017, 11:14 PM
  Purpose:  Celsius to Fahrenheit Table
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
    float conv, //Conversion
          cel=0;//Celsius
    //Loop for the problem
    cout<<"Celsius\tFahrenheit"<<endl;
    for (int cel=1;cel<=20;cel++) {
        cout<<fixed<<setprecision(2);
        conv=(5.0/9)*(cel-32);
        cout<<"   "<<cel<<" \t  "<<conv<<endl;
    }

    //Exit stage right!
    return 0;
}