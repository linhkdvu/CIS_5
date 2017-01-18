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
        cout<<"\nChoose from the list"<<endl;
        cout<<"Type 1 for Problem 1 - Gaddis 8th Edition: "<<endl;
        cout<<"Type 2 for Problem 2 - Gaddis 8th Edition: "<<endl;
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
                cout<<"\nWe are in Problem 1: Sum of Numbers."<<endl;
                //Declare Variables
                int sum=0,//Sum of all integers from 1 up to the number entered.
                    input;//Input a positive integer value
                
                //Input Values
                cout<<"Enter any positive integer number."<<endl;
                cin>>input;
                
                //Loop on the problem
                if (input>=1) {
                    for (int num=1;num<=input;num++) {
                        sum+=num;
                    }
                }
                else {
                    cout<<input<<" is negative number.";
                    cout<<"The program will not terminate.1";
                }
                //Output Values
                if (input>=1) cout<<"The sum of numbers 1 - "<<input<<" "<<"is "
                            <<sum<<endl;
                break;
            }
            case '2': {
                cout<<"\nWe are in Problem 2: Characters for the ASCII Codes."<<endl;         
                //Loop on the Problem
                for (int nChar=0;nChar<=127;nChar++) {
                    if (nChar%16==0) cout<<endl;
                        cout<<static_cast<char>(nChar);
                }
                cout<<endl;
                break;
            }
            case '3': {
                cout<<"We are in Problem 3: Ocean Levels."<<endl;
                //Declare Variables
                
                //Loop on the problem
                
                //Output Values
                
                break;
            }
            case '4': {
                cout<<"We are in Problem 4: Calories Burned."<<endl;
                
                break;
            }
            case '5': {
                cout<<"We are in Problem 5: Membership Fees Increase."<<endl;
                
                break;
            }
            case '6': {
                cout<<"We are in Problem 6: Distance Traveled."<<endl;
                
                break;
            }
            case '7': {
                cout<<"We are in Problem 7: Pennies for Pay."<<endl;
                
                break;
            }
            case '8': {
                cout<<"We are in Problem 8: "<<endl;
                break;
            }
            case '9': {
                cout<<"We are in Problem 9: "<<endl;
                
            }
            default:
                cout<<"You are exiting the program"<<endl;
        }
    }while(choice>='1'&&choice<='9');

    //Exit stage right!
    return 0;
}