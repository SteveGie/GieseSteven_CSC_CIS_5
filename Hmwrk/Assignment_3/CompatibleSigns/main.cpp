/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cppFiles/main.cc to edit this template
 */

/* 
 * File:   main.cpp
 * Author: Steve
 *
 * Created on January 19, 2022, 10:51 AM
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
    string in1, in2;
    //Initialize or input i.e. set variable values
    cout<<"Horoscope Program which examines compatible signs.\n"<<"Input 2 signs.\n";
    cin>>in1>>in2;
    //Map inputs -> outputs
    if (in1=="Aries" or in1=="Leo" or in1=="Sagittarius"){
        if(in2=="Aries" or in2=="Leo" or in2=="Sagittarius") cout<<in1<<" and "<<in2<<" are compatible Fire signs.";
        else cout<<in1<<" and "<<in2<<" are not compatible signs.";
    }
    else if (in1=="Taurus" or in1=="Virgo" or in1=="Capricorn"){
        if (in2=="Taurus" or in2=="Virgo" or in2=="Capricorn") cout<<in1<<" and "<<in2<<" are compatible Earth signs.";
        else cout<<in1<<" and "<<in2<<" are not compatible signs.";
    }
    else if (in1=="Gemini" or in1=="Libra" or in1=="Aquarius"){
        if (in2=="Gemini" or in2=="Libra" or in2=="Aquarius") cout<<in1<<" and "<<in2<<" are compatible Air signs.";
        else cout<<in1<<" and "<<in2<<" are not compatible signs.";
    }
    else if (in1=="Cancer" or in1=="Scorpio" or in1=="Pisces"){
        if (in2=="Cancer" or in2=="Scorpio" or in2=="Pisces") cout<<in1<<" and "<<in2<<" are compatible Water signs.";
        else cout<<in1<<" and "<<in2<<" are not compatible signs.";
    }
    else cout<<"Bruh, "<<in1<<" and "<<in2<<" aren't Horoscope signs!";
    //Exit stage right or left!
    return 0;
}
