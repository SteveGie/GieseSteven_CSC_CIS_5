/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cppFiles/main.cc to edit this template
 */

/* 
 * File:   main.cpp
 * Author: Steve
 *
 * Created on January 24, 2022, 10:55 AM
 */

#include <cstdlib>
#include <iostream>  //Input/Output Library
#include <iomanip>
#include <math.h>
using namespace std;

//User Libraries

//Global Constants, no Global Variables are allowed
//Math/Physics/Conversions/Higher Dimensions - i.e. PI, e, etc...

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Set the random number seed

    //Declare Variables
    int day;
    //Initialize or input i.e. set variable values
    cin>>day;
    if (day>=1){

    //Map inputs -> outputs
    
    //Display the outputs
cout<<setprecision(2)<<fixed;
cout<<"Pay = $"<<setw(3)<<((pow(2, day)-1)*0.01);
    //Exit stage right or left!
    }
    return 0;
}