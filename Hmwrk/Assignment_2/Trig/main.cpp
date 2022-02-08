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
#include <cmath>
#include <iomanip>
#define PI 3.14159265
using namespace std;

//User Libraries

//Global Constants, no Global Variables are allowed
//Math/Physics/Conversions/Higher Dimensions - i.e. PI, e, etc...

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Set the random number seed
    
    //Declare Variables
    float in;
    cout<<"Calculate trig functions\n"<<"Input the angle in degrees.\n";
    cin>>in;
    //Initialize or input i.e. set variable values
    
    //Map inputs -> outputs
    cout<<"sin("<<in<<") = "<<setprecision(4)<<fixed<<sin(in*PI/180)<<setprecision(0)<<fixed<<endl;
    cout<<"cos("<<in<<") = "<<setprecision(4)<<fixed<<cos(in*PI/180)<<setprecision(0)<<fixed<<endl;
    cout<<"tan("<<in<<") = "<<setprecision(4)<<fixed<<tan(in*PI/180)<<setprecision(0)<<fixed;
    //Display the outputs

    //Exit stage right or left!
    return 0;
}