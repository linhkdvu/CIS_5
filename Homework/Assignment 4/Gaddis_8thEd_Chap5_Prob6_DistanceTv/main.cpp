/* 
  File:   main.cpp
  Author: Dr. Mark E. Lehr
  Created on January 19, 2017, 12:15 PM
  Purpose:  Distance Traveled
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
    int speed, //The speed of your vehicle
        distnc,//Distance per mile
        hrsD;  //The hours you have driven
    
    //Input values
    cout<<"Please enter the speed of your vehicle in mph: "<<endl;
    cin>>speed;
    cout<<"Please enter the hours you have driven: "<<endl;
    cin>>hrsD;
    
    //Loop for the problem
    if (hrsD>=1&&speed>0) {
        cout<<"Hour\t Distance Traveled"<<endl;
    for (int hrs=1;hrs<=hrsD;hrs++) {
        distnc=speed*hrs;
        cout<<hrs<<"\t\t"<<distnc<<endl;    
        }
    }
    else {
        cout<<"!Invalid Input!"<<endl;
    }
    
    //Output values

    //Exit stage right!
    return 0;
}