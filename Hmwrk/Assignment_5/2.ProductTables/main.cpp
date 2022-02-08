/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cppFiles/main.cc to edit this template
 */

/* 
 * File:   main.cpp
 * Author: Steve
 *
 * Created on February 5, 2022, 7:09 PM
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
    int tblProd[ROWS][COLS];
    
    //Initialize or input i.e. set variable values
    fillTbl(tblProd,ROWS);
    
    //Display the outputs
    prntTbl(tblProd,ROWS);

    //Exit stage right or left!
    return 0;
}
void fillTbl(int tablSum[][COLS], int rows){
    for(int r=0; r<rows; r++){
        for(int c=0; c<COLS; c++){
            tablSum[r][c]=(r+1)*(c+1);
        }
    }
}
void prntTbl(const int tablSum[][COLS], int rows){
    cout<<"Think of this as a Product/Muliplication Table\n"<<setw(25)<<"C o l u m n s\n";
    cout<<"     |   1   2   3   4   5   6\n----------------------------------\n";
    for(int r=0; r<rows; r++){
        if(r==1) cout<<"R  ";
        else if(r==2) cout<<"O  ";
        else if(r==3) cout<<"W  ";
        else if(r==4) cout<<"S  ";
        else cout<<"   ";
        cout<<r+1<<" |";
        for(int c=0; c<COLS; c++){
            if(c<COLS)cout<<setw(4);
            cout<<tablSum[r][c];
        }
        cout<<endl;
    }
}
