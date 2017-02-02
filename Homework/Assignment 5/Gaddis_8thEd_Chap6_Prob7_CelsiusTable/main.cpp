/* 
  File:   main.cpp
  Author: Linh Vu
  Created on February 1, 2017, 12:32 PM
  Purpose:  Celsius Temperature Table
            The formula for converting a temperature from Fahrenheit to Celsius is
            C=5/9(F-32)
            where F is the Fahrenheit temperature and C is the Celsius 
            temperature. Write a function named Celsius that accepts a Fahrenheit
            temperature as an argument. The function should return the 
            temperature, converted to Celsius. Demonstrate the function by 
            calling it in a loop that displays a table of the Fahrenheit 
            temperatures 0 through 20 and their Celsius equivalents.
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
float celsius(short);

//Executable code begins here!!!
int main(int argc, char** argv) {
    //Declare variable
    float cnvrs;//Conversion
    int   fahr; //Fahrenheit
    
    //Input values
    cout<<fixed<<setprecision(2)<<showpoint;
    cout<<"TEMPERATURE TABLE (F/C)"<<endl;
    cout<<"\nFahrenheit\tCelsius"<<endl;
    
    //Output values
    for (fahr=0;fahr<=20;fahr++) {
        cout<<"    "<<fahr<<"\t\t"<<celsius(fahr)<<endl;
    }

    //Exit stage right!
    return 0;
}

float celsius(short fahr) {
    float celsius;
    celsius=5*(static_cast<float>(fahr)-32)/9;
    return celsius;
}