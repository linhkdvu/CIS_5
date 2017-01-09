/* 
  File:   main.cpp
  Author: Dr. Mark E. Lehr
  Created on January 6, 2017, 3:22 PM
  Purpose:  Available Credit
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
    float mCredit,//Maximum Credit
          uCredit,//Credit used by the customer 
          aCredit;//Available Credit 
    
    //Input values
    cout<<"Enter the customer's maximum credit."<<endl;
    cin>>mCredit;
    cout<<"Enter the amount of credit used by the customer."<<endl;
    cin>>uCredit;
    
    //Process by mapping inputs to outputs
    aCredit=mCredit-uCredit;
    
    //Output values
    cout<<"Customer available credit     "<<aCredit<<endl;    

    //Exit stage right!
    return 0;
}