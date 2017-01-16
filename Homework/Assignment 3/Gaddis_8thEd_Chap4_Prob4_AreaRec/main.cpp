/* 
  File:   main.cpp
  Author: Dr. Mark E. Lehr
  Created on January 14, 2017, 10:41 AM
  Purpose:  Areas of Rectangles
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
    int length1, //Length of first rectangle
        length2, //Length of second rectangle
        width1,  //Width of first rectangle
        width2,  //Width of second rectangle
        rect1, rect2;
    
    //Input values
    cout<<"Enter inches length of first rectangle."<<endl;
    cin>>length1;
    cout<<"Enter inches width of first rectangle."<<endl;
    cin>>width1;
    cout<<"Enter inches length of second rectangle."<<endl;
    cin>>length2;
    cout<<"Enter inches width of second rectangle."<<endl;
    cin>>width2;
    
    //Process by mapping inputs to outputs
    rect1 = width1*length1;
    rect2 = width2*length2;      
    if (rect1>rect2) {
        cout<<"Rectangle 1 ("<<rect1<<") is "<<rect1-rect2<<" area inches larger "
                "than rectangle 2 ("<<rect2<<")."<<endl;
    }
    else if (rect1<rect2) {
        cout<<"Rectangle 2 ("<<rect2<<") is "<<rect2-rect1<<" area inches larger "
                "than rectangle 1 ("<<rect1<<")."<<endl;
    }
    else if (rect1==rect2) {
        cout<<"Rectangle 1 and 2 are equal at "<<rect1<<" area inches."<<endl;
    }

    //Exit stage right!
    return 0;
}