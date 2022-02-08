/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cppFiles/main.cc to edit this template
 */

/* 
 * File:   main.cpp
 * Author: Steve
 *
 * Created on January 19, 2022, 10:50 AM
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
    int in, n1, n10, n100, n1000;
    string r1="", r10="", r100="", r1000="";
    //Set the random number seed
    
    //Declare Variables
    //Initialize or input i.e. set variable values
    cout<<"Arabic to Roman numeral conversion.\n"<<"Input the integer to convert.\n";
    cin>>in;
    if (in>3000 or in<1000) cout<<in<<" is Out of Range!";
    else{
    cout<<in<<" is equal to ";
    //Map inputs -> outputs
    n1=in%10, n10=(in/10)%10, n100=(in/100)%10, n1000=(in/1000)%10;

        switch (n1000){
        case 1 : cout<<"M";
        break;
        case 2 : cout<<"MM";
        break;
        case 3 : cout<<"MMM";
        break;
        default : cout<<"";
    }   
        switch (n100){
        case 1 : cout<<"C";
        break;
        case 2 : cout<<"CC";
        break;
        case 3 : cout<<"CCC";
        break;
        case 4 : cout<<"CD";
        break;
        case 5 : cout<<"D";
        break;
        case 6 : cout<<"DC";
        break;
        case 7 : cout<<"DCC";
        break;
        case 8 : cout<<"DCCC";
        break;
        case 9 : cout<<"CM";
        break;
        default : cout<<"";
    }
        switch (n10){
        case 1 : cout<<"X";
        break;
        case 2 : cout<<"XX";
        break;
        case 3 : cout<<"XXX";
        break;
        case 4 : cout<<"XL";
        break;
        case 5 : cout<<"L";
        break;
        case 6 : cout<<"LX";
        break;
        case 7 : cout<<"LXX";
        break;
        case 8 : cout<<"LXXX";
        break;
        case 9 : cout<<"XC";
        break;
        default : cout<<"";
    }
        switch (n1){
        case 1 : cout<<"I";
        break;
        case 2 : cout<<"II";
        break;
        case 3 : cout<<"III";
        break;
        case 4 : cout<<"IV";
        break;
        case 5 : cout<<"V";
        break;
        case 6 : cout<<"VI";
        break;
        case 7 : cout<<"VII";
        break;
        case 8 : cout<<"VIII";
        break;
        case 9 : cout<<"IX";
        break;
        default : cout<<"";
    }
    
    }
    //Display the outputs
    //Exit stage right or left!
    return 0;
}