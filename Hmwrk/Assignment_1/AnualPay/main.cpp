/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cppFiles/main.cc to edit this template
 */

/* 
 * File:   main.cpp
 * Author: Steve
 *Purpose: To calculate annual pay
 * Created on January 11, 2022, 1:36 PM
 */

#include <cstdlib>
#include <iostream>
#include <iomanip>
using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
//terms
    int amount, //Pay Amount
        periods, //Pay Periods
        annual; //Annual PAy
//Initialize
    amount = 2200.0;
    periods = 26;
//The Math
    annual = amount*periods;
//Display
    cout<<"---Annual Pay---"<<endl;
    cout<<"Pay Amount"<<setw(9)<<"$"<<amount<<endl;
    cout<<"# of Pay Periods"<<setw(5)<<periods<<endl;
    cout<<"Total Pay a Year"<<setw(3)<<"$"<<annual<<endl;
    return 0;
}

