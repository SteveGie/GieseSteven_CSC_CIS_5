/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cppFiles/main.cc to edit this template
 */

/* 
 * File:   main.cpp
 * Author: Steve
 *
 * Created on January 19, 2022, 11:17 AM
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
    //Set the random number seed
    
    //Declare Variables
    int n1, n2, n3, n4, n5, n6, n7, n8, n9, n10, possum, negsum, totsum; //Input Numbers
    int nn1=0, nn2=0, nn3=0, nn4=0, nn5=0, nn6=0, nn7=0, nn8=0, nn9=0, nn10=0; //negative numbers
    int pn1=0, pn2=0, pn3=0, pn4=0, pn5=0, pn6=0, pn7=0, pn8=0, pn9=0, pn10=0; //positive numbers
    //Initialize or input i.e. set variable value
    cout<<"Input 10 numbers, any order, positive or negative\n";
    cin>>n1>>n2>>n3>>n4>>n5>>n6>>n7>>n8>>n9>>n10;
    //Map inputs -> outputs
    n1>0 ? pn1=n1 : nn1=n1;
    n2>0 ? pn2=n2 : nn2=n2;
    n3>0 ? pn3=n3 : nn3=n3;
    n4>0 ? pn4=n4 : nn4=n4;
    n5>0 ? pn5=n5 : nn5=n5;
    n6>0 ? pn6=n6 : nn6=n6;
    n7>0 ? pn7=n7 : nn7=n7;
    n8>0 ? pn8=n8 : nn8=n8;
    n9>0 ? pn9=n9 : nn9=n9;
    n10>0 ? pn10=n10 : nn10=n10;
    possum=pn1+pn2+pn3+pn4+pn5+pn6+pn7+pn8+pn9+pn10;
    negsum=nn1+nn2+nn3+nn4+nn5+nn6+nn7+nn8+nn9+nn10;
    totsum=n1+n2+n3+n4+n5+n6+n7+n8+n9+n10;
    //Display the outputs
cout<<"Negative sum ="<<setw(4)<<negsum<<endl;
cout<<"Positive sum ="<<setw(4)<<possum<<endl;
cout<<"Total sum"<<setw(5)<<"="<<setw(4)<<totsum;

    //Exit stage right or left!
    return 0;
}

