/* 
  File:   main.cpp
  Author: Dr. Mark E. Lehr
  Created on January 15, 2017, 9:30 PM
  Purpose:  Fat Gram Calculator 
 */

//System Libraries
#include <iostream>
#include <iomanip>
#include <string>
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
    float calor, //Number of Calories
          fatgr, //Number of Fat Grams
          fatcal,//Fat Calories
          lowfat;
    
    //Input values
    cout<<"Please enter the number of calories in food."<<endl;
    cin>>calor;
    cout<<"Enter the number of fat grams in food."<<endl;
    cin>>fatgr;
    
    //Process by mapping inputs to outputs
    fatcal=fatgr*9;
    lowfat=fatcal/calor;
    cout<<"Calories from fat: "<<lowfat*100<<"%";
    if (lowfat<.30) {
        cout<<"\nThis food is low in fat."<<endl;
    }
    if (calor<0) {
        cout<<"Calories cannot be less than 0!"<<endl;
    }
    if (fatgr<0||fatgr>calor) {
        cout<<"\nFat grams cannot be less than 0 or greater than calories."
                ""<<endl;
    }
    
    //Output values

    //Exit stage right!
    return 0;
}