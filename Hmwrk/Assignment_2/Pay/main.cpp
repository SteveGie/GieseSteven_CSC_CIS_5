/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cppFiles/main.cc to edit this template
 */

/* 
 * File:   main.cpp
 * Author: Steve
 *
 * Created on January 19, 2022, 11:15 AM
 */

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
    float anpay, nmpay, rase=0.076f, nanpay, rpay; 
    //Declare Variables
    cout<<"Input previous annual salary.\n";
    cin>>anpay;
    //Initialize or input i.e. set variable values
    rpay=(anpay*rase)/2;
    nanpay=rpay*2+anpay;
    nmpay=nanpay/12;
    
    //Map inputs -> outputs
    
    //Display the outputs
cout<<setprecision(2)<<fixed;
cout<<"Retroactive pay"<<setw(7)<<"= $"<<setw(7)<<rpay<<endl;
cout<<"New annual salary"<<setw(5)<<"= $"<<setw(5)<<nanpay<<endl;
cout<<"New monthly salary"<<setw(4)<<"= $"<<setw(7)<<nmpay;
    //Exit stage right or left!
    return 0;
}
