/* 
  File:   main.cpp
  Author: Dr. Mark E. Lehr
  Created on January 14, 2017, 10:15 AM
  Purpose:  Roman Numeral Converter
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
    int number;
    
    //Input values
    cout<<"Enter a number from 1 to 10."<<endl;
    cin>>number;
    
    //Process by mapping inputs to outputs
    switch (number) {
        case 1: cout<<"The Roman numeral version of "<<number<<" is I"<<endl;
                break;
        case 2: cout<<"The Roman numeral version of "<<number<<" is II"<<endl;
                break;
        case 3: cout<<"The Roman numeral version of "<<number<<" is III"<<endl;
                break;
        case 4: cout<<"The Roman numeral version of "<<number<<" is IV"<<endl;
                break;
        case 5: cout<<"The Roman numeral version of "<<number<<" is V"<<endl;
                break;
        case 6: cout<<"The Roman numeral version of "<<number<<" is VI"<<endl;
                break;
        case 7: cout<<"The Roman numeral version of "<<number<<" is VII"<<endl;
                break;
        case 8: cout<<"The Roman numeral version of "<<number<<" is VIII"<<endl;
                break;
        case 9: cout<<"The Roman numeral version of "<<number<<" is IX"<<endl;
                break;
        case 10: cout<<"The Roman numeral version of "<<number<<" is X"<<endl;
                break; 
        default: cout<<"Enter a number in the range 1 through 10.";break;
    }

    //Exit stage right!
    return 0;
}