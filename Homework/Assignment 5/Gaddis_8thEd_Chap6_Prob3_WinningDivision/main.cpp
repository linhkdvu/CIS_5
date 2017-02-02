/* 
  File:   main.cpp
  Author: Dr. Mark E. Lehr
  Created on January 31, 2017, 1:28 PM
  Purpose:  Winning Division
            Write a program that determines which of a company’s four divisions 
            (Northeast, Southeast, Northwest, and Southwest) had the greatest 
            sales for a quarter. It should include the following two functions, 
            which are called by main.
            • double getSales() is passed the name of a division. It asks the 
            user for a division’s quarterly sales figure, validates the input, 
            then returns it. It should be called once for each division.
            • void findHighest() is passed the four sales totals. It determines 
            which is the largest and prints the name of the high grossing 
            division, along with its sales figure.
            Input Validation: Do not accept dollar amounts less than $0.00.
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
float getSale(float &);
void  fHghest(float, float, float, float);

//Executable code begins here!!!
int main(int argc, char** argv) {
    //Declare Variables
    float  nEast=0, //Northeast
           sEast=0, //Southeast
           nWest=0, //Northwest
           sWest=0; //Southwest
    
    //Input values
    cout<<"This Program Calculates the Greatest Sales for a Quater."<<endl;
    cout<<"\nEnter Northeast sales: $";
    cin>>nEast;
    cout<<"Enter Southeast sales: $";
    cin>>sEast;
    cout<<"Enter Northwest sales: $";
    cin>>nWest;
    cout<<"Enter Southwest sales: $";
    cin>>sWest;
    
    //Output values
    fHghest(nEast,sEast,nWest,sWest);

    //Exit stage right!
    return 0;
}

float getSale (float & n) {
    do {
        if(!cin) {
            cin.clear();
            cin.ignore(100,'\n');
        }
        cin>>n;
        cout<<"Number entered: ";
    }
    while (!cin||n<=0);
    return n;
}

void fHghest(float nEast, float sEast, float nWest, float sWest) {
    const char *who="Northeast";
    float high=nEast;
    if (sEast>high) {
        who="Southeast";
        high=sEast;
    }
    if (nWest>high) {
        who="Northwest";
        high=nWest;
    }
    if (sWest>high) {
        who="Southwest";
        high=sWest;
    }
    cout<<endl;
    cout<<who<<" has the highest sale: $"<<high<<endl;
}