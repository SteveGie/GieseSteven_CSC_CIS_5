/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cppFiles/main.cc to edit this template
 */

/* 
 * File:   main.cpp
 * Author: Steve
 *
 * Created on January 19, 2022, 11:13 AM
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
    float hpay, hours, payc;
    //Initialize or input i.e. set variable values
    cout<<"This program calculates the gross paycheck.\n"<<"Input the pay rate in $'s/hr and the number of hours.\n";
    cin>>hpay>>hours;
    //Map inputs -> output
    payc = hours>40 ?
        ((hours-40)*hpay)*2 + (40*hpay):
        hpay*hours;
    //Display the outputs
    cout<<setprecision(2)<<fixed;
    cout<<"Paycheck = $"<<setw(7)<<payc;

    //Exit stage right or left!
    return 0;
}
