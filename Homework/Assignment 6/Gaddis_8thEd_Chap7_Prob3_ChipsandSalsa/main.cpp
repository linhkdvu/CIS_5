/* 
  File:   main.cpp
  Author: Linh Vu
  Created on February 5, 2017, 4:04 PM
  Purpose:  Chips and Salsa
            Write a program that lets a maker of chips and salsa keep track of 
            sales for five different types of salsa: mild, medium, sweet, hot, 
            and zesty. The program should use two parallel 5-element arrays: an 
            array of strings that holds the five salsa names and an array of 
            integers that holds the number of jars sold during the past month 
            for each salsa type. The salsa names should be stored using an 
            initialization list at the time the name array is created. The 
            program should prompt the user to enter the number of for each type.
            Once this sales data has been entered, the program should produce a 
            report that displays sales for each salsa type, total sales, and the
            names of the highest selling and lowest selling products.
            Input Validation: Do not accept negative values for number of jars 
            sold. jars
 */

//System Libraries
#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

//User Libraries

//Global Constants
//Such as PI, Vc, -> Math/Science values
//as well as conversions from system of units to another
const int SIZE=5;

//Function Prototypes

//Executable code begins here!!!
int main(int argc, char** argv) {
    //Declare Variables
    string arrayT[SIZE]={"Mild","Medium",
                         "Sweet","Hot",
                         "Zesty"};
    string low,high;
    int Sale[SIZE]={};
    int Total=0,lowest=0,highest=0;
    int lowSale=1;
    int higSale=1;
    
    //Input values
    cout<<"Input the sales for each type of salsa..."<<endl;
    cout<<endl;
    for (int p=0;p<SIZE;p++) {
        do {
            cout<<arrayT[p]<<" sales was: $";
            cin>>Sale[p];
            if (Sale[p]<0) cout<<"Invalid Input! Re-enter"<<endl;
        }
        while (Sale[p]<0);
    }
    
    //Process by mapping inputs to outputs
    lowest=Sale[0];
    highest=Sale[0];
    low=arrayT[0];
    high=arrayT[0];
    
    for (int p=1;p<SIZE;p++) {
        if (Sale[p]<lowest) {
            lowest=Sale[p];
            low=arrayT[p];
            lowSale=1;
        }
        else if (Sale[p]==lowest) {
            lowSale++;
        }
        if (Sale[p]>highest) {
            highest=Sale[p];
            high=Sale[p];
            higSale=1;
        }
        else if (Sale[p]==highest) {
            higSale++;
        }
    }
    for (int p=0;p<SIZE;p++) {
        Total+=Sale[p];
    }
    
    //Output values
    cout<<endl;
    cout<<fixed<<setprecision(2);
    cout<<"The lowest sales number was: "<<lowest<<" jars for "<<low<<"."<<endl;
    if (lowSale>1)
        cout<<"   There were "<<lowSale<<" types total with these sales."<<endl;
    cout<<"The highest sales number was: "<<highest<<" jars for "<<high<<"."<<endl;
    if (higSale>1)
        cout<<"   There were "<<higSale<<" types total with these sales."<<endl;
    cout<<"The total number of jars sold was: "<<Total<<endl;

    //Exit stage right!
    return 0;
}