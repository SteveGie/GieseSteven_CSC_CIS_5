/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cppFiles/main.cc to edit this template
 */

/* 
 * File:   main.cpp
 * Author: Steve
 *
 * Created on January 19, 2022, 11:11 AM
 */

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
    //house, percent covered, amount covered
float housec, insrt = .8, insamt;
    //Initialize or input i.e. set variable values
    cout<<"Insurance Calculator\n"<<"How much is your house worth?\n";
    cin>>housec;
    insamt = housec*insrt;
    //Map inputs -> outputs
    
    //Display the outputs
cout<<"You need $"<<insamt<<" of insurance.";
    //Exit stage right or left!
    return 0;
}
