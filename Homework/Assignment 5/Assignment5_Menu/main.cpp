/* 
  File:   main.cpp
  Author: Linh Vu
  Created on February 2, 2017, 12:17 PM
  Purpose:  Assignment 5 Menu
 */

//System Libraries
#include <iostream>//Input Output Library
#include <cstdlib> //Random number generator seed
#include <ctime>   //Time Library
#include <iomanip> //Format Library
#include <cmath>   //Math Library
#include <string>  //String Library
using namespace std;

//User Libraries

//Global Constants
//Such as PI, Vc, -> Math/Science values
//as well as conversions from system of units to another

//Function Prototypes
//Function HW#1
void hProb1(); //Homework Problem 1
float cRetail(float,float); //Calculate the retail price

//Function HW#2
void hProb2(); //Homework Problem 2
float getSale(float &);                    //Get the number of sale
void  fHghest(float, float, float, float); //Find the highest amount

//Function HW#3
void hProb3(); //Homework Problem 3
int   gNAcdnt();                   //Number of accidents
void  fLowst(int,int,int,int,int); //The lowest number of accidents

//Function HW#4
void hProb4(); //Homework Problem 4
float fDstnce(float); //Falling distance

//Function HW#5
void hProb5(); //Homework Problem 5
float KinEn(float,float); //Kinetic Energy

//Function HW#6
void hProb6(); //Homework Problem 6
float celsius(short);

//Function HW#7
void hProb7(); //Homework Problem 7
void cToss(int); //Coin toss

//Function HW#8
void hProb8(); //Homework Problem 8
float fValue(float,float,float); //Future value

//Function HW#9
void hProb9(); //Homework Problem 9
int   nEmploy();        //Number of employees
int   nDays(int);       //Number of days missed
float avgDays(int,int); //The average number of days absent

//Executable code begins here!!!
int main(int argc, char** argv) {
    //Declare Variables
    char choice;
    bool x=true;
    
    //Loop on the menu
    do{
    
        //Introduction
        cout<<endl;
        cout<<"-------------------------------------------------"<<endl;
        cout<<"    ASSIGNMENT 5 MENU - Choose from the list."<<endl;
        cout<<"-------------------------------------------------"<<endl;
        
        //Input values
        cout<<"Type 1 : Homework #1  - MARKUP"<<endl;
        cout<<"Type 2 : Homework #3  - WINNING DIVISION"<<endl;
        cout<<"Type 3 : Homework #4  - SAFEST DRIVING REGION"<<endl;
        cout<<"Type 4 : Homework #5  - FALLING DISTANCE"<<endl;
        cout<<"Type 5 : Homework #6  - KINETIC ENERGY"<<endl;
        cout<<"Type 6 : Homework #7  - CELSIUS TEMPERATURE TABLE"<<endl;
        cout<<"Type 7 : Homework #8  - COIN TOSS"<<endl;
        cout<<"Type 8 : Homework #10 - FUTURE VALUE"<<endl;
        cout<<"Type 9 : Homework #13 - DAYS OUT"<<endl;
        cout<<"P.S: Type 'x' to exist the program."<<endl;
        cout<<endl;
        cout<<"Number: ";
        cin>>choice;
        cout<<endl;
        

        //Switch to determine the Problem
        switch(choice){
            case '1':{hProb1();break;}
            case '2':{hProb2();break;}
            case '3':{hProb3();break;}
            case '4':{hProb4();break;}
            case '5':{hProb5();break;}
            case '6':{hProb6();break;}
            case '7':{hProb7();break;}
            case '8':{hProb8();break;}
            case '9':{hProb9();break;}
            default:
                cout<<"See You Again!"<<endl;
                x=false;
        }
    }while(x);
    
    //Exit stage right!
    return 0;
}

/*
//345678901234567890123456789012345678901234567890123456780123456789012345678901
//**********************************HOMEWORK#1**********************************
//DESCRIPTION: Write a program to calculates the item's retail price.
//FUNCTION: float cRetail();
//INPUT VALIDATION: Do no accept negative values.
//******************************************************************************
//Function HW#1
*/
void hProb1() {
    //Introduction
    cout<<endl;
    cout<<"Homework #1 - MARKUP."<<endl;
    //Declare Variables
    float wCost, //Wholesale cost
          mPcent;//The markup percentage
    
    //Input values
    cout<<"This Program Calculates an Item's Retail Price."<<endl;
    cout<<"\nPlease enter the item's wholesale cost: $";
    cin>>wCost;
    if (wCost<0) {
        cout<<"\nInvalid Input!"<<endl;
    }
    
    cout<<"\nPlease enter the markup percentage: ";
    cin>>mPcent;
    if (mPcent<0) {
        cout<<"\nInvalid Input!"<<endl;
    }
    
    //Output values
    cout<<fixed<<setprecision(2)<<showpoint;
    cout<<"\nThe item's retail price = $"<<cRetail(wCost,mPcent)<<endl;
    if (wCost<0&&mPcent<0) {
        cout<<"\nInvalid Input!"<<endl;
    }
}

//Function float cRetail()
float cRetail (float wCost, float mPcent) {
    float add,rPrice; //Add and Retail Price
    add=wCost*(mPcent/100);
    rPrice=wCost+add;
    return rPrice;    //Return the result
}

/*
//345678901234567890123456789012345678901234567890123456780123456789012345678901
//**********************************HOMEWORK#2**********************************
//DESCRIPTION: Write a program that determines which of a company’s four 
  divisions had the greatest sales for a quarter.
//FUNCTION: float getSale();
            fHghest();
//INPUT VALIDATION: Do no accept negative values.
//******************************************************************************
//Function HW#2
*/
void hProb2() {
    //Introduction
    cout<<endl;
    cout<<"Homework #3 - WINNING DIVISION."<<endl;
    //Declare Variables
    float  nEast=0, //Northeast
           sEast=0, //Southeast
           nWest=0, //Northwest
           sWest=0; //Southwest
    
    //Input values
    cout<<"This Program Calculates the Greatest Sales for a Quater."<<endl;
    cout<<"\nEnter Northeast sales: $";
    cin>>nEast;
    cout<<"Enter Southeast sales: $";
    cin>>sEast;
    cout<<"Enter Northwest sales: $";
    cin>>nWest;
    cout<<"Enter Southwest sales: $";
    cin>>sWest;
    
    //Output values
    fHghest(nEast,sEast,nWest,sWest);
}

//Function gSale() & fHghest
float getSale (float & n) {
    do {
        if(!cin) {
            cin.clear();
            cin.ignore(100,'\n');
        }
        cin>>n;
        cout<<"Number entered: ";
    }
    while (!cin||n<=0);
    return n;
}

void fHghest(float nEast, float sEast, float nWest, float sWest) {
    const char *who="Northeast";
    float high=nEast;
    if (sEast>high) {
        who="Southeast";
        high=sEast;
    }
    if (nWest>high) {
        who="Northwest";
        high=nWest;
    }
    if (sWest>high) {
        who="Southwest";
        high=sWest;
    }
    cout<<endl;
    cout<<who<<" has the highest sale: $"<<high<<endl;
}

/*
//345678901234567890123456789012345678901234567890123456780123456789012345678901
//**********************************HOMEWORK#3**********************************
//DESCRIPTION: Write a program that determines which of five geographic regions 
               within a major city fewest reported automobile accidents last year.
               divisions had the greatest sales for a quarter.
//FUNCTION: int getNumAccidents()
            void findLowest()
//INPUT VALIDATION: Do not accept an accident number that is less than 0.
//******************************************************************************
//Function HW#3
*/
void hProb3() {
    //Introduction
    cout<<endl;
    cout<<"Homework #4 - SAFEST DRIVING REGION"<<endl;
    //Declare Variables
    int North, South, East, West, Central; //Five geographic regions
    
    //Input values
    cout<<"This Program Finds the Lowest Number of Automobile Accidents Last "
            "Year."<<endl;
    cout<<endl;
    cout<<"North Region"<<endl;
    North=gNAcdnt();
    cout<<"South Region"<<endl;
    South=gNAcdnt();
    cout<<"East Region"<<endl;
    East=gNAcdnt();
    cout<<"West Region"<<endl;
    West=gNAcdnt();
    cout<<"Central Region"<<endl;
    Central=gNAcdnt();
    
    //Output
    cout<<"North Region: "<<setw(7)<<North<<endl;
    cout<<"South Region: "<<setw(7)<<South<<endl;
    cout<<"West Region: "<<setw(8)<<West<<endl;
    cout<<"East Region: "<<setw(8)<<East<<endl;
    cout<<"Central Region: "<<setw(5)<<Central<<endl;
    cout<<endl;
    
    fLowst(North, South, West, East, Central);
}

//Function gNAcdnt() & fLowst()
int gNAcdnt() {
    int gNAcdnt;
    cout<<"Report Number of Accidents: ";
    cin>>gNAcdnt;
    cout<<endl;
    
    //Invalid Input
    while (gNAcdnt<0) {
        cout<<"Invalid Input!\n"<<endl;
        cout<<"Report Number of Accidents: ";
        cin>>gNAcdnt;
        cout<<endl;
    }
    return gNAcdnt;
}

void fLowst(int a,int b,int c,int d,int e) {
    int fLowst;
    string North  ="North Region"  ,
           South  ="South Region"  ,
           East   ="East Region "  ,
           West   ="West Region "  ,
           Central="Central Region";
    
    //Lowest
    fLowst=a;
    
    fLowst=(b<fLowst)?b:fLowst;
    fLowst=(c<fLowst)?c:fLowst;
    fLowst=(d<fLowst)?d:fLowst;
    fLowst=(e<fLowst)?e:fLowst;
    
    //Output
    cout<<"The safest driving area is ";
    if (fLowst==a)cout<<North;
    if (fLowst==b)cout<<South;
    if (fLowst==c)cout<<West;
    if (fLowst==d)cout<<East;
    if (fLowst==e)cout<<Central;
    
    cout<<" with only "<<fLowst<<" number of reported accidents!"<<endl;
}

/*
//345678901234567890123456789012345678901234567890123456780123456789012345678901
//**********************************HOMEWORK#4**********************************
//DESCRIPTION: Write a function named fallingDistance that accepts an object’s 
               falling time (in seconds) as an argument.
//FUNCTION: float fDstnce(float);
//INPUT VALIDATION: NONE
//******************************************************************************
//Function HW#4
*/
void hProb4() {
    //Introduction
    cout<<endl;
    cout<<"Homework #5 - FALLING DISTANCE."<<endl;
    //Output values
    static float time;
    cout<<"  Different Falling Times and Distances.\n";
    cout<<"     -----------------------------\n";
    cout<<"\tTime\t\tDistance\n";
    cout<<"     -----------------------------\n";
    
    //Loop
    for (time=1;time<=10;time++) {
        cout<<"\t  "<<time<<"\t\t"<<fDstnce(time)<<endl;
    }
}

//Function float fDstnce(float time)
float fDstnce(float time) {
    float fDstnce;
    fDstnce=0.5*9.8*time*time;
    return fDstnce;
}

/*
//345678901234567890123456789012345678901234567890123456780123456789012345678901
//**********************************HOMEWORK#5**********************************
//DESCRIPTION: Write a function named kineticEnergy that accepts an object’s mass 
               (in kilograms) and velocity (in meters per second) as arguments. 
//FUNCTION: float KinEn(float,float);
//INPUT VALIDATION: NONE
//******************************************************************************
//Function HW#5
*/
void hProb5() {
    //Introduction
    cout<<endl;
    cout<<"Homework #6 - KINETIC ENERGY"<<endl;
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
}

//Function float KinEn(float,float)
float KinEn(float mass,float velcty) {
    float KinEn; //Kinetic Energy
    KinEn=mass*(velcty*velcty)/2;
    return KinEn;
}

/*
//345678901234567890123456789012345678901234567890123456780123456789012345678901
//**********************************HOMEWORK#6**********************************
//DESCRIPTION:  Write a function named Celsius that accepts a Fahrenheit
               temperature as an argument. 
//FUNCTION: float celsius(short);
//INPUT VALIDATION: NONE
//******************************************************************************
//Function HW#6
*/
void hProb6() {
    //Introduction
    cout<<endl;
    cout<<"Homework #7 - CELSIUS TEMPERATURE TABLE."<<endl;
    //Declare variable
    float cnvrs;//Conversion
    int   fahr; //Fahrenheit
    
    //Input values
    cout<<fixed<<setprecision(2)<<showpoint;
    cout<<"TEMPERATURE TABLE (F/C)"<<endl;
    cout<<"\nFahrenheit\tCelsius"<<endl;
    
    //Output values
    for (fahr=0;fahr<=20;fahr++) {
        cout<<"    "<<fahr<<"\t\t"<<celsius(fahr)<<endl;
    }
}

//Function float celsius(short)
float celsius(short fahr) {
    float celsius;
    celsius=5*(static_cast<float>(fahr)-32)/9;
    return celsius;
}

/*
//345678901234567890123456789012345678901234567890123456780123456789012345678901
//**********************************HOMEWORK#7**********************************
//DESCRIPTION: Write a function named coinToss that simulates the tossing of a 
               coin.
//FUNCTION: void cToss(int);
//INPUT VALIDATION: NONE
//******************************************************************************
//Function HW#7
*/
void hProb7() {
    //Introduction
    cout<<endl;
    cout<<"Homework #8 - COIN TOSS."<<endl;
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
}

//Function void cToss(int)
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

/*
//345678901234567890123456789012345678901234567890123456780123456789012345678901
//**********************************HOMEWORK#8**********************************
//DESCRIPTION: 
//FUNCTION: float fValue(float,float,float);
//INPUT VALIDATION: NONE
//******************************************************************************
//Function HW#8
*/
void hProb8() {
    //Introduction
    cout<<endl;
    cout<<"Homework #10 - FUTURE VALUE."<<endl;
    //Declare Variables
    float pValue, //Present value
          iRate,  //Interest rate
          tMonth; //Number of months
    
    //Input values
    cout<<"This Program Calculates the Account's Future Value."<<endl;
    cout<<"\nEnter the account's present value: $";
    cin>>pValue;
    cout<<"Enter the monthly interest rate: ";
    cin>>iRate;
    cout<<"Enter the number of months that the money will be left in the "
            "account: ";
    cin>>tMonth;
    
    //Output values
    cout<<fixed<<setprecision(2);
    cout<<"\nThe account's future value = $"<<fValue(pValue,iRate,tMonth)<<endl;
}

//Function float fValue(float,float,float)
float fValue(float pValue,float iRate,float tMonth) {
    float sum; //Account's future value
    sum=pValue*pow(1+iRate/100, tMonth);
    return sum;
}

/*
//345678901234567890123456789012345678901234567890123456780123456789012345678901
//**********************************HOMEWORK#9**********************************
//DESCRIPTION: Write a program that calculates the average number of days a 
               company’s employees are absent.
//FUNCTION: int   nEmploy();
            int   nDays(int);
            float avgDays(int,int);
//INPUT VALIDATION: Do not accept a number less than 1 for the number
            of employees. Do not accept a negative number for the days any 
            employee missed.
//******************************************************************************
//Function HW#9
*/
void hProb9() {
    //Introduction
    cout<<endl;
    cout<<"Homework #13 - DAYS OUT."<<endl;
    //Declare Variables
    int   Employ, //Number of employees
          Total;  //Number of days absent
    float Avg;    //The average number of days absent
    
    //Return functions
    Employ=nEmploy();          //Number of employees
    Total=nDays(Employ);       //Number of days absent
    Avg=avgDays(Employ,Total); //The average number of days absent
    
    //Output values
    cout<<endl;
    cout<<"The Average Number of Days the Company's Employees are Absent in the"
            " Company is: "<<Avg<<endl;
}

//Functions
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

/*
 *******************************************************************************
 END OF THE MENU
 *******************************************************************************
 */