/* 
  File:   main.cpp
  Author: Dr. Mark E. Lehr
  Created on January 19, 2017, 12:15 PM
  Purpose:  Sum of Numbers
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
    int sum=0,//Sum of all integers from 1 up to the number entered.
    input;//Input a positive integer value
                
    //Input Values
    cout<<"Enter any positive integer number."<<endl;
    cin>>input;
                
    //Loop on the problem
    if (input>=1) {
        for (int num=1;num<=input;num++) {
        sum+=num;
        }
    }
    else {
        cout<<input<<" is negative number.";
        cout<<"The program will not terminate.1";
    }
    
    //Output Values
    if (input>=1) cout<<"The sum of numbers 1 - "<<input<<" "<<"is "<<sum<<endl;

    //Exit stage right!
    return 0;
}