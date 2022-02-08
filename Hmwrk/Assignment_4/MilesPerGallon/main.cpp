/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cppFiles/main.cc to edit this template
 */

/* 
 * File:   main.cpp
 * Author: Steve
 *
 * Created on January 24, 2022, 1:04 PM
 */

#include <cstdlib>
#include <iostream>  //Input/Output Library
#include <iomanip>
using namespace std;

//User Libraries

//Global Constants, no Global Variables are allowed
//Math/Physics/Conversions/Higher Dimensions - i.e. PI, e, etc...

//Function Prototypes
const float LPG=0.264179;
//Execution Begins Here!
int main(int argc, char** argv) {
    //Set the random number seed
    
    //Declare Variables
    float mpg, lit, miles, gal;
    char ask;
    //Initialize or input i.e. set variable values
    do{
        cout<<"Enter number of liters of gasoline:\n"<<endl;
        cin>>lit;
        cout<<"Enter number of miles traveled:\n"<<endl;
        //Map inputs -> outputs
        cin>>miles;
        gal=lit*LPG;
        mpg=miles/gal;
        //Display the outputs
        cout<<setprecision(2)<<fixed;
        cout<<"miles per gallon:\n"<<mpg<<endl;
        cout<<"Again:\n";
        cin>>ask;
        if(ask=='Y' or ask=='y') cout<<endl;
    }while(ask=='Y' or ask=='y');
    //Exit stage right or left!
    return 0;
}