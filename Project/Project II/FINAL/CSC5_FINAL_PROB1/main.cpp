/* 
  File:   main.cpp
  Author: Linh Vu
  Created on February 8, 2017, 9:34 PM
  Purpose:  Problem 1
            Write a function that takes an unsigned short integer and returns a
            signed short number in reverse. For instance 106 reversed would be 
            601. Another would be 30000 gives 3.  Subtract the largest 3
            digit number you can without going negative. Check to make sure the 
            conversion falls within the range for a signed short. If it doesn't
            then output no conversion possible else output the result.
 */

//System Libraries
#include <iostream>
#include <string>
#include <cmath>
#include <sstream>
using namespace std;

//User Libraries

//Global Constants
//Such as PI, Vc, -> Math/Science values
//as well as conversions from system of units to another

//Function Prototypes
signed short Revers(unsigned short NUM);

//Executable code begins here!!!
int main(int argc, char** argv) {
    //Declare Variables
    unsigned short NUM; //Unsigned number
    
    //Input values
    cout<<"This program reverses a number that you typed in and calculates"<<endl;
    cout<<"For example: 106 reversed would be 601."<<endl;
    cout<<endl;
    cout<<"Enter an unsigned value: ";
    cin>>NUM;
    
    //Output values
    signed short REV=Revers(NUM);
    if(REV==-1) {
        cout<<"No Conversion is Possible."<<endl;
    }
    else {
        cout<<"Reversed value is: "<<REV<<endl;
    }

    //Exit stage right!
    return 0;
}

signed short Revers(unsigned short NUM){
   int MAX=pow(2,(sizeof(signed short)*8-1))-1;
   string str,temp="";
   stringstream ss;
   ss<<NUM;
   ss>>str;
   //Reversed
   for(int i=0;i<str.size();++i) {
       temp=str[i]+temp;
   }
    ss.clear();
    ss<<temp;
    ss>>NUM;
   if(NUM>MAX){
       return -1;
   }
   else{
       return NUM;
   }
}