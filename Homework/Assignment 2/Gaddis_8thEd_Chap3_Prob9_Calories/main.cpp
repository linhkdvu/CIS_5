/* 
  File:   main.cpp
  Author: Dr. Mark E. Lehr
  Created on January 9, 2017, 1:18 PM
  Purpose:  How Many Calories?
            A bag of cookies holds 30 cookies. The calorie information 
            on the bag claims that there are 10 "servings" in the bag and that 
            a serving equals 300 calories. Write a program that asks the user 
            to input how many cookies he or she actually ate and then reports 
            how many total calories were consumed.
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
    float cookies, //Number of cookies ate.
          serSize = 40,//Serving Size.
          calCkies = 300,//Calories per cookies.
          tCal;    //Total calories consumed.
           
    
    //Input values
    cout<<"This program calculates the total of calories that you were consumed.\n"<<endl;
    cout<<"Please enter the number of cookies that you ate."<<endl;
    cin>>cookies;
    
    //Process by mapping inputs to outputs
    serSize=40/10;
    calCkies=300/serSize;
    tCal=cookies*calCkies;
    
    //Output values
    cout<<"\nTotal calories consumed = "<<tCal<<" calories"<<endl;

    //Exit stage right!
    return 0;
}