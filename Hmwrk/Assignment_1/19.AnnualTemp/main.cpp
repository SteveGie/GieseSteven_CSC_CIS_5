/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cppFiles/main.cc to edit this template
 */

/* 
 * File:   main.cpp
 * Author: Steve
 *
 * Created on January 11, 2022, 5:00 PM
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
    float NY=85, Denv= 88, Phx = 106, rise = 0.02, NY2=(NY*rise)+NY, Denv2=(Denv*rise)+Denv, Phx2=(Phx*rise)+Phx;
    cout<<setprecision(2)<<fixed;
    cout<<"These Years Temperature Averages\n";
    cout<<"New York"<<setw(8)<<NY<<"˚F/ "<<(NY-32)*5/9<<"˚C\n";
    cout<<"Denver"<<setw(10)<<Denv<<"˚F/ "<<(Denv-32)*5/9<<"˚C\n";
    cout<<"Phoenix"<<setw(10)<<Phx<<"˚F/ "<<(Phx-32)*5/9<<"˚C\n";
    cout<<"Next Years Estimated Average\n";
    cout<<"New York"<<setw(8)<<NY2<<"˚F/ "<<(NY2-32)*5/9<<"˚C\n";
    cout<<"Denver"<<setw(10)<<Denv2<<"˚F/ "<<(Denv2-32)*5/9<<"˚C\n";
    cout<<"Phoenix"<<setw(10)<<Phx2<<"˚F/ "<<(Phx2-32)*5/9<<"˚C\n";
    cout<<"Temp Average Rise"<<setw(5)<<"%"<<rise*CNVPERC<<endl;
    return 0;
}

