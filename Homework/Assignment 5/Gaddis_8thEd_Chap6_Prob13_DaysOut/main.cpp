/* 
  File:   main.cpp
  Author: Linh Vu
  Created on February 1, 2017, 9:15 PM
  Purpose:  Days Out
            Write a program that calculates the average number of days a 
            company’s employees are absent. The program should have the 
            following functions:
            • A function called by main that asks the user for the number of 
            employees in the company. This value should be returned as an int. 
            (The function accepts no arguments.)
            • A function called by main that accepts one argument: the number of
            employees in the company. The function should ask the user to enter 
            the number of days each employee missed during the past year. The 
            total of these days should be returned as an int .
            • A function called by main that takes two arguments: the number of 
            employees in the company and the total number of days absent for all
            employees during the year. The function should return, as a double, 
            the average number of days absent. (This function does not perform 
            screen output and does not ask the user for input.)
            Input Validation: Do not accept a number less than 1 for the number
            of employees. Do not accept a negative number for the days any 
            employee missed.
 */

//System Libraries
#include <iostream>
#include <cmath>
using namespace std;

//User Libraries

//Global Constants
//Such as PI, Vc, -> Math/Science values
//as well as conversions from system of units to another

//Function Prototypes
int   nEmploy();        //Number of employees
int   nDays(int);       //Number of days missed
float avgDays(int,int); //The average number of days absent

//Executable code begins here!!!
int main(int argc, char** argv) {
    //Declare Variables
    int   Employ, //Number of employees
          Total;  //Number of days absent
    float Avg;    //The average number of days absent
    
    //Return functions
    Employ=nEmploy();          //Number of employees
    Total=nDays(Employ);       //Number of days absent
    Avg=avgDays(Employ,Total); //The average number of days absent
    
    //Output values
    cout<<"The Average Number of Days the Company's Employees are Absent in the"
            " Company is: "<<Avg<<endl;

    //Exit stage right!
    return 0;
}

int nEmploy() {
    int nEmploy; //Number of employees
    
    //Input values
    cout<<"Enter number of employees in the company: ";
    cin>>nEmploy;
    
    //Invalid input
    while (nEmploy<=0) {
        cout<<"Invalid Input! Please enter a positive number: ";
        cin>>nEmploy;
    }
    return nEmploy;
}

int nDays(int Total) {
    int sum=0;
    for (int n=0;n<Total;n++) {
        int mDays; //Days missed
        cout<<"\nEnter the number of days employees "<<n<<" missed during the "
                "year: ";
        cin>>mDays;
        while (mDays<0) {
            cout<<"Invalid Input! Please enter a positive number: ";
            cin>>mDays;
        }
        sum+=mDays;
    }
    return sum;
}

float avgDays (int Employ,int Total) {
    float Avg=(Employ*365)/Total;
    return Avg;
}
