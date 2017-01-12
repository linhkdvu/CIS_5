/* 
  File:   main.cpp
  Author: Dr. Mark E. Lehr
  Created on January 12, 2017, 1:15 PM
  Purpose:  Word Game
 */

//System Libraries
#include <iostream>
#include <string>
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
    string name,    //His or her name
           age,     //His or her age
           city,    //The name of the city
           college, //The name of a college
           profess, //A profession
           animal,  //A type of animal
           pet;     //A pet's name
    
    //Input values
    cout<<"Let's play a game called Word Game!"<<endl;
    cout<<"Enter the following informations:\n"<<endl;
    cout<<"Your name or anyone else:"<<endl;
    cin>>name;
    cout<<"Enter age:"<<endl;
    cin>>age;
    cout<<"Enter the name of a city:"<<endl;
    cin>>city;
    cout<<"Enter the name of a college:"<<endl;
    cin>>college;
    cout<<"Enter a profession:"<<endl;
    cin>>profess;
    cout<<"Enter a type of animal:"<<endl;
    cin>>animal;
    cout<<"Enter a pet's name:"<<endl;
    cin>>pet;
     
    //Output values
    cout<<"\nYour story:"<<endl;
    cout<<"There once was a person named "<<name<<" who lived in"<<city<<". "
            <<"At the age of "<<age<<", "<<name<<" went to "<<college<<". \n"
            <<name<<" graduated and went to work as a "<<profess<<
            ". Then, "<<name<<" adopted a(n)"<<animal<<" named "<<pet<<
            ". \nThey both lived happily ever after"<<endl;
            

    //Exit stage right!
    return 0;
}