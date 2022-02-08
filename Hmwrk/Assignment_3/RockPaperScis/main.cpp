/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cppFiles/main.cc to edit this template
 */

/* 
 * File:   main.cpp
 * Author: Steve
 *
 * Created on January 19, 2022, 10:47 AM
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
    char p1, p2;
    string tie="Its a tie!", rock="Rock breaks scissors.", pap="Paper covers rock.", sis="Scissors cuts paper." ;
    //Declare Variables
    
    //Initialize or input i.e. set variable values
cout<<"Rock Paper Scissors Game\n"<<"Input Player 1 and Player 2 Choices\n";
cin>>p1>>p2;
    if(p1=='R' or p1=='r'){ //Player 1 Rock
        if(p2=='R' or p2 =='r') cout<<tie;
        else if (p2=='P' or p2=='p') cout<<pap;
        else if (p2=='S' or p2=='s') cout<<rock;
    }
    else if(p1=='P' or p1=='p'){ //Player 1 Paper
        if(p2=='P' or p2=='p') cout<<tie;
        else if (p2=='R' or p2=='r')cout<<pap;
        else if (p2=='S' or p2=='s')cout<<sis;
    }
     else if(p1=='S' or p1=='s'){ //Player 1 Paper
        if(p2=='S' or p2=='s') cout<<tie;
        else if (p2=='R' or p2=='r')cout<<rock;
        else if (p2=='P' or p2=='p')cout<<pap;
    }
    else{
        cout<<"Invalid Input! Please use r, p, or c.";
    }
    //Map inputs -> outputs
    
    //Display the outputs

    //Exit stage right or left!
    return 0;
}