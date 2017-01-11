/* 
  File:   main.cpp
  Author: Dr. Mark E. Lehr
  Created on January 10, 2017, 9:58 PM
  Purpose:  Currency
            Write a program that will convert U.S. dollar amounts to Japanese yen and to euros,
            storing the conversion factors in the constants YEN_PER_DOLLAR and EUROS_PER_
            DOLLAR . To get the most up-to-date exchange rates, search the Internet using the
            term “currency exchange rate”. If you cannot find the most recent exchange rates, use
            the following:
            1 Dollar = 98.93 Yen
            1 Dollar = 0.74 Euros
            Format your currency amounts in fixed-point notation, with two decimal places of
            precision, and be sure the decimal point is always displayed.
 */

//System Libraries
#include <iostream>
#include <cstdlib>
#include <iomaniP>
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
    float USD,//US Dollar
          YEN_PER_DOLLAR = 98.93,//Japanese Yen
          EUROS_PER_DOLLAR = 0.74;//Euro 
    
    //Input values
    cout<<"This program converts U.S. dollar amounts to Japanese yen and euros."<<endl;
    cout<<"Know that:"<<endl;
    cout<<"1 Dollar = 98.93 Yen"<<endl;
    cout<<"1 Dollar = 0.74 Euros"<<endl;
    cout<<"\nPlease enter the number of money that you want to convert:"<<endl;
    cin>>USD;
    
    //Process by mapping inputs to outputs
    YEN_PER_DOLLAR = 98.98*USD;
    EUROS_PER_DOLLAR = 0.74*USD;     
    
    //Output values
    cout<<"\n-----------"<<endl;
    cout<<USD<<" Dollars = "<<YEN_PER_DOLLAR<<" Yen"<<endl;
    cout<<USD<<" Dollars = "<<EUROS_PER_DOLLAR<<" Euros"<<endl;

    //Exit stage right!
    return 0;
}