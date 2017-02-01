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
#include <string>
using namespace std;

//User Libraries

//Global Constants
//Such as PI, Vc, -> Math/Science values
//as well as conversions from system of units to another

//Function Prototypes
int   gNAcdnt();                   //Number of accidents
void  fLowst(int,int,int,int,int); //The lowest number of accidents

//Executable code begins here!!!
int main(int argc, char** argv) {
    //Declare Variables
    int North, South, East, West, Central; //Five geographic regions
    
    //Input values
    cout<<"This Program Finds the Lowest Number of Automobile Accidents Last "
            "Year."<<endl;
    cout<<endl;
    cout<<"North Region"<<endl;
    North=gNAcdnt();
    cout<<"South Region"<<endl;
    South=gNAcdnt();
    cout<<"East Region"<<endl;
    East=gNAcdnt();
    cout<<"West Region"<<endl;
    West=gNAcdnt();
    cout<<"Central Region"<<endl;
    Central=gNAcdnt();
    
    //Output
    
    
    //Exit stage right!
    return 0;
}

int gNAcdnt() {
    int gNAcdnt;
    cout<<"Report Number of Accidents: ";
    cin>>gNAcdnt;
    cout<<endl;
    
    //Invalid Input
    while (gNAcdnt<0) {
        cout<<"Invalid Input!\n"<<endl;
        cout<<"Report Number of Accidents: ";
        cin>>gNAcdnt;
        cout<<endl;
    }
    return gNAcdnt;
}

void fLowst(int North,int South,int East,int West,int Central) {
    int fLowst;
    string North  ="North Region"  ,
           South  ="South Region"  ,
           East   ="East Region "  ,
           West   ="West Region "  ,
           Central="Central Region";
    
    //Lowest
    
}