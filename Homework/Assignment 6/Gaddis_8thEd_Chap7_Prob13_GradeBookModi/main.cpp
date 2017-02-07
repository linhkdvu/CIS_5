/* 
  File:   main.cpp
  Author: Linh Vu
  Created on February 6, 2017, 3:00 PM
  Purpose:  Grade Book Modification
            Modify the grade book application in Programming Challenge 13 so it 
            drops each student’s lowest score when determining the test score 
            averages and letter grades.
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
const int SIZE=5; //Number of students (5)
const int GRADE=4;//Letter grades

//Function Prototypes

//Executable code begins here!!!
int main(int argc, char** argv) {
    //Declare Variables
    string names[SIZE]={}; //Student's names
    char letterG[SIZE]={}; //Letter grades
    float Score[SIZE][GRADE]={}, //The scores for each student and the letter grades
          AvgS[SIZE]={},         //The score average
          Avg=0.00, Total=0.00, lowS=0.00;

    //Input values
    for (int n=0;n<SIZE;n++) {
        cout<<"Please enter the name of Student #"<<(n+1)<<": ";
        cin>>names[n];
    }
    cout<<endl;
    cout<<"Please input the student's grades."<<endl;
    for (int g=0;g<SIZE;g++) {
        for (int g2=0;g2<SIZE;g2++) {
            do {
                cout<<"Please enter test score "<<(g2+1)<<" for student "
                        <<(g+1)<<" as a score from 0 to 100: ";
                cin>>Score[g][g2];
                if ((Score[g][g2]<0)&&(Score[g][g2]>0)) cout<<"Scores must be "
                        "between 0 and 100!"<<endl;
            }
            while ((Score[g][g2]<0)&&(Score[g][g2]>100));
        }
    }
 
    //Process by mapping inputs to outputs
    for (int g=0;g<SIZE;g++) {
        Avg=0.00;
        Total=0.00;
        lowS=Score[g][0];
        //Dropping the lowest score
        for (int num=0;num<GRADE;num++) {
            Total+=Score[g][num];
            if (lowS>Score[g][num]) {
                lowS=Score[g][num];
            }
        }
        cout<<"Dropping the lowest score of: "<<lowS<<endl;
        Total-=lowS;
        Avg=Total/3.0f;
        AvgS[g]=Avg;
        if (Avg>90) letterG[g]='A';
        else if (Avg>80) letterG[g]='B';
        else if (Avg>70) letterG[g]='C';
        else if (Avg>60) letterG[g]='D';
        else letterG[g]='F';
    }
    
    //Output values
    cout<<setw(25)<<"NAME"<<setw(15)<<"AVERAGE"<<setw(10)<<"GRADE"<<endl;
    cout<<fixed<<setprecision(2);
    for (int g=0;g<SIZE;g++) {
        cout<<setw(25)<<names[g]<<setw(15)<<AvgS[g]<<setw(10)<<letterG[g]<<endl;
    }

    //Exit stage right!
    return 0;
}