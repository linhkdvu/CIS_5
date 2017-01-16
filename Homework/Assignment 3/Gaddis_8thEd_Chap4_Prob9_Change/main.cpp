/* 
  File:   main.cpp
  Author: Dr. Mark E. Lehr
  Created on January 15, 2017, 10:15 PM
  Purpose:  Change for a Dollar Game
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
    float penny, //Pennies
          nckel,//Nickels
          dimes, //Dimes
          qurtrs, //Quarters
          total;
    //Input values
    cout<<"Enter the number of pennies."<<endl;
    cin>>penny;
    cout<<"Enter the number of nickels."<<endl;
    cin>>nckel;
    cout<<"Enter the number of dimes."<<endl;
    cin>>dimes;
    cout<<"Enter the number of quarters."<<endl;
    cin>>qurtrs;
    
    //Process by mapping inputs to outputs
    total=(penny*0.01)+(nckel*0.05)+(dimes*0.10)+(qurtrs*0.25);
    if (total==1.00) {
        cout<<"\nCongratulations! You Win! You entered exactly $1."<<endl;
    }
    else if (total<1.00 && total>0) {
        cout<<"\nYou entered less than $1. Good luck next time!"<<endl;
    }        
    else if (total>1.00) {
        cout<<"\nYou entered more than $1. Please try again later."<<endl;
    }
    else 
        cout<<"\nThe number of coins have to be greater than 0. Try again."<<endl;

    //Exit stage right!
    return 0;
}