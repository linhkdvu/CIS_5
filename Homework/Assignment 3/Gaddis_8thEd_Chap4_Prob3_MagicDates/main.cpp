/* 
  File:   main.cpp
  Author: Dr. Mark E. Lehr
  Created on January 14, 2017, 10:32 AM
  Purpose:  Magic Dates
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
    int month,
        day,
        year,
        magic;
    
    //Input values
    cout<<"Please enter a month in numeric form."<<endl;
    cin>>month;
    cout<<"Please enter a day."<<endl;
    cin>>day;
    cout<<"Please enter a year (only the last two digits)."<<endl;
    cin>>year;
    
    //Process by mapping inputs to outputs
    magic = (month*day);
    if (magic==year) {
        cout<<"It is magic! The month times the day is equal to the year."<<endl;
    }
    else
        cout<<"It is not magic."<<endl;
    
    //Output values

    //Exit stage right!
    return 0;
}