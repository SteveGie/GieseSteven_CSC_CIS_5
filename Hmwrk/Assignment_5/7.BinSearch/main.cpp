/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cppFiles/main.cc to edit this template
 */

/* 
 * File:   main.cpp
 * Author: Steve
 *
 * Created on February 5, 2022, 7:13 PM
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
void selSrt(int [],int);
bool binSrch(int [],int,int,int&);

//Execution Begins Here!
int main(int argc, char** argv) {
    //Set the random number seed
    srand(static_cast<unsigned int>(time(0)));
    
    //Declare Variables
    const int SIZE=100;
    int array[SIZE];
    int indx,val;
    
    //Initialize or input i.e. set variable values
    fillAry(array,SIZE);

    //Sorted List
    selSrt(array,SIZE);
    
    //Display the outputs
    prntAry(array,SIZE,10);
    cout<<"Input the value to find in the array"<<endl;
    cin>>val;
    if(binSrch(array,SIZE,val,indx))
        cout<<val<<" was found at indx = "<<indx<<endl;

    //Exit stage right or left!
    return 0;
}
void fillAry(int array[], int size){
    for(int i=0; i<size;i++) cin>>array[i];
}
void selSrt(int array[], int size){
    for(int pos=0; pos<size-1;pos++){
        for(int i=pos+1;i<size;i++){
            if(array[pos]>array[i]){
                array[pos]=array[pos]^array[i];
                array[i]=array[pos]^array[i];
                array[pos]=array[pos]^array[i];
            }
        }
    }
}
void prntAry(int array[], int size, int col){
    for(int i=0; i<size;i++){
        cout<<array[i]<<" ";
        if((i+1)%col==0) cout<<endl;
    }
    cout<<endl;
}
bool binSrch(int array[], int size, int val, int &indx){
    int high=size-1, low=0;
    do{
        int middle=(high+low)/2;
        if(val==array[middle]){
            indx=middle;
            return true;  
        }
        else if(val<array[middle]) high=middle-1;
        else low=middle+1;
    }while(low<high);
    return false;
}

