/* 
  File:   main.cpp
  Author: Dr. Mark E. Lehr
  Created on January 15, 2017, 9:05 PM
  Purpose:  Running the Race
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
    string runner1, runner2, runner3;
    float runTm1, runTm2, runTm3;
    
    //Input values
    cout<<"Please input the requested informations.\n"<<endl;
    cout<<"The name of the first runner."<<endl;
    cin>>runner1;
    cout<<"How long did "<<runner1<<" take to finish the race?"<<endl;
    cin>>runTm1;
    cout<<"The name of the second runner."<<endl;
    cin>>runner2;
    cout<<"How long did "<<runner2<<" take to finish the race?"<<endl;
    cin>>runTm2;
    cout<<"The name of the third runner."<<endl;
    cin>>runner3;
    cout<<"How long did "<<runner3<<" take to finish the race?"<<endl;
    cin>>runTm3;
    
    //Process by mapping inputs to outputs
    if (runTm1>0 && runTm2>0 && runTm3>0)
        if (runTm1 < runTm2 && runTm1 < runTm3 )
            if (runTm2 < runTm3) {
                cout<<"First Place: "<<runner1<<endl;
                cout<<"Second Place: "<<runner2<<endl;
                cout<<"Third Place: "<<runner3<<endl;
            }
            else {
                cout<<"First Place: "<<runner1<<endl;
                cout<<"Second Place: "<<runner3<<endl;
                cout<<"Third Place: "<<runner2<<endl;
            }
        else if (runTm2 < runTm1 && runTm2 < runTm3)
            if (runTm1 < runTm3) {
                cout<<"First Place: "<<runner2<<endl;
                cout<<"Second Place: "<<runner1<<endl;
                cout<<"Third Place: "<<runner3<<endl;
            }
            else {
                cout<<"First Place: "<<runner2<<endl;
                cout<<"Second Place: "<<runner3<<endl;
                cout<<"Third Place: "<<runner1<<endl;
            }
        else if (runTm1 < runTm2) {
            cout<<"First Place: "<<runner3<<endl;
            cout<<"Second Place: "<<runner1<<endl;
            cout<<"Third Place: "<<runner2<<endl;
        }
        else {
            cout<<"First Place: "<<runner3<<endl;
            cout<<"Second Place: "<<runner2<<endl;
            cout<<"Third Place: "<<runner1<<endl;
        }
    else 
        cout<<"Invalid time input! Times cannot be less than zero."<<endl;
               
    
    //Output values

    //Exit stage right!
    return 0;
}