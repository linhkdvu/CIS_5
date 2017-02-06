/* 
  File:   main.cpp
  Author: Linh Vu
  Created on February 3, 2017, 11:00 AM
  Purpose:  Larger Than n
            In a program, write a function that accepts three arguments: an 
            array, the size of the array, and a number n . Assume that the array
            contains integers. The function should display all of the numbers in
            the array that are greater than the number n .
 */

//System Libraries
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

//User Libraries

//Global Constants
//Such as PI, Vc, -> Math/Science values
//as well as conversions from system of units to another
const int SIZE=1000;

//Function Prototypes
void display (int [],int,int); //Find the number that are greater than n

//Executable code begins here!!!
int main(int argc, char** argv) {
    //Set random number seed
    srand (static_cast<int>(time(0)));
    
    //Declare Variables
    int arrayN[SIZE]={}; //Array of numbers
    int testN=0;         //Test number

    //Input values
    cout<<"Filling array with random numbers 0-99"<<endl;
    for (int num=1;num<SIZE;num++) {
        arrayN[num]=(rand()%SIZE); //Fill array with random numbers 0 to 1000
        cout<<".";
        if ((num%70)==0)cout<<endl;
    }
    cout<<endl;
    
    testN=rand()%SIZE; //Random number for the test value number
    cout<<"Random number for testing..."<<testN<<endl;
    
    //Output values
    display (arrayN,SIZE,testN);
    
    //Exit stage right!
    return 0;
}

void display (int array[],int SIZE,int nVal) {
    int sameAs=0;
    int valCntr=0;
    for (int a=0;a<SIZE;a++) {
        if (array[a]>nVal)  {
            cout<<"Spot "<<a<<" in array is value "<<array[a]
                    <<" and is larger than "<<nVal<<endl;
            valCntr++;
        }
        if (array[a]==nVal) sameAs++;
    }
    cout<<"The array has "<<nVal<<" occur "<<sameAs<<" times."<<endl;
    cout<<"The function output "<<valCntr<<" lines."<<endl;
}