/* 
  File:   main.cpp
  Author: Linh Vu
  Created on February 1, 2017, 12:13 PM
  Purpose:  Kinetic Energy
            In physics, an object that is in motion is said to have kinetic 
            energy. The following formula can be used to determine a moving 
            object’s kinetic energy:
            KE = 1/2 mv^2
            The variables in the formula are as follows: KE is the kinetic 
            energy, m is the object’s mass in kilograms, and v is the object’s 
            velocity, in meters per second.
            Write a function named kineticEnergy that accepts an object’s mass 
            (in kilograms) and velocity (in meters per second) as arguments. 
            The function should return the amount of kinetic energy that the 
            object has. Demonstrate the function by calling it in a program that
            asks the user to enter values for mass and velocity.
 */

//System Libraries
#include <iostream>
#include <iomanip>
using namespace std;

//User Libraries

//Global Constants
//Such as PI, Vc, -> Math/Science values
//as well as conversions from system of units to another

//Function Prototypes
float KinEn(float,float); //Kinetic Energy

//Executable code begins here!!!
int main(int argc, char** argv) {
    //Declare Variables
    float mass,  //Mass of the object
          velcty;//Velocity of the object
    
    //Input values
    cout<<"This Program Calculates the Kinetic Energy of a Moving Object."<<endl;
    cout<<"\nEnter the object's mass (kg): ";
    cin>>mass;
    cout<<"Enter the object's velocity (meter(s)/sec): ";
    cin>>velcty;
    
    //Output values
    cout<<fixed<<setprecision(2)<<showpoint;
    cout<<endl;
    cout<<"Kinetic Energy = "<<KinEn(mass,velcty)<<endl;

    //Exit stage right!
    return 0;
}

float KinEn(float mass,float velcty) {
    float KinEn; //Kinetic Energy
    KinEn=mass*(velcty*velcty)/2;
    return KinEn;
}