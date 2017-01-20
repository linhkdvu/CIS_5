/* 
  File:   main.cpp
  Author: Dr. Mark E. Lehr
  Created on January 19, 2017, 12:15 PM
  Purpose:  Characters for the ASCII Codes
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
    //Loop on the Problem
    for (int nChar=0;nChar<=127;nChar++) {
        if (nChar%16==0) cout<<endl;
        cout<<static_cast<char>(nChar);
    }
    cout<<endl;

    //Exit stage right!
    return 0;
}