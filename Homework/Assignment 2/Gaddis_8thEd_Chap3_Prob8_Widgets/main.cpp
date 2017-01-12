/* 
  File:   main.cpp
  Author: Dr. Mark E. Lehr
  Created on January 12, 2017, 12:54 PM
  Purpose:  How Many Widgets
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
    float ePallet,//Empty pallet weight
          wPallet,//Weighted pallet with widgets
          widget=12.5,//Each widget weight 12.5lbs
          nWidget;//Number of widgets on a pallet          
    
    //Input values
    cout<<"How much does the empty pallet weigh? (pounds)"<<endl;
    cin>>ePallet;
    cout<<"How much does the pallet weigh? (with widgets)"<<endl;
    cin>>wPallet;
              
    //Process by mapping inputs to outputs
    nWidget=(wPallet - ePallet)/12.5;
    
    //Output values
    cout<<"There are "<<nWidget<<" on the pallet"<<endl;

    //Exit stage right!
    return 0;
}