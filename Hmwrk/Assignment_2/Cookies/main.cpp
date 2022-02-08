/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cppFiles/main.cc to edit this template
 */

/* 
 * File:   main.cpp
 * Author: Steve
 *
 * Created on January 19, 2022, 11:10 AM
 */

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
    //  total cal,  totalcookies, total servings, cal per serv, cookies in a serving, eaten cookies, total eatan callories
    int tcal = 300, //total callories
        tserv = 10, //total servings
        tcook = 40, //total number of cookies
        eatcook,    //number of cookies eaten
        serv,       //Amount of cookies in one servings
        cal,        //Amount of callories per cookies
        teaten;     //Amount of callories eaten
serv = tcook/tserv, cal = tcal/serv;
cout<<"Calorie Counter\n"<<"How many cookies did you eat?\n";
cin>>eatcook;
teaten = eatcook*cal;
    //Map inputs -> outputs
cout<<"You consumed "<<teaten<<" calories.";
    //Display the outputs

    //Exit stage right or left!
    return 0;
}
