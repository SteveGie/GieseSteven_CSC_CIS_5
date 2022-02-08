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

#include <iostream>  //Input/Output Library
#include <cstdlib>   //Srand
#include <ctime>     //Time to set random number seed
#include <cmath>     //Math Library
#include <iomanip>   //Format Library
using namespace std;

//User Libraries

//Global Constants, no Global Variables are allowed
//Math/Physics/Conversions/Higher Dimensions - i.e. PI, e, etc...
const float MAXRAND=pow(2,31)-1;

//Function Prototypes
void  init(float [],int);//Initialize the array
void  print(float [],int,int);//Print the array
float avgX(float [],int);//Calculate the Average
float stdX(float [],int);//Calculate the standard deviation

//Execution Begins Here!
int main(int argc, char** argv) {
    //Set the random number seed
    srand(static_cast<unsigned>(time(0)));
    
    //Declare Variables
    const int SIZE=20;
    float test[SIZE];
    
    //Initialize or input i.e. set variable values
    init(test,SIZE);
    
    //Display the outputs
    //print(test,SIZE,5);
    cout<<setprecision(7)<<fixed;
    cout<<"The average            = "<<avgX(test,SIZE)<<endl;
    cout<<"The standard deviation = "<<stdX(test,SIZE)<<endl;

    //Exit stage right or left!
    return 0;
}
void init(float test[], int size){
    for(int i=0; i<size; i++) cin>>test[i];
}
void print(float test[], int size, int col){
 
}
float avgX(float test[], int size){
    float mean=0;
    for(int i=0;i<size;i++) mean+=test[i];
    mean=mean/size;
    return mean;
}
float stdX(float test[], int size){
    float std=0, sum=0;
    for(int i=0;i<size;i++) sum+=pow((test[i]-avgX(test,size)), 2);
    std=sqrt(sum/(size-1));
    return std;
}
