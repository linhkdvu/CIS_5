/* 
  File:   main.cpp
  Author: Dr. Mark E. Lehr
  Created on January 10, 2017, 12:08 PM
  Purpose:  The Percentage of Military Budget and NASA Budget in 2016
            Federal Budget: http://federal-budget.insidegov.com/l/119/2016-Estimate
            Military Budget: https://www.washingtonpost.com/news/worldviews/wp/2016/02/09/this-remarkable-chart-shows-how-u-s-defense-spending-dwarfs-the-rest-of-the-world/?utm_term=.04611d52a91a
            NASA Budget: https://www.nasa.gov/content/reach-for-new-heights-nasa-budget-unveiled-for-fiscal-year-2016
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
    float milBud=609e9f,  //Military Budget
          NASAbud=19e9f,  //NASA Budget
          fedBud=3.54e12f;//Federal Budget  
    
    //Input values
    cout<<"This program calculates the percentage of Military Budget"<<endl;
    cout<<"and NASA Budget in 2016."<<endl;
    cout<<"---------------"<<endl;
    cout<<"Budgets in 2016"<<fixed<<endl;
    cout<<"---------------"<<endl;
    cout<<"Federal Buget   = $"<<setprecision(0)<<fedBud<<endl;
    cout<<"Military Budget = $"<<setprecision(0)<<milBud<<endl;
    cout<<"NASA Budget     = $"<<setprecision(0)<<NASAbud<<endl;
    
    //Process by mapping inputs to outputs
    milBud=(609e9f/3.54e12f)*100;
    NASAbud=(19e9f/3.54e12f)*100;
    
    //Output values
    cout<<"\n---------------"<<endl;
    cout<<"The Percentages"<<fixed<<endl;
    cout<<"Military Budget = "<<setprecision(2)<<milBud<<"%"<<endl;
    cout<<"NASA Budget     = "<<setprecision(2)<<NASAbud<<"%"<<endl;
    

    //Exit stage right!
    return 0;
}