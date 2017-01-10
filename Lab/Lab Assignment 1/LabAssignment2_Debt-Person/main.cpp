/* 
  File:   main.cpp
  Author: Dr. Mark E. Lehr
  Created on January 10, 2017, 12:29 PM
  Purpose:  Calculate Debt per Person between 2008 and 2016.
            US Population 2016 (320 Million): http://www.usnews.com/opinion/blogs/robert-schlesinger/articles/2016-01-05/us-population-in-2016-according-to-census-estimates-322-762-018
            US Population 2008 (304 Million): https://www.google.com/#q=us+population+in+2008  
            2008 Fed Debt: http://www.cbsnews.com/news/national-debt-has-increased-more-under-obama-than-under-bush/
            2016 Fed Debt: http://www.concordcoalition.org/issues/indicators/what-total-us-national-debt
 */

//System Libraries
#include <iostream>
#include <iomanip>
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
    float USpop6=320e6f,//United States Population in 2016
          USpop8=304e6f,//United States Population in 2008
          USdebt6=19.5e12f,//United States Debt in 2016
          USdebt8=10.6e12f;//United States Debt in 2008
    
    //Input values
    cout<<"This Program Calculates the United States Debt Per Person"<<endl;
    cout<<"by using the Federal Deficit in 2008 and 2016."<<endl;
    cout<<"------------------------"<<endl;
    cout<<"Reports in 2008 and 2016"<<fixed<<endl;
    cout<<"------------------------"<<endl;
    cout<<"US Population in 2008 = "<<setprecision(0)<<USpop8<<endl;
    cout<<"US Debt in 2008 = $"<<USdebt8<<endl;
    cout<<"US Population in 2016 = "<<setprecision(0)<<USpop6<<endl;
    cout<<"US Debt in 2016 = $"<<USdebt6<<endl;
    
    //Process by mapping inputs to outputs
    USdebt6=19.5e12f/320e6f;
    USdebt8=10.6e12f/304e6f;
    
    //Output values
    cout<<"\n-----------"<<endl;
    cout<<"Debt/Person"<<fixed<<endl;
    cout<<"United States Debt in 2008 = $"<<setprecision(7)<<USdebt8<<endl;
    cout<<"United States Debt in 2016 = $"<<USdebt6<<endl;

    //Exit stage right!
    return 0;
}