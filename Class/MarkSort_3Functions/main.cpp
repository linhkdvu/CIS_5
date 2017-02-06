/* 
  File:   main.cpp
  Author: Linh Vu
  Created on February 1, 2017, 12:23 PM
  Purpose:  Mark Sort with 3 Functions
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
void filAray(int [],int);
void prntAry(int [],int,int);
void swap(int &,int &);
void smalst(int [],int,int);
void markSrt(int [],int);

//Executable code begins here!!!
int main(int argc, char** argv) {
    //Set the random number seed
    srand(static_cast<unsigned int>(time(0)));
    
    //Declare Variables
    const int SIZE=200;
    const int utilize=SIZE/2;
    int array[utilize]={};
    
    //Input values
    filAray(array,utilize);
    prntAry(array,utilize,10);
    
    //Process by mapping inputs to outputs
    markSrt(array,utilize);
    
    //Output values
    prntAry(array,utilize,10);

    //Exit stage right!
    return 0;
}

void filAray(int a[],int n) {
    for (int i=0;i<n;i++) {
        a[i]=rand()%90+10;
    }
}

void prntAry(int a[],int n,int perLine) {
    cout<<endl;
    for (int i=0;i<n;i++) {
        cout<<a[i]<<" ";
        if (i%perLine==perLine-1) cout<<endl;
    }
}

void swap(int &a,int &b) {
    a=a^b;
    b=a^b;
    a=a^b;
}

void smalst(int a[],int n,int pos) {
    for (int i=pos;i<n;i++) {
        if (a[pos]>a[i])swap(a[pos],a[i]);
    }
}

void markSrt(int a[],int n) {
    for (int i=0;i<n-1;i++) {
        smalst(a,n,i);
    }
}