/* 
  File:   main.cpp
  Author: Linh Vu
  Created on February 1, 2017, 10:13 AM
  Purpose:  Write a program that determines which of five geographic regions 
            within a major city (north, south, east, west, and central) had the 
            fewest reported automobile accidents last year. It should have the 
            following two functions, which are called by main .
            • int getNumAccidents() is passed the name of a region. It asks the 
            user for the number of automobile accidents reported in that region 
            during the last year, validates the input, then returns it. It 
            should be called once for each city region.
            • void findLowest() is passed the five accident totals. It 
            determines which is the smallest and prints the name of the region, 
            along with its accident figure.
            Input Validation: Do not accept an accident number that is less than 0.
 */

//System Libraries
#include <iostream>
#include <cstdlib>
using namespace std;

//User Libraries

//Global Constants
//Such as PI, Vc, -> Math/Science values
//as well as conversions from system of units to another

//Function Prototypes
int gNAcdnt(int,int,int,int,int);//Number of accidents
void fLowst();//The lowest number of accidents

//Executable code begins here!!!
int main(int argc, char** argv) {
    //Declare Variables
    float North, South, East, West, Central; //Give geographic regions
    
    //Input values
    cout<<"This Program Determines which Region in Your City had the Least Number of Accidents."<<endl;
    cout<<"Please enter the number of accidents each region had: "<<endl;
    cout<<"\nHow many accidents did the North had: ";
    cin>>North;
    cout<,"How many accidents did the South had: ";
    cin>>South;
    cout<<"How many accidents did the East had: ";
    cin>>East;
    cout<<"How many accidents did the West had: ";
    cin>>West;
    cout<<"How many accidents did the Central had: ";
    cin>>Central;
    
    //Output values
    

    //Exit stage right!
    return 0;
}

int gNAcdnt(int North,int South,int East,int West,int Central) {
    while (North>0&&South>0&&East>0&&West>0&&Central>0) {
        
    }
    
}