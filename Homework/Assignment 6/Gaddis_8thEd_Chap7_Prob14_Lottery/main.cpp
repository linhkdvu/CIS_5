/* 
  File:   main.cpp
  Author: Linh Vu
  Created on February 6, 2017, 12:23 PM
  Purpose:  Lottery Application
            Write a program that simulates a lottery. The program should have an
            array of five integers named lottery and should generate a random 
            number in the range of 0 through 9 for each element in the array. 
            The user should enter five digits, which should be stored in an 
            integer array named user. The program is to compare the corresponding
            elements in the two arrays and keep a count of the digits that match. 
            For example, the following shows the lottery array and the user 
            array with sample numbers stored in each. There are two matching 
            digits (elements 2 and 4).
            The program should display the random numbers stored in the lottery 
            array and the number of matching digits. If all of the digits match,
            display a message proclaiming the user as a grand prize winner.
 */

//System Libraries
#include <iostream>
#include <cstdlib>
#include <cmath>
using namespace std;

//User Libraries

//Global Constants
//Such as PI, Vc, -> Math/Science values
//as well as conversions from system of units to another
const int SIZE=5; //Size of lottery array

//Function Prototypes

//Executable code begins here!!!
int main(int argc, char** argv) {
    //Set random number seed
    srand(static_cast<unsigned int>(time(0)));
    
    //Declare Variables
    int lotter[SIZE];   //Array to hold lottery numbers
    int User[SIZE];     //Array to hold user's lottery numbers
    int count;          //Loop counter
    int same=0, diff=0; //Increment counter for same and different values
    
    //Get random lottery number
    for (count=0;count<SIZE;count++) {
        lotter[count]=rand()%9; //Value from 0 to 9
    }
    
    //Input value
    cout<<"Please enter a five digit number for your lottery number. One digit at a time."<<endl;
    for (count=0;count<SIZE;count++) {
        cout<<endl;
        cout<<"Enter a value from 0 to 9."<<endl;
        cout<<"Digit #"<<count+1<<": ";
        cin>>User[count];
    }
    
    //Process by mapping inputs to outputs
    for (count=0;count<SIZE;count++) {
        if (lotter[count]==User[count]) {
            same++;
        }
        else {
            diff++;
        }
    }
    
    //Output values
    cout<<endl;
    cout<<"Lottery Numbers: "<<endl;
    for (count=0;count<SIZE;count++) {
        cout<<lotter[count]<<" "; //Output the lottery numbers
    }
    cout<<endl;
    cout<<"User Numbers: "<<endl;
    for (count=0;count<SIZE;count++) {
        cout<<User[count]<<" "; //Output the lottery numbers
    }
    
    cout<<endl;
    cout<<endl;
    cout<<"Of the 5 values, "<<same<<" of your values matched the lottery number."<<endl;
    if (same==5) {
        cout<<"Congratulation! You Are the Grand Prize Winner!"<<endl;
    }
    else {
        cout<<"Sorry! Today is not your lucky day. Try again..."<<endl;
    }

    //Exit stage right!
    return 0;
}