/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cppFiles/main.cc to edit this template
 */

/* 
 * File:   main.cpp
 * Author: Steve
 *
 * Created on January 24, 2022, 1:03 PM
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
    int i, in, ahold=1;
    //Initialize or input i.e. set variable values
    cin>>in;
    //Map inputs -> outputs
    for(i=0;i<in; i++){
        for(int a=ahold; a>0; a--){
            cout<<"+";
        }
        ahold++;
        cout<<endl;
        cout<<endl;
    }
    ahold=in;
    for(; i>0; i--){
        for(int a=ahold; a>0; a--){
            cout<<"+";
        }
        ahold--;
        if(i>1){
            cout<<endl;
            cout<<endl;
        }
    }
    //Display the outputs
    //Exit stage right or left!
    return 0;
}
using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {

    return 0;
}

