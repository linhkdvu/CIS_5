/* 
  File:   main.cpp
  Author: Dr. Mark E. Lehr
  Created on January 7, 2017, 10:43 AM
  Purpose:  Sales Tax
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
    float rePrce,  //Retail price of the item being purchased
          pSalTax,//The sales tax for the purchase
          tSale,//Total of the sale 
          rSalTax; //The sales tax rate
    
    //Input values
    cout<<"Enter the retail price of the item being purchased."<<endl;
    cin>>rePrce;
    cout<<"Enter the sales tax rate"<<endl;
    cin>>rSalTax;
    
    //Process by mapping inputs to outputs
    pSalTax=(rePrce*rSalTax)/100;
    tSale=rePrce+pSalTax;
    
    
    //Output values
    cout<<"The sales tax for the purchase = $"<<pSalTax<<endl;
    cout<<"The total of the sale = $"<<tSale<<endl;
    

    //Exit stage right!
    return 0;
}