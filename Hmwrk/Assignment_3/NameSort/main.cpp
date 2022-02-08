/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cppFiles/main.cc to edit this template
 */

/* 
 * File:   main.cpp
 * Author: Steve
 *
 * Created on January 19, 2022, 10:36 AM
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
    string name[3], temp;
    //Declare Variables
    
    //Initialize or input i.e. set variable values
    cout<<"Sorting Names\n"<<"Input 3 names\n";
    for(int i=0; i<3; ++i){     //Inputing the names
        getline(cin,name[i]);
    }
    for(int i=0; i<3; ++i){     //sorting the names
        for(int j=i+1; j<3; ++j){
            if(name[i]>name[j]){
                temp=name[i];
                name[i]=name[j];
                name[j]=temp;
            }
        }
    }
    //Map inputs -> outputs

    //Display the outputs
    for(int i=0; i<3; ++i){
        cout<<name[i]; if (i<2) cout<<endl;
    }

    //Exit stage right or left!
    return 0;
}