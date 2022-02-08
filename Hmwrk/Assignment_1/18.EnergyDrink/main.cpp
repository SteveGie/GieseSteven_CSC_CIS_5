/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cppFiles/main.cc to edit this template
 */

/* 
 * File:   main.cpp
 * Author: Steve
 * To Display % of people buy drinky drink
 * Created on January 11, 2022, 5:41 PM
 */

#include <cstdlib>
#include <iostream>
#include <iomanip>

using namespace std;
const unsigned char CNVPERC=100;
/*
 * 
 */
int main(int argc, char** argv) {
    int served = 16500, drink, citrus;
    float pdrnk = 0.15, pcit = 0.58;
    drink=served*pdrnk;
    citrus=drink*pcit;
    
    cout<<"---Energy Drink Interviews---\n"<<"Number of Interviewes:"<<setw(15)<<served<<endl<<"People Who Drank Energy Drinks:"<<setw(5)<<drink<<endl;
    cout<<"People Who Like Citrus:"<<setw(13)<<citrus<<endl; 
    return 0;
}

