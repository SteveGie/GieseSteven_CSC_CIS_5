/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cppFiles/main.cc to edit this template
 */

/* 
 * File:   main.cpp
 * Author: Steve
 *
 * Created on January 19, 2022, 10:42 AM
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
    float bal, mfee=10, cfee, pnbal, tcfee, nbal, lbfee=0;
    int check;
    //Initialize or input i.e. set variable values
    cout<<"Monthly Bank Fees\n"<<"Input Current Bank Balance and Number of Checks\n";
    cin>>bal>>check;
    if (bal<400) lbfee=15;
    if (check<20) cfee=0.10f;
    else if (check<40) cfee=0.08f;
    else if (check<60) cfee=0.06f;
    else cfee=0.04f;
    tcfee=static_cast<float>(check)*cfee;
    nbal=bal-lbfee-tcfee-mfee;
    //Map inputs -> outputs
    
    //Display the outputs
cout<<setprecision(2)<<fixed;
cout<<"Balance"<<setw(6)<<"$"<<setw(9)<<bal<<endl;
cout<<"Check Fee"<<setw(4)<<"$"<<setw(9)<<tcfee<<endl;
cout<<"Monthly Fee"<<setw(2)<<"$"<<setw(9)<<mfee<<endl;
cout<<"Low Balance"<<setw(2)<<"$"<<setw(9)<<lbfee<<endl;
cout<<"New Balance"<<setw(2)<<"$"<<setw(9)<<nbal;
    //Exit stage right or left!
    return 0;
}

