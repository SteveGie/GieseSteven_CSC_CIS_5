/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cppFiles/main.cc to edit this template
 */

/* 
 * File:   main.cpp
 * Author: Steve
 *
 * Created on January 24, 2022, 1:11 PM
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
const float PERCRVT=100;
int main(int argc, char** argv) {
    //Set the random number seed
    
    //Declare Variables
    float pprice, cprice, prdiff, inflr;
    char ask;
    //Initialize or input i.e. set variable values
    do{
    //Asking for input
    cout<<"Enter current price:\n";
    cin>>cprice;
    cout<<"Enter year-ago price:\n";
    cin>>pprice;
    //Doing the calculations
    prdiff=cprice-pprice;
    inflr=(prdiff/pprice)*PERCRVT;
    //Displaying calculations
    cout<<setprecision(2)<<fixed;
    cout<<"Inflation rate: "<<inflr<<"%\n"<<endl;
    cout<<"Again:\n";
    cin>>ask;
    if(ask=='Y' or ask=='y') cout<<endl;
    
    }while(ask=='Y' or ask=='y');
    //Exit stage right or left!
    return 0;
}
