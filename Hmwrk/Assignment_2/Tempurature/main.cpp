/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cppFiles/main.cc to edit this template
 */

/* 
 * File:   main.cpp
 * Author: Steve
 *
 * Created on January 19, 2022, 11:12 AM
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
float F, C;
  cout<<"Temperature Converter\n"<<"Input Degrees Fahrenheit\n";
  cin>>F;
    //Initialize or input i.e. set variable values

    //Map inputs -> outputs
    C=(F-32)*5/9;
    //Display the outputs
cout<<setprecision(1)<<fixed<<F<<" Degrees Fahrenheit = "<<C<<" Degrees Centigrade";
    //Exit stage right or left!
    return 0;
}
