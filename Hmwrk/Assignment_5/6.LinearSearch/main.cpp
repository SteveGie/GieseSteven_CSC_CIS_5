/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cppFiles/main.cc to edit this template
 */

/* 
 * File:   main.cpp
 * Author: Steve
 *
 * Created on February 5, 2022, 7:12 PM
 */

#include <iostream>  //Input/Output Library
#include <cstdlib>   //Random Functions
#include <ctime>     //Time Library
using namespace std;

//User Libraries

//Global Constants, no Global Variables are allowed
//Math/Physics/Conversions/Higher Dimensions - i.e. PI, e, etc...

//Function Prototypes
void fillAry(int [],int);
void prntAry(int [],int,int);
bool linSrch(int [],int,int,int&);

//Execution Begins Here!
int main(int argc, char** argv) {
    //Set the random number seed
    srand(static_cast<unsigned int>(time(0)));
    
    //Declare Variables
    const int SIZE=100;
    int array[SIZE];
    int indx=0,val;
    
    //Initialize or input i.e. set variable values
    val=50;
    fillAry(array,SIZE);
    
    //Display the outputs
    //prntAry(array,SIZE,10);
    if(linSrch(array,SIZE,val,indx))
        cout<<val<<" was found at indx = "<<indx<<endl;
    
    //Exit stage right or left!
    return 0;
}
void fillAry(int array[], int size){
    for(int i=0; i<size; i++) cin>>array[i];
}
void prntAry(int array[], int size, int col){
    for(int i=0; i<size;i++){
        cout<<array[i]<<" ";
        if((i+1)%col==0) cout<<endl;
    }
}
bool linSrch(int array[], int size, int val, int &indx){
    bool found=false;
    for(int i=0; i<size; i++){
        if(array[i]==val){
            found=true;
            indx=i;
            break;
        }
    }
    return found;
}
