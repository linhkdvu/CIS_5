/* 
  File:   main.cpp
  Author: Linh Vu
  Created on February 1, 2017, 11:38 PM
  Purpose:  Future Value
 */

//System Libraries
#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

//User Libraries

//Global Constants
//Such as PI, Vc, -> Math/Science values
//as well as conversions from system of units to another

//Function Prototypes
float fValue(float,float,float); //Future value

//Executable code begins here!!!
int main(int argc, char** argv) {
    //Declare Variables
    float pValue, //Present value
          iRate,  //Interest rate
          tMonth; //Number of months
    
    //Input values
    cout<<"This Program Calculates the Account's Future Value."<<endl;
    cout<<"\nEnter the account's present value: $";
    cin>>pValue;
    cout<<"Enter the monthly interest rate: ";
    cin>>iRate;
    cout<<"Enter the number of months that the money will be left in the "
            "account: ";
    cin>>tMonth;
    
    //Output values
    cout<<fixed<<setprecision(2);
    cout<<"\nThe account's future value = $"<<fValue(pValue,iRate,tMonth)<<endl;

    //Exit stage right!
    return 0;
}

float fValue(float pValue,float iRate,float tMonth) {
    float sum; //Account's future value
    sum=pValue*pow(1+iRate/100, tMonth);
    return sum;
}