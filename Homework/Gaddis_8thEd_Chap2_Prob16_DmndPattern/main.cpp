/* 
  File:   main.cpp
  Author: Dr. Mark E. Lehr
  Created on January 5, 2017, 10:15 PM
  Purpose:  Diamond Pattern
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
    char d;//Variable to build the diamond with
    
    //Input values
    cout<<"This program outputs a diamond shape"<<endl;
    cout<<"With a letter or a sign the user chooses"<<endl;
    cout<<"What letter or sign would you like?"<<endl;
    cin>>d;
    
    //Process by mapping inputs to outputs
    
    //Output values
    cout<<"   "<<d<<endl;
    cout<<"  "<<d<<""<<d<<""<<d<<endl;
    cout<<" "<<d<<""<<d<<""<<d<<""<<d<<""<<d<<endl;
    cout<<""<<d<<""<<d<<""<<d<<""<<d<<""<<d<<""<<d<<""<<d<<endl;
    cout<<" "<<d<<""<<d<<""<<d<<""<<d<<""<<d<<endl;
    cout<<"  "<<d<<""<<d<<""<<d<<endl;
    cout<<"   "<<d<<endl;

    //Exit stage right!
    return 0;
}