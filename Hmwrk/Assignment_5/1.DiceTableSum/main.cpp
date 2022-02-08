/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cppFiles/main.cc to edit this template
 */

/* 
 * File:   main.cpp
 * Author: Steve
 *
 * Created on February 5, 2022, 7:08 PM
 */

//System Libraries
#include <iostream>  //Input/Output Library
#include <iomanip>   //Format Library
using namespace std;

//User Libraries

//Global Constants, no Global Variables are allowed
//Math/Physics/Conversions/Higher Dimensions - i.e. PI, e, etc...
const int COLS=6;

//Function Prototypes
void fillTbl(int [][COLS],int);
void prntTbl(const int [][COLS],int);

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declare Variables
    const int ROWS=6;
    int tablSum[ROWS][COLS];
    cout<<"Think of this as the Sum of Dice Table\n"<<setw(25)<<"C o l u m n s\n"
        <<"     |   1   2   3   4   5   6\n"<<"----------------------------------\n";
    
    //Initialize or input i.e. set variable values
    fillTbl(tablSum,ROWS);
    
    //Display the outputs
    prntTbl(tablSum,ROWS);
    //Exit stage right or left!
    return 0;
}
void fillTbl(int tablSum[][COLS], int rows){
    for(int r=0; r<rows; r++){
        for(int c=0; c<COLS; c++){
            tablSum[r][c]=c+2+r;
        }
    }
}
void prntTbl(const int tablSum[][COLS], int rows){
    for(int r=0; r<rows; r++){
        switch(r){
            case 1: cout<<"R  "; break;
            case 2: cout<<"O  "; break;
            case 3: cout<<"W  "; break;
            case 4: cout<<"S  "; break;
            default: cout<<"   ";
        }
        cout<<r+1<<" |";
        for(int c=0; c<COLS; c++){
            if(c<COLS)cout<<setw(4);
            cout<<tablSum[r][c];
        }
        cout<<endl;
    }
}
