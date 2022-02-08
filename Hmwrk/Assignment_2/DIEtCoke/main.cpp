/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cppFiles/main.cc to edit this template
 */

/* 
 * File:   main.cpp
 * Author: Steve
 *
 * Created on January 19, 2022, 11:13 AM
 */

#include <iostream>  //Input/Output Library
#include<iomanip>
using namespace std;

//User Libraries

//Global Constants, no Global Variables are allowed
//Math/Physics/Conversions/Higher Dimensions - i.e. PI, e, etc...

//Function Prototypes

//Execution Begins Here!
float CNV=453.592;
int main(int argc, char** argv) {
    //Set the random number seed
    
    //Declare Variables
    float mousem=35, //Mass of mouse
        mkm=5,    //Mass of sweetner to kill a mouse
        sodag=350.0f,//Mass of one soda can
        sweetc=0.001f,//concentrate per can
        friendw,    //Target wieght of friend in pounds
        friendg,    //Wight of friend in grams
        mrc,        //mouse gram to human gram ration converter
        tsweetg,    //total sweetner grams to kill
        tcangk,     //total grams of soda to kill
        tcank;     //total amount of cans to kill
    //Initialize or input i.e. set variable values
    cout<<"Program to calculate the limit of Soda Pop Consumption.\n"<<"Input the desired dieters weight in lbs.\n";
    cin>>friendw;
    //Map inputs -> outputs
    friendg=friendw*CNV;
    mrc=friendg/mousem;
    tsweetg=mkm*mrc;
    tcangk=tsweetg/sweetc;
    tcank=tcangk/sodag;
    
    //Display the outputs
    cout<<setprecision(0)<<fixed;
cout<<"The maximum number of soda pop cans\n"<<"which can be consumed is "<<tcank-1<<" cans";
    //Exit stage right or left!
    return 0;
}
