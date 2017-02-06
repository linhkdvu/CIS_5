/* 
  File:   main.cpp
  Author: Linh Vu
  Created on February 2, 2017, 6:43 PM
  Purpose:  Largest/Smallest Array Values
            Write a program that lets the user enter 10 values into an array. 
            The program should then display the largest and smallest values 
            stored in the array.
 */

//System Libraries
#include <iostream>
using namespace std;

//User Libraries

//Global Constants
//Such as PI, Vc, -> Math/Science values
//as well as conversions from system of units to another

//Function Prototypes

//Executable code begins here!!!
int main(int argc, char** argv) {
    //Declare Variables
    const int Numb=10; //Number of values
    int array[Numb]={};//Array of 10 elements
    int min=array[1],
        max=array[0];  //Minimum and Maximum
    int input;         //Input numbers
    
    //Input values
    cout<<"\nEnter 10 values";
    for (int input=1;input<Numb;input++) {
        cout<<"\nEnter value "<<input<<": ";
        cin>>array[input]; //Puts values in array
    }
     
    //Process by mapping inputs to outputs
    for (int input=1;input<Numb;input++) {
        if (array[input]>max) {
            max=array[input];
        }
        else if (array[input]<min) {
            min=array[input];
        }
    }
    
    //Output values
    cout<<endl;
    cout<<"Minimum number is: "<<min<<endl;
    cout<<"Maximum number is: "<<max<<endl;
    
    //Exit stage right!
    return 0;
}