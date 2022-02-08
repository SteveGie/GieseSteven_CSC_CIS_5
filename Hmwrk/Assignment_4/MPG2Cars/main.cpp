/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cppFiles/main.cc to edit this template
 */

/* 
 * File:   main.cpp
 * Author: Steve
 *
 * Created on January 24, 2022, 1:09 PM
 */

#include <cstdlib>
#include <iostream>  //Input/Output Library
#include <iomanip>
using namespace std;

//User Libraries

//Global Constants, no Global Variables are allowed
//Math/Physics/Conversions/Higher Dimensions - i.e. PI, e, etc...

//Function Prototypes
const float LPG=0.264179;
//Execution Begins Here!
int main(int argc, char** argv) {
    //Set the random number seed
    
    //Declare Variables
    float mpg1, mpg2, lit1, lit2, miles1, miles2, gal1, gal2;
    char ask;
    //Initialize or input i.e. set variable values
    do{
        //Car 1
        cout<<"Car 1\n"<<"Enter number of liters of gasoline:\n";
        cin>>lit1;
        cout<<"Enter number of miles traveled:\n";
        //Car 1 calulations
        cin>>miles1;
        gal1=lit1*LPG;
        mpg1=miles1/gal1;
        //Car 1 Outputs
        cout<<setprecision(2)<<fixed;
        cout<<"miles per gallon: "<<mpg1<<endl<<endl;
        /*
        *Car 2 
        */
        cout<<"Car 2\n"<<"Enter number of liters of gasoline:\n";
        cin>>lit2;
        cout<<"Enter number of miles traveled:\n";
        //Car 2 calulations
        cin>>miles2;
        gal2=lit2*LPG;
        mpg2=miles2/gal2;
        //Car 2 Outputs
        cout<<setprecision(2)<<fixed;
        cout<<"miles per gallon: "<<mpg2<<endl<<endl;
        //Which is more efficient? (less)
        if(mpg1>mpg2) cout<<"Car 1 is more fuel efficient\n"<<endl;
        else if (mpg2>mpg1) cout<<"Car 2 is more fuel efficient\n"<<endl;
        else cout<<"Both cars are equally efficient\n"<<endl;
        //Asking again?
        cout<<"Again:\n";
        cin>>ask;
        if(ask=='Y' or ask=='y') cout<<endl;
    }while(ask=='Y' or ask=='y');
    //Exit stage right or left!
    return 0;
}
