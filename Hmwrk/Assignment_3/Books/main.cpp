/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cppFiles/main.cc to edit this template
 */

/* 
 * File:   main.cpp
 * Author: Steve
 *
 * Created on January 19, 2022, 10:38 AM
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
    int book, point;
    //Set the random number seed
    
    //Declare Variables
    
    //Initialize or input i.e. set variable values
    cout<<"Book Worm Points\n"<<"Input the number of books purchased this month.\n";
    cin>>book;
    //Map inputs -> outputs
    if (book<=0) point=0;
    else if (book==1) point=5;
    else if (book==2) point=15;
    else if (book==3) point=30;
    else if (book>=4) point=60;
    //Display the outputs
    cout<<"Books purchased"<<setw(2)<<"="<<setw(3)<<book<<endl;
    cout<<"Points earned"<<setw(4)<<"="<<setw(3)<<point;
    //Exit stage right or left!
    return 0;
}