/* 
  File:   main.cpp
  Author: Linh Vu
  Created on February 6, 2017, 12:04 PM
  Purpose:  Mark Sort with 3 Functions Version 2 (6 Lines)
 */

//System Libraries
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

//User Libraries

//Global Constants
//Such as PI, Vc, -> Math/Science values
//as well as conversions from system of units to another


//Function Prototypes
void markSrt(int[],int); //Print out the array

//Executable code begins here!!!
int main(int argc, char** argv) {
    //Set the random number seed
    srand(static_cast<unsigned int>(time(0)));
    
    //Declare Variables
    const int SIZE=200; //Limit
    const int utilize=SIZE/2;
    int array[utilize]={};
    int perLine;
    
    
    //Input value
    for (int i=0;i<SIZE;i++) {
        cout<<array[i]<<" ";
        if (i%perLine==perLine-1) cout<<endl;
    }
    for (int i=0;i<SIZE;i++) {
        array[i]=rand()%90+10;
    }
    
    //Output values
    markSrt(array,utilize);
    for (int i=0;i<SIZE;i++) {
        array[i]=rand()%90+10;
    }
    
    //Exit stage right!
    return 0;
}

void markSrt(int a[],int n) {
    int t;
    cout<<endl;
    for (int i=0;i<=n-1;i++) {
        for (int j=0;j<=n-1;j++)
            if (a[j-1]>=a[j]) {
                t=a[j-1];
                a[j-1]=a[j];
                a[j]=t;
            }
    }
}