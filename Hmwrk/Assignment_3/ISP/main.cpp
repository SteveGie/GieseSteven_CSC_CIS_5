/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cppFiles/main.cc to edit this template
 */

/* 
 * File:   main.cpp
 * Author: Steve
 *
 * Created on January 19, 2022, 10:45 AM
 */

#include <iostream>  //Input/Output Library
#include <iomanip>
using namespace std;

//User Libraries

//Global Constants, no Global Variables are allowed
//Math/Physics/Conversions/Higher Dimensions - i.e. PI, e, etc...

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Set the random number seed
    
    //Declare Variables
    char iplan;
    float plan, hours, hoursp, xhourp, xhours, bill;
    //Initialize or input i.e. set variable values
    cout<<"ISP Bill\n"<<"Input Package and Hours\n";
    cin>>iplan>>hours;
    if(hours>744 or iplan!='A' && iplan!='B' && iplan!='C'){
        cout<<"Invalid Hours or Plan, please enter Hours under 744, and a plan from A B or C\n";
        cin>>iplan>>hours;
    }
    if(iplan=='A'){
        plan=9.95;
        hoursp=10;
        xhourp=2.0;
    }
    else if(iplan=='B'){
        plan=14.95;
        hoursp=20;
        xhourp=1.00;
    }
    else{
        plan=19.95;
        hoursp=0;
        xhourp=0;
    }
    xhours=(hours-hoursp)*xhourp;
    xhours<0 ? xhours = 0: xhours=xhours;
    //Map inputs -> outputs
    bill=plan+xhours;
    //Display the outputs
cout<<setprecision(2)<<fixed;
cout<<"Bill = $ "<<bill;
    //Exit stage right or left!
    return 0;
}