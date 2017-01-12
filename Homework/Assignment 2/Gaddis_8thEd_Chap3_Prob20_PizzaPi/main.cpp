/* 
  File:   main.cpp
  Author: Dr. Mark E. Lehr
  Created on January 12, 2017, 1:32 PM
  Purpose:  Pizza Pi
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
    const char PI=3.14159,    //PI
               aSlice=14.125; //Area of a slice
    float dimeter,            //The diameter of the pizza
          r,                  //The radius
          nSlice;             //Number of slices
    
    //Input values
    cout<<"\nThis program can calculates the number of slices a pizza of any"
            "size can be divided into."<<endl;
    cout<<"Enter the diameter of the pizza (inches)."<<endl;
    cin>>dimeter;
    
    
    //Process by mapping inputs to outputs
    r=dimeter/2.0;
    nSlice=r/aSlice;
      
    //Output values
    cout<<"\nThe number of slices that may be taked from the pizza = "<<fixed
            <<setprecision(2)<<nSlice<<endl;

    //Exit stage right!
    return 0;
}