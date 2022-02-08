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
    float pprice, cprice, prdiff, inflr, y1p, y2p, y1ex, y2ex;
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
    //Calculating year 1
    y1ex=cprice*(inflr/PERCRVT);
    y1p=cprice+y1ex;
    //Calculating year 2
    y2ex=y1p*(inflr/PERCRVT);
    y2p=y1p+y2ex;
    //Displaying calculations
    cout<<setprecision(2)<<fixed;
    cout<<"Inflation rate: "<<inflr<<"%\n"<<endl;
    cout<<"Price in one year: $"<<y1p<<endl;
    cout<<"Price in two year: $"<<y2p<<endl<<endl;
    
    //Again?
    cout<<"Again:\n";
    cin>>ask;
    if(ask=='Y' or ask=='y') cout<<endl;
    
    }while(ask=='Y' or ask=='y');
    //Exit stage right or left!
    return 0;
}