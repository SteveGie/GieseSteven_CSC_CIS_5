/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cppFiles/main.cc to edit this template
 */

/* 
 * File:   main.cpp
 * Author: Steve
 *
 * Created on January 19, 2022, 10:44 AM
 */

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
    string name1, name2, name3;
    int t1, t2, t3;
    //Initialize or input i.e. set variable values
    do{
        cout<<"Race Ranking Program\n"<<"Input 3 Runners\n"<<"Their names, then their times\n";
        cin>>name1>>t1;
        cin>>name2>>t2;
        cin>>name3>>t3;
    }
    while(t1<0 or t2<0 or t3<0);
    //Map inputs -> outputs
    if (t1<t2 && t1<t3){
        cout<<name1<<"\t"<<setw(3)<<t1<<endl;
        if (t2<t3){
            cout<<name2<<"\t"<<setw(3)<<t2<<endl;
            cout<<name3<<"\t"<<setw(3)<<t3;
        }
        else if(t3<t2){
            cout<<name3<<"\t"<<setw(3)<<t3<<endl;
            cout<<name2<<"\t"<<setw(3)<<t2;
        }
    }
    else if (t2<t1 && t2<t3){
        cout<<name2<<"\t"<<setw(3)<<t2<<endl;
        if(t1<t3){
            cout<<name1<<"\t"<<setw(3)<<t1<<endl;
            cout<<name3<<"\t"<<setw(3)<<t3;
        }
        else if(t3<t1){
            cout<<name3<<"\t"<<setw(3)<<t3<<endl;
            cout<<name1<<"\t"<<setw(3)<<t1;
        }
    }
    else if (t3<t2 && t3<t1){
        cout<<name3<<"\t"<<setw(3)<<t3<<endl;
        if(t2<t1){
            cout<<name2<<"\t"<<setw(3)<<t2<<endl;
            cout<<name1<<"\t"<<setw(3)<<t1;
        }
        else if (t1<t2){
            cout<<name1<<"\t"<<setw(3)<<t1<<endl;
            cout<<name2<<"\t"<<setw(3)<<t2;
        }
    }
    //Display the outputs
    //Exit stage right or left!
    return 0;
}