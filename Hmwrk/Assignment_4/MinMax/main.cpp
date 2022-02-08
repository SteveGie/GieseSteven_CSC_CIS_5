/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cppFiles/main.cc to edit this template
 */

/* 
 * File:   main.cpp
 * Author: Steve
 *
 * Created on January 24, 2022, 10:58 AM
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
    int in, min=2147483647, max=-2147483648;
    //Initialize or input i.e. set variable value
    while(in!=-99){
        cin>>in;
        if(in!=-99){
            if(in<min) min=in;
            if(in>max) max=in;
        }
    }
    //Map inputs -> outputs
cout<<"Smallest number in the series is "<<min<<endl;
cout<<"Largest  number in the series is "<<max;
    //Display the outputs

    //Exit stage right or left!
    return 0;
}