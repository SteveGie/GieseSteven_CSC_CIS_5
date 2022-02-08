/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cppFiles/main.cc to edit this template
 */

/* 
 * File:   main.cpp
 * Author: Steve
 *
 * Created on January 24, 2022, 10:59 AM
 */

#include <cstdlib>
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
    int inn;
    char inc;
    //Initialize or input i.e. set variable values
    cin>>inn>>inc;
    //Map inputs -> outputs
    for(int i=0; i<inn; i++){
        for(int a=0; a<inn; a++){
            cout<<inc;
        }
        if(i<inn-1){
            cout<<endl;
        }
    }
    //Display the outputs

    //Exit stage right or left!
    return 0;
}