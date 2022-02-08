/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cppFiles/main.cc to edit this template
 */

/* 
 * File:   main.cpp
 * Author: Steve
 *
 * Created on February 5, 2022, 7:10 PM
 */

//System Libraries
#include <iostream>  //Input/Output Library
#include <cstdlib>   //Srand
#include <ctime>     //Time to set random number seed
#include <cmath>     //Math Library
#include <iomanip>   //Format Library
using namespace std;

//User Libraries

//Global Constants, no Global Variables are allowed
//Math/Physics/Conversions/Higher Dimensions - i.e. PI, e, etc...

//Function Prototypes
void  init(int [],int);//Initialize the array
void  print(int [],int,int);//Print the array
void  revrse(int [],int);;//Reverse the array


//Execution Begins Here!
int main(int argc, char** argv) {
    //Set the random number seed
    srand(static_cast<unsigned>(time(0)));
    
    //Declare Variables
    const int SIZE=50;
    int test[SIZE];
    
    //Initialize or input i.e. set variable values
    init(test,SIZE);
    
    //Display the outputs
   // print(test,SIZE,10);
    
    //Reverse the Values
    revrse(test,SIZE);
    //Display the outputs
    print(test,SIZE,10);

    //Exit stage right or left!
    return 0;
}
void init(int test[],int size){
    for(int i=0;i<size;i++){
        cin>>test[i];
    }
}
void print(int test[], int size, int colMax){
    for(int i=0; i<size; i++){
        cout<<test[i]<<" ";
        if((i+1)%colMax==0) cout<<endl;
    }
}
void revrse(int test[], int size){
    int re=size-1, rev[size];
    for(int i=0; i<size;i++){
        rev[i]=test[re];
        re--;
    }
    for(re=0;re<size;re++){
        test[re]=rev[re];
    }
}
