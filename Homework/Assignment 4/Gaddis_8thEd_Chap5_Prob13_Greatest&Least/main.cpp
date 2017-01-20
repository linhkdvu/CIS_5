/* 
  File:   main.cpp
  Author: Dr. Mark E. Lehr
  Created on January 19, 2017, 12:15 PM
  Purpose:  The Greatest and Least of These
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
    int lrgest,//Largest value
        smlest,//Smallest value
        temp=0,
        value=0;//Store user input
            
    //Input values
    
    
    //Loop on the Problem
    while(value!=-99) {
        cout<<"Please enter a number (hit -99 to stop) "<<endl;
        cin>>value;
        if(temp>value) {
            lrgest=temp;
        }
        if(temp<value) {
            smlest=temp;
        }
        temp=value;
    }
    //Output
    cout<<"The largest value entered is: "<<lrgest<<endl;
    cout<<"The smallest value entered is: "<<smlest<<endl;
    //Exit stage right!
    return 0;
}