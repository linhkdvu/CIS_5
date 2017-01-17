/* 
  File:   main.cpp
  Author: Dr. Mark E. Lehr
  Created on January 17, 2017, 12:15 PM
  Purpose:  Example Menu to be used in Homework
 */

//System Libraries
#include <iostream>
#include <cstdlib> //Random number generator seed
#include <ctime>   //Time Library
#include <iomanip> //Format Library
using namespace std;

//User Libraries

//Global Constants
//Such as PI, Vc, -> Math/Science values
//as well as conversions from system of units to another

//Function Prototypes

//Executable code begins here!!!
int main(int argc, char** argv) {
    //Declare Variables
    char choice;
    
    //Loop on the menu
    do{
    
        //Input values
        cout<<"Choose from the list"<<endl;
        cout<<"Type 1 for Problem "<<endl;
        cout<<"Type 2 for Problem "<<endl;
        cout<<"Type 3 for Problem "<<endl;
        cout<<"Type 4 for Problem "<<endl;
        cout<<"Type 5 for Problem "<<endl;
        cout<<"Type 6 for Problem "<<endl;
        cout<<"Type 7 for Problem "<<endl;
        cout<<"Type 8 for Problem "<<endl;
        cout<<"Type 9 for Problem "<<endl;
        cin>>choice;

        //Switch to determine the Problem
        switch(choice) {
            case '1': {
                cout<<"We are in Problem 1. Gaddis "<<endl;
                break;
            }
            case '2': {
                cout<<"We are in Problem 2"<<endl;
                break;
            }
            case '3': {
                cout<<"We are in Problem 3"<<endl;
                break;
            }
            case '4': {
                cout<<"We are in Problem "<<endl;
                break;
            }
            case '5': {
                cout<<"We are in Problem "<<endl;
                break;
            }
            case '6': {
                cout<<"We are in Problem "<<endl;
                break;
            }
            case '7': {
                cout<<"We are in Problem "<<endl;
                break;
            }
            case '8': {
                cout<<"We are in Problem "<<endl;
                break;
            }
            case '9': {
                cout<<"We are in Problem "<<endl;
            }
            default:
                cout<<"You are exiting the program"<<endl;
        }
    }while(choice>='1'&&choice<='9');

    //Exit stage right!
    return 0;
}