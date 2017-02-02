
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
            Input Validation: Do not accept an accident number that is less than
            0.
 */

//System Libraries
#include <iostream>
#include <string>
#include <iomanip>
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
    cout<<"North Region: "<<setw(7)<<North<<endl;
    cout<<"South Region: "<<setw(7)<<South<<endl;
    cout<<"West Region: "<<setw(8)<<West<<endl;
    cout<<"East Region: "<<setw(8)<<East<<endl;
    cout<<"Central Region: "<<setw(5)<<Central<<endl;
    cout<<endl;
    
    fLowst(North, South, West, East, Central);
    
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

void fLowst(int a,int b,int c,int d,int e) {
    int fLowst;
    string North  ="North Region"  ,
           South  ="South Region"  ,
           East   ="East Region "  ,
           West   ="West Region "  ,
           Central="Central Region";
    
    //Lowest
    fLowst=a;
    
    fLowst=(b<fLowst)?b:fLowst;
    fLowst=(c<fLowst)?c:fLowst;
    fLowst=(d<fLowst)?d:fLowst;
    fLowst=(e<fLowst)?e:fLowst;
    
    //Output
    cout<<"The safest driving area is ";
    if (fLowst==a)cout<<North;
    if (fLowst==b)cout<<South;
    if (fLowst==c)cout<<West;
    if (fLowst==d)cout<<East;
    if (fLowst==e)cout<<Central;
    
    cout<<" with only "<<fLowst<<" number of reported accidents!"<<endl;
}