/* 
  File:   main.cpp
  Author: Linh Vu
  Created on February 1, 2017, 8:55 PM
  Purpose:  Coin Toss
            Write a function named coinToss that simulates the tossing of a coin.
            When you call the function, it should generate a random number in 
            the range of 1 through 2. If the random number is 1, the function 
            should display “heads.” If the random number is 2, the function 
            should display “tails.” Demonstrate the function in a program that 
            asks the user how many times the coin should be tossed and then 
            simulates the tossing of the coin that number of times.
 */

//System Libraries
#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;

//User Libraries

//Global Constants
//Such as PI, Vc, -> Math/Science values
//as well as conversions from system of units to another

//Function Prototypes
void cToss(int); //Coin toss

//Executable code begins here!!!
int main(int argc, char** argv) {
    //Set random number seed
    srand(static_cast<unsigned int>(time(0)));
    
    //Declare Variables
    int Toss; //Number of toss
    
    //Input values
    cout<<"Input Number of Toss: ";
    cin>>Toss;
    cout<<endl;
    
    //Output values
    cout<<"Result: "<<endl;
    cToss(Toss);

    //Exit stage right!
    return 0;
}

void cToss(int Toss) {
    string a="Heads",
           b="Tails",
           Result;   //The result
    
    //Mapping output
    for (int count=1;count<=Toss;count++) {
        unsigned short coin=rand()%2+1; //The value from 1-2
        Result=(coin==2)?b:a;
        cout<<"  "<<count<<"\t\t"<<Result<<endl;
    }
}