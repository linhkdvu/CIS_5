/* 
  File:   main.cpp
  Author: Dr. Mark E. Lehr
  Created on January 11, 2017, 1:02 PM
  Purpose:  Test Average
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
    float one,//First test score
          two,//Second test score
          three,//Third test score
          four,//Fourth test score
          five,//fifth test score
          average;//The average
    
    //Input values
    cout<<"This program calculates the average test score."<<endl;
    cout<<"Please input the test scores:\n"<<endl;
    cout<<"First test score"<<endl;
    cin>>one;
    cout<<"Second test score"<<endl;
    cin>>two;
    cout<<"Third test score"<<endl;
    cin>>three;
    cout<<"Fourth test score"<<endl;
    cin>>four;
    cout<<"Fifth test score"<<endl;
    cin>>five;
    
    //Process by mapping inputs to outputs
    average = (one+two+three+four+five)/5;
    cout<<fixed<<setprecision(1);
    
    //Output values
    cout<<"Your average = "<<average<<"%"<<endl;

    //Exit stage right!
    return 0;
}