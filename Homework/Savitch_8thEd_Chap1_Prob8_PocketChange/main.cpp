/* 
  File:   main.cpp
  Author: Dr. Mark E. Lehr
  Created on January 5, 2017, 1:40 PM
  Purpose:  Change Pocket
 */

//System Libraries
#include <iostream>
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
    const char quarter=25,//Number of cents in coinage
               dime=10,
               nickle=5,
               penny=1;
    char nQuarts,nDimes,nNickls,nPennies;
    unsigned short total;//Total pocket change in cents
               
    
    //Input values
    cout<<"This calculates the amount of your pocket change"<<endl;
    cout<<"How many Quarters, Nickles, Dimes, and Pennies do"<<endl;
    cout<<"you have in your pocket?"<<endl;
    cout<<"Type in all the same line i.e. 3 4 0 2"<<endl;
    cout<<"Maximum of any value must be less than 10"<<endl;
    cin>>nQuarts>>nDimes>>nNickls>>nPennies;
   
    
    //Process by mapping inputs to outputs
    total = (nQuarts-48)*quarter+
            (nDimes-48)*dime    +
            (nNickls-48)*nickle +
            (nPennies-48)*penny;
    
    //Output values
    cout<<"The coins in your pocket = "<<total<<" cents"<<endl;
    cout<<"The coins in your pocket = $"<<total/100.0f<<endl;

    //Exit stage right!
    return 0;
}