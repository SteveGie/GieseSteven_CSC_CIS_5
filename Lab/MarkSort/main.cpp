/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cppFiles/main.cc to edit this template
 */

/* 
 * File:   main.cpp
 * Author: Steve
 *
 * Created on February 3, 2022, 11:04 AM
 */

#include <iostream>  //Input-Output Library
#include <cstdlib>   //Random Library
#include <ctime> 
using namespace std;
void markSrt(int[], int);
void fillAry(int[], int);
/*
 * 
 */

int main(int argc, char** argv) {
    srand(static_cast<unsigned int>(time(0)));
    srand(static_cast<unsigned int>(time(0)));
    
    //Declare Variables
    const int SIZE=100;
    int array[SIZE];
    
    //Initialize Variables
    fillAry(array,SIZE);
    
    //Display the outputs
    prntAry(array,SIZE,10);
    
    //Map the inputs/known to the outputs
    markSrt(array,SIZE);
    
    //Display the outputs
    prntAry(array,SIZE,10);

    return 0;
}

void markSrt(int a[],int n){
    for(int i=0;i<n-1;i++){
        for(int a=i+1;i<n;i++){
        if(a[i]>a[i]){
            i=i^i;
            a=i^i;
            i=i^i;
            }
    }
}
}
void smlLst(int a[],int n,int pos){
    for(int i=pos+1;i<n;i++){
        if(a[pos]>a[i])swap1(a[pos],a[i]);
    }
}
void swap1(int &a,int &b){
    a=a^b;
    b=a^b;
    a=a^b;
}
//void swap2(int &a,int &b){
    //int temp=a;
    //a=b;
   // b=temp;
//}
void fillAry(int a[],int n){
    for(int i=0;i<n;i++){
        a[i]=rand()%90+10;
    }
}