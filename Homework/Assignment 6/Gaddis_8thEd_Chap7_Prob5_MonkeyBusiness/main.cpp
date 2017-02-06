/* 
  File:   main.cpp
  Author: Linh Vu
  Created on February 4, 2017, 10:11 PM
  Purpose:  Monkey Business
            A local zoo wants to keep track of how many pounds of food each of 
            its three monkeys eats each day during a typical week. Write a 
            program that stores this information in a two-dimensional 3 × 5 
            array, where each row represents a different monkey and each column     
            represents a different day of the week. The program should first 
            have the user input the data for each monkey. Then it should create 
            a report that includes the following information:
            • Average amount of food eaten per day by the whole family of 
            monkeys.
            • The least amount of food eaten during the week by any one monkey.
            • The greatest amount of food eaten during the week by any one 
            monkey.
            Input Validation: Do not accept negative numbers for pounds of food 
            eaten.
 */

//System Libraries
#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

//User Libraries

//Global Constants
//Such as PI, Vc, -> Math/Science values
//as well as conversions from system of units to another
const int colDay=5; //Column for 5 days
const int Monkey=3; //Monkey for each rows

//Function Prototypes

//Executable code begins here!!!
int main(int argc, char** argv) {
    //Declare Variables
    int foodAte[Monkey][colDay]={};
    float AvgF=0.0; //Food average
    int totEat=0, 
        mostAte=0, 
        mstEatR=0, 
        mstEatC=0,
        lestAte=0, 
        lstEatR=0, 
        lstEatC=0;
            
    //Input values
    cout<<"Please enter the amount eaten each day by each monkey (lbs): "<<endl;
    for (int i=0;i<Monkey;i++) {
        for (int j=0;j<colDay;j++) {
            do {
                cout<<"Please input the food eaten by Monkey "<<(i+1)<<" on day "<<(j+1)<<": ";
                cin>>foodAte[i][j];
                if (foodAte[i][j]<0) cout<<"Must be zero or more pounds!"<<endl;           
            }
            while (foodAte[i][j]<0);
        }
    }
    
    mostAte=foodAte[0][0];
    mstEatR=1;
    mstEatC=1;
    lestAte=foodAte[0][0];
    lstEatR=1;
    lstEatC=1;
    
    //Process by mapping inputs to outputs
    cout<<endl;
    cout<<"The average food eaten per day per monkey is: "<<endl;
    for (int i=0;i<colDay;i++) {
        totEat=0;
        for (int j=0;j<Monkey;j++) {
            totEat+=foodAte[j][i];
        }
        AvgF=totEat/3.00f;
        cout<<fixed<<setprecision(2)<<showpoint;
        cout<<"The average food eaten on day "<<(i+1)<<" per monkey was "
                <<AvgF<<" lbs."<<endl;
        cout<<fixed<<setprecision(0);
    }
    for (int i=0;i<Monkey;i++) {
        for (int j=0;j<colDay;i++) {
            if (lestAte>foodAte[i][j]) {
                lestAte=foodAte[i][j];
                lstEatR=i+1;
                lstEatC=j+1;
            }
        }
    }
    cout<<"The least eaten was by monkey "<<lstEatR<<", who ate "<<lestAte<<
            " lbs on day "<<lstEatC<<"."<<endl;
        

    //Exit stage right!
    return 0;
}