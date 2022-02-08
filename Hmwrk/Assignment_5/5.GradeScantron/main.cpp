/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cppFiles/main.cc to edit this template
 */

/* 
 * File:   main.cpp
 * Author: Steve
 *
 * Created on February 5, 2022, 7:11 PM
 */

#include <iostream>  //Input/Output Library
#include <iomanip>
#include <fstream>   //File I/O
#include <string.h>    //String Library
using namespace std;
void pullfi(char [], int, string);
int compare(char[], char[], char[], int);
void print(char [], int);
/*
 * 
 */
int main(int argc, char** argv) {
    int size=20;
    float numcor=0;
    char key[size], ans[size], CorAWro[size];
    string keyfi="anskey.txt", ansfi="ans.txt";
    //Pulling from file
    pullfi(key,size,keyfi);
    //Answers
    pullfi(ans,size,ansfi);
    //Comparing
    numcor=compare(key,ans,CorAWro,size);
    //Print
    cout<<"C/W     "; print(CorAWro, size);
    cout<<"Percentage Correct = "<<(numcor/size)*100<<"%\n";
    return 0;
}
void pullfi(char items[], int size, string finame){
    fstream file;
    file.open(finame);
    for(int i=0; i<size; i++) file>>items[i];
    file.close();
}
int compare(char key[], char ans[], char CorWro[], int size){
    float corr=0;
    for(int i=0; i<size; i++){
       if(key[i]==ans[i]){
           CorWro[i]='C';
           corr++;
       }
       else CorWro[i]='W';
    }
    return corr;
}
void print(char item[], int size){
    for(int i=0; i<size; i++) cout<<item[i]<<" ";
    cout<<endl;
}