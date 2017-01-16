/* 
  File:   main.cpp
  Author: Dr. Mark E. Lehr
  Created on January 15, 2017, 7:15 PM
  Purpose:  Bank Charges
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
    float blnce,      //Beginning balance
          chck,       //Number of checks written
          chgrck,     //Charge per check
          min=400;    //Minimum
    const int fee=15; //Extra fee
    
    //Input values
    cout<<"There is a payment of $10 per month for this acount."<<endl;
    cout<<"What is your balance?"<<endl;
    cin>>blnce;
    cout<<"Please enter the checks you have written."<<endl;
    cin>>chck;
    
    //Process by mapping inputs to outputs
    if (blnce<400) {
        blnce+=fee;
        cout<<"Your current balance is = $"<<blnce<<endl;
    }
    else if (blnce>=400) {
        cout<<"Your current balance is = $"<<blnce<<endl;
    }
    if (chck<20) {
        chgrck+=.10;
        cout<<"There is a charge of 10 cents for checks that are 20 or less."
                ""<<endl;
    }
    else if (chck>20&&chck<39) {
        chgrck+=.08;
        cout<<"There is a charge of 8 cents for 20 to 39 written checks."<<endl;
    }
    else if (chck>40&&chck<59) {
        chgrck+=.06;
        cout<<"There is a charge of 6 cents for 40 to 59 written checks."<<endl;
    }
    
    //Output values

    //Exit stage right!
    return 0;
}