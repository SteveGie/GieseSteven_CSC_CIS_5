/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cppFiles/main.cc to edit this template
 */

/* 
 * File:   main.cpp
 * Author: Steve
 *
 * Created on January 19, 2022, 11:16 AM
 */

#include <iostream>  //Input/Output Library
using namespace std;

//User Libraries

//Global Constants, no Global Variables are allowed
//Math/Physics/Conversions/Higher Dimensions - i.e. PI, e, etc...

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    int roomcap, roommem;
    //Set the random number seed
    
    //Declare Variables
    cout<<"Input the maximum room capacity and the number of people\n";
    cin>>roomcap>>roommem;
    //Initialize or input i.e. set variable values
    if (roomcap<roommem){
        cout<<"Meeting cannot be held.\n"<<"Reduce number of people by "<<roommem-roomcap<<" to avoid fire violation.";
    }
    else if (roomcap>roommem){
        cout<<"Meeting can be held.\n"<<"Increase number of people by "<<roomcap-roommem<<" will be allowed without violation.";
    }
    else
    
    //Map inputs -> outputs
    
    //Display the outputs

    //Exit stage right or left!
    return 0;
}
