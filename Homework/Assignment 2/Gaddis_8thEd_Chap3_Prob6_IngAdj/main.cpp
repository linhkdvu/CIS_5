/* 
  File:   main.cpp
  Author: Dr. Mark E. Lehr
  Created on January 9, 2017, 12:23 PM
  Purpose:  Ingredient Adjuster
            A cookie recipe calls for the following ingredients:
            1.5 cups of sugar
            1 cup of butter
            2.75 cups of flour
            The recipe produces 48 cookies with this amount of ingredients. Write a program
            that asks the user how many cookies he or she wants to make, and then displays
            the number of cups of each ingredient needed for the specified number of cookies.
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
    float cofSgr, //Number cups of sugar.
          cofBttr,//Number cups of butter.
          cofFlr, //Number cups of flour.
          nCkies; //Number of cookies.
    
    
    //Input values
    cout<<"This program calculates the amount of sugar     "<<endl;
    cout<<"butter, and flour that are necessary to make    "<<endl;
    cout<<"a desired number of cookies that you want.\n    "<<endl;
    cout<<"Please insert how many cookies you want to make."<<endl;
    cin>>nCkies;
    
    //Process by mapping inputs to outputs
    cofSgr  =(nCkies/48)*1.5;
    cofBttr =(nCkies/48)*1;
    cofFlr  =(nCkies/48)*2.75;
    
    //Output values
    cout<<"\nThe amount of sugar necessary  = "<<cofSgr<<" cups"<<endl;
    cout<<"The amount of butter necessary = "<<cofBttr<<" cups"<<endl;
    cout<<"The amount of flour necessary  = "<<cofFlr<<" cups"<<endl;

    //Exit stage right!
    return 0;
}