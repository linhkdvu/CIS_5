/* 
  File:   main.cpp
  Author: Linh Vu
  Created on February 2, 2017, 7:39 PM
  Purpose:  Rainfall Statistics
            Write a program that lets the user enter the total rainfall for each
            of 12 months into an array of double s. The program should calculate
            and display the total rainfall for the year, the average monthly 
            rainfall, and the months with the highest and lowest amounts.
            Input Validation: Do not accept negative numbers for monthly 
            rainfall figures.
 */

//System Libraries
#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

//User Libraries

//Global Constants
//Such as PI, Vc, -> Math/Science values
//as well as conversions from system of units to another

//Function Prototypes

//Executable code begins here!!!
int main(int argc, char** argv) {
    //Declare Variables
    const int SIZE=12; //12 months
    int lowTie=1;
    int highTie=1;
    float lowest=0.000f,highest=0.000f,AvgR=0.0000f,totRain=0.0000f;
    float rFall[SIZE]={}; //The array for 12 months
    string lowMon;
    string highMon;
    string name[SIZE]={"January","February","March",
                        "April","May","June",
                        "July","August","September",
                        "October","November","December"};
    
    
    
    //Input values
    cout<<endl;
    cout<<"Input the monthly rainfall amounts in inches: "<<endl;
    for (int a=0;a<12;a++) {
        do {
            cout<<name[a]<<" rainfall was: ";
            cin>>rFall[a];
            if (rFall[a]<0) cout<<"Negative rainfall not possible! Re-enter month!"<<endl;
        }
        while (rFall[a]<0);
    }
    
    //Process by mapping inputs to output
    lowest=rFall[0];
    highest=rFall[0];
    lowMon=name[0];
    highMon=name[0];
    
    for (int a=0;a<12;a++) {
        if (rFall[a]<lowest) {
            lowest=rFall[a];
            lowMon=name[a];
            lowTie=1;
        }
        else if (rFall[a]==lowest) {
            lowTie++;
        }
        if (rFall[a]>highest) {
            highest=rFall[a];
            highMon=name[a];
            highTie=1;
        }
        else if (rFall[a]==highest) {
            highTie++;
        }
    }
    for (int a=0;a<12;a++) {
        totRain+=rFall[a];
    }
    AvgR=totRain/12;
    
    //Output values
    cout<<endl;
    cout<<fixed<<setprecision(2);
    cout<<"Total Rainfall throughout the year is "<<totRain<<" inches."<<endl;
    cout<<"The Average monthly rainfall is "<<AvgR<<" inches."<<endl;
    cout<<"The month with the lowest amount of rainfall is "<<lowMon<<" with "
            <<lowest<<" inches."<<endl;
    if (lowTie>1)
        cout<<"   There were "<<lowTie<<" months with this value."<<endl;
    cout<<"The month with the highest amount of rainfall is "<<highMon<<" with "
            <<highest<<" inches."<<endl;
    if (highTie>1) 
        cout<<"   There were "<<highTie<<" months with this value."<<endl;
    
    //Exit stage right!
    return 0;
}