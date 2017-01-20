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
        cout<<"Type 3 for Problem 3 - Gaddis 8th Edition: "<<endl;
        cout<<"Type 4 for Problem 4 - Gaddis 8th Edition: "<<endl;
        cout<<"Type 5 for Problem 5 - Gaddis 8th Edition: "<<endl;
        cout<<"Type 6 for Problem 6 - Gaddis 8th Edition: "<<endl;
        cout<<"Type 7 for Problem 12 - Gaddis 8th Edition: "<<endl;
        cout<<"Type 8 for Problem 13 - Gaddis 8th Edition: "<<endl;
        cout<<"Type 9 for Problem 22 - Gaddis 8th Edition: "<<endl;
        cin>>choice;

        //Switch to determine the Problem
        switch(choice) {
            case '1': {
                cout<<"Problem 1: Sum of Numbers."<<endl;
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
                cout<<"Problem 2: Characters for the ASCII Codes."<<endl;         
                //Loop on the Problem
                for (int nChar=0;nChar<=127;nChar++) {
                    if (nChar%16==0) cout<<endl;
                        cout<<static_cast<char>(nChar);
                }
                cout<<endl;
                break;
                
            }
            case '3': {
                cout<<"Problem 3: Ocean Levels."<<endl;
                //Declare Variables
                float lvl=0;//Lever ocean per year
                
                //Loop on the problem
                for (unsigned short yrs=1;yrs<=25;yrs++) {
                    lvl+=1.5;
                    cout<<"Year "<<yrs<<": "<<lvl<<" millimeters."<<endl;
                }
                break;
            }
            
            case '4': {
                cout<<"Problem 4: Calories Burnt."<<endl;
                //Declare Variables
                int min=0;//Minutes calories burned
    
                //Loop for the problem
                for (int min=5;min<=30;min+=5) {
                cout<<min*3.9<<" calories burnt after: "<<min<<" minutes"<<endl;
                }
                break;
            }
            
            case '5': {
                cout<<"We are in Problem 5: Membership Fees Increase."<<endl;
                //Declare Variables
                float fee=2500;//Membership per year
                const float inc=0.04;//Increase Percentage
    
                //Loop on the problem
                for (int yrs=1;yrs<=6;yrs++) {
                    fee+=fee*inc;
                    cout<<fixed<<setprecision(2)<<showpoint;
                    cout<<"Year "<<yrs<<" fees are: $"<<fee<<endl;
                }
                break;
            }
            
            case '6': {
                cout<<"Problem 6: Distance Traveled."<<endl;
                //Declare Variables
                int speed, //The speed of your vehicle
                distnc,//Distance per mile
                hrsD;  //The hours you have driven
    
                //Input values
                cout<<"Please enter the speed of your vehicle in mph: "<<endl;
                cin>>speed;
                cout<<"Please enter the hours you have driven: "<<endl;
                cin>>hrsD;
    
                //Loop for the problem
                if (hrsD>=1&&speed>0) {
                     cout<<"Hour\t Distance Traveled"<<endl;
                for (int hrs=1;hrs<=hrsD;hrs++) {
                     distnc=speed*hrs;
                 cout<<hrs<<"\t\t"<<distnc<<endl;    
                     }
                }
                else {
                    cout<<"!Invalid Input!"<<endl;
                }
                break;
            }
            
            case '7': {
                cout<<"Problem 12: Celsius to Fahrenheit."<<endl;
                 //Declare Variables
                 float conv, //Conversion
                 cel=0;//Celsius
                 
                //Loop for the problem
                cout<<"Celsius\tFahrenheit"<<endl;
                for (int cel=1;cel<=20;cel++) {
                    cout<<fixed<<setprecision(2);
                    conv=(5.0/9)*(cel-32);
                    cout<<"   "<<cel<<" \t  "<<conv<<endl;
                }
                break;
            }
            
            case '8': {
                cout<<"Problem 13: Greatest and Least "<<endl;
                //Declare Variables
                int lrgest,//Largest value
                    smlest,//Smallest value
                    temp=0,
                    value=0;//Store user input
       
                //Loop on the Problem
                while(value!=-99) {
                    cout<<"Please enter a number (hit -99 to stop) "<<endl;
                    cin>>value;
                if(temp>value) {
                    lrgest=temp;
                    }
                if(temp<value) {
                    smlest=temp;
                    }
                temp=value;
                }
                
                //Output
                cout<<"The largest value entered is: "<<lrgest<<endl;
                cout<<"The smallest value entered is: "<<smlest<<endl;
                break;
            }
            
            case '22': {
                cout<<"Problem 22: Square Display."<<endl;
                //Declare Variables
                string show = "X";
                short inLine;     //User input how many lines to use
    
                //Input values
                cout<<"Please input how many lines you want to use (only from"
                        " 1 to 15)"<<endl;
                cin>>inLine;
    
                //Loop on the problem
                if (inLine>=1&&inLine<=15) {
                    for (int line=1;line<=(inLine*inLine);line++) {
                    cout<<show;
                    if (line%inLine==0)
                    cout<<endl;
                        }
                    }
                else 
                cout<<"!Invalid Input!"<<endl;

            }
            default:
                cout<<"You are exiting the program"<<endl;
        }
    }while(choice>='1'&&choice<='9');

    //Exit stage right!
    return 0;
}