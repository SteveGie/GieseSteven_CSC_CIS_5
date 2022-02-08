/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cppFiles/main.cc to edit this template
 */

/* 
 * File:   main.cpp
 * Author: Steve
 *
 * Created on January 24, 2022, 10:51 AM
 */

#include <cstdlib>
#include <iostream>  //Input/Output Library
using namespace std;

//User Libraries

//Global Constants, no Global Variables are allowed
//Math/Physics/Conversions/Higher Dimensions - i.e. PI, e, etc...

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Set the random number seed
    
    //Declare Variables
    int in, out=0;
    //Initialize or input i.e. set variable values
    cin>>in;
    //Map inputs -> outputs
    for (int i=0; i<=in; ++i){
        out=out+i;
    }
    //Display the outputs
cout<<"Sum = "<<out;
    //Exit stage right or left!
    return 0;
}

