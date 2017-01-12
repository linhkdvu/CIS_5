/* 
  File:   main.cpp
  Author: Dr. Mark E. Lehr
  Created on January 11, 2017, 1:35 PM
  Purpose:  Stadium Seating
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
    float classA=15,//Class A seats cost $15
          classB=12,//Class B seats cost $12
          classC=9,//Class C seats cost $9
          income;//Total income
    
    //Input values
    cout<<"Please input the number of tickets Class A seats have sold"<<endl;
    cin>>classA;
    cout<<"Class B seats"<<endl;
    cin>>classB;
    cout<<"Class C seats"<<endl;
    cin>>classC;
    
    //Process by mapping inputs to outputs
    income=((classA*15)+(classB*12)+(classC*9));
    
    //Output values
    cout<<"\nThe amount of income generated from ticket sales = "
            "$"<<fixed<<setprecision(2)<<income<<endl;
            

    //Exit stage right!
    return 0;
}