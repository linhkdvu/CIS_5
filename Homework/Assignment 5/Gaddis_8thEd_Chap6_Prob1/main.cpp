/* 
  File:   main.cpp
  Author: Dr. Mark E. Lehr
  Created on January 31, 2017, 12:49 PM
  Purpose:  Markup
            Write a program that asks the user to enter an item’s wholesale 
            cost and its markup percentage. It should then display the item’s 
            retail price. For example:
            • If an item’s wholesale cost is 5.00 and its markup percentage is 
            100%, then the item’s retail price is 10.00.
            • If an item’s wholesale cost is 5.00 and its markup percentage is 
            50%, then the item’s retail price is 7.50.
            The program should have a function named calculateRetail that 
            receives the wholesale cost and the markup percentage as arguments 
            and returns the retail price of the item.
            Input Validation: Do not accept negative values for either the 
            wholesale cost of the item or the markup percentage.
 */

//System Libraries
#include <iostream>
#include <iomanip>
using namespace std;

//User Libraries

//Global Constants
//Such as PI, Vc, -> Math/Science values
//as well as conversions from system of units to another

//Function Prototypes
float cRetail (float,float);

//Executable code begins here!!!
int main(int argc, char** argv) {
    //Declare Variables
    float wCost, //Wholesale cost
          mPcent;//The markup percentage
    
    //Input values
    cout<<"This Program Calculates an Item's Retail Price."<<endl;
    cout<<"\nPlease enter the item's wholesale cost: $";
    cin>>wCost;
    if (wCost<0) {
        cout<<"\nInvalid Input!"<<endl;
    }
    
    cout<<"\nPlease enter the markup percentage: ";
    cin>>mPcent;
    if (mPcent<0) {
        cout<<"\nInvalid Input!"<<endl;
    }
    
    //Output values
    cout<<fixed<<setprecision(2)<<showpoint;
    cout<<"\nThe item's retail price = $"<<cRetail(wCost,mPcent)<<endl;
    if (wCost<0&&mPcent<0) {
        cout<<"\nInvalid Input!"<<endl;
    }

    //Exit stage right!
    return 0;
}

float cRetail (float wCost, float mPcent) {
    float add,rPrice; //Add and Retail Price
    add=wCost*(mPcent/100);
    rPrice=wCost+add;
    return rPrice;
}