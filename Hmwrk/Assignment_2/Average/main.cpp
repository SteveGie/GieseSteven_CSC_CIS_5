/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cppFiles/main.cc to edit this template
 */

/* 
 * File:   main.cpp
 * Author: Steve
 *
 * Created on January 19, 2022, 11:09 AM
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
    float n1, n2, n3, n4, n5, sum;
    //Initialize or input i.e. set variable values
    cin>>n1>>n2>>n3>>n4>>n5;
    //Map inputs -> outputs
    sum = (n1 + n2+ n3+ n4+ n5)/5;
    //Display the outputs
cout<<"Input 5 numbers to average.\n"<<"The average = "<<setprecision(1)<<fixed<<sum;
    //Exit stage right or left!
    return 0;
}