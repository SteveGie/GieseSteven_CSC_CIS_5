/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cppFiles/main.cc to edit this template
 */

/* 
 * File:   main.cpp
 * Author: Steve
 *
 * Created on January 24, 2022, 1:13 PM
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
    float in1, in2, in3, par2=1.175494351e-38, par3=1.175494351e-38;
    //Initialize or input i.e. set variable values
    cout<<"Enter first number:\n"<<endl;
    cin>>in1;
    if(in1>par2) par2=in1;
    if(in1>par3) par3=in1;
    cout<<"Enter Second number:\n"<<endl;
    cin>>in2;
    if(in2>par2) par2=in2;
    if(in2>par3) par3=in2;
    cout<<"Enter third number:\n"<<endl;
    cin>>in3;
    if(in3>par3) par3=in3;
    //Map inputs -> outputs
    cout<<"Largest number from two parameter function:\n"<<par2<<endl<<endl;
    cout<<"Largest number from three parameter function:\n"<<par3<<endl;
    //Display the outputs

    //Exit stage right or left!
    return 0;
}

