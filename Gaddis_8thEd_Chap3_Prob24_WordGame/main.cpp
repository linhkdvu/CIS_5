/* 
  File:   main.cpp
  Author: Dr. Mark E. Lehr
  Created on January 10, 2017, 10:24 PM
  Purpose: Word Game
 */

//System Libraries
#include <iostream>
using namespace std;

//User Libraries

//Global Constants
//Such as PI, Vc, -> Math/Science values
//as well as conversions from system of units to 
//another

//Function Prototypes

//Executable code begins here!!!
int main(int argc, char** argv) {
    //Declare Variables
    char name,//His or Her Name
         age,//His or Her Age
         ctyname,//The name of a city
         collg,//The name of a college
         pro,//A profession
         animal,//A type of animal
         pet;//A pet's name
    
    //Input values
    cout<<"Let's Play A Game!"<<endl;
    cout<<"This game is called Word Game, and here is how to play it!"<<endl;
    cout<<"You will enter: a name, age, name of of a city, name of a college,"<<endl;
    cout<<"a profession, a type of animal, and a pet's name down below."<<endl;
    cout<<"Then it will displays a SURPRISE story!"<<endl;
    cout<<"\nEnter your name or anyone"<<endl;
    cin>>name,
    cout<<"\nEnter your age or anyone"<<endl;
    cin>>age,
    cout<<"\nEnter a name of a city"<<endl;
    cin>>ctyname,
    cout<<"\nEnter a name of a college"<<endl;
    cin>>collg,
    cout<<"\nEnter a profession"<<endl;
    cin>>pro,
    cout<<"\nEnter a type of animal"<<endl;
    cin>>animal,
    cout<<"\nEnter a pet's name"<<endl;
    cin>>pet;
    
    
    //Process by mapping inputs to outputs
    
    //Output values

    //Exit stage right!
    return 0;
}