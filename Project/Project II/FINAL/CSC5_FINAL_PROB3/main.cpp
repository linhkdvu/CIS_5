/* 
  File:   main.cpp
  Author: Linh Vu
  Created on February 8, 2017, 10:45 PM
  Purpose:  Create a function that fills one vector with even random 2 digit 
            numbers and another vector with odd random numbers. Prompt the user 
            for the size of these vectors. Both will be the same size.
            Output the results in 2 column format.
            Even   Odd  

            These should be done with 2 functions, fillVec and prntVec.

            Then do the same with a 2-Dim array where the first column has even 
            numbers and the second column has the odd numbers.

            These should be done with 2 functions, fillAry and prntAry.
            Fill the 2-Dim array with the odd and even vectors previously filled.
 */

//System Libraries
#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <vector>
#include <ctime>
using namespace std;

//User Libraries

//Global Constants
//Such as PI, Vc, -> Math/Science values
//as well as conversions from system of units to another

//Function Prototypes
void fillVec(vector<unsigned short> &, vector<unsigned short> &,int);
void prntVec(vector<unsigned short> &, vector<unsigned short> &,int);

//Executable code begins here!!!
int main(int argc, char** argv) {
    //Set the random number of seed
    srand(static_cast<unsigned int>(time(0)));
    
    //Declare Variables
    vector<unsigned short> even;
    vector<unsigned short> odd; //Even and odd numbers in vector
    int SIZE; //Size to be input by user
    
    //Input values
    cout<<endl;
    cout<<"Enter the number of elements to be put into vectors,\n  and the "
            "number of columns to print: ";
    cin>>SIZE;
    cout<<endl;
    
    //Fill vectors with number of elements
    fillVec(even,odd,SIZE);
    
    //Print out vectors
    prntVec(even,odd,SIZE);
  
    //Exit stage right!
    return 0;
}

void fillVec(vector<unsigned short> &a, vector<unsigned short> &b, 
        const int elmnts) {
    //Define local variables
    unsigned short rndNUM; //Round numbers
    
    //Input
    for (int i=0;i<elmnts;i++) {
        do {
            rndNUM=rand()%90+10;
        } 
        while (rndNUM%2);
        a.push_back(rndNUM);
    }
    //Fill odd number of vector
        for (int i=0;i<elmnts;i++) {
        do {
            rndNUM=rand()%90+10;
        } 
        while (!(rndNUM%2));
        b.push_back(rndNUM);
    } 
}


void prntVec(vector<unsigned short> &a, vector<unsigned short> &b, 
        const int cols) {
    //Even numbers
    cout<<"EVEN: ";
    for (int i=0;i<a.size();i++) {
        cout<<setw(3)<<a[i];
        if (!((i+1)%(cols)))
            cout<<endl;
    }
    cout << endl;
    //Odd numbers
    cout<<"ODD:  ";
    for (int i=0;i<b.size();i++) {
        cout<<setw(3)<<b[i];
            if(!((i+1)%(cols)))
                cout<<endl;
    }
}
