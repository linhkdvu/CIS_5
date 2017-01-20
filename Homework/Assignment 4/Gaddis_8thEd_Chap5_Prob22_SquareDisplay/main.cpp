/* 
  File:   main.cpp
  Author: Dr. Mark E. Lehr
  Created on January 19, 2017, 5:15 PM
  Purpose:  Square Display
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
    string show = "X";
    short inLine;     //User input how many lines to use
    
    //Input values
    cout<<"Please input how many lines you want to use (only from 1 to 15)"<<endl;
    cin>>inLine;
    
    //Loop on the problem
    if (inLine>=1&&inLine<=15) {
        for (int line=1;line<=(inLine*inLine);line++) {
            cout<<show;
            if (line%inLine==0)
                cout<<endl;
        }
    }
    else 
        cout<<"!Invalid Input!"<<endl;

    //Exit stage right!
    return 0;
}