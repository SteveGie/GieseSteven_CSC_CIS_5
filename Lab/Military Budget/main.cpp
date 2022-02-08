/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cppFiles/main.cc to edit this template
 */

/* 
 * File:   main.cpp
 * Author: Steve
 *
 * Created on January 13, 2022, 4:13 PM
 */

#include <cstdlib>
#include <iostream>
#include <iomanip>

using namespace std;

/*
 * 
 */
const unsigned char CNVPERC=100; //Convert to percentage
int main(int argc, char** argv) {
//Initialize
    float Tbudget=6.82e12f, //Total Gov Budget
            Milt=7.53e11f, // Military Budget
            Nasa=2.52e10f;
    //Display
    cout<<setprecision(2)<<fixed;
    cout<<"---2021 Government Budget---\n"<<"$"<<Tbudget<<endl;
    cout<<"Military Budget:"<<setw(3)<<"$"<<Milt<<setw(10)<<(Milt/Tbudget)*CNVPERC<<"%\n";
    cout<<"NASA Budget:"<<setw(7)<<"$"<<Nasa<<setw(11)<<(Nasa/Tbudget)*CNVPERC<<"%\n";
    
    return 0;
}

