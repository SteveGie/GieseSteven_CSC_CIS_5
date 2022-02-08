/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cppFiles/main.cc to edit this template
 */

/* 
 * File:   main.cpp
 * Author: Steve
 * Purpose: To calculate ocean level rises
 * Created on January 11, 2022, 6:03 PM
 */

#include <cstdlib>
#include <iostream>
#include <iomanip>
using namespace std;

/*
 * 
 */

int main(int argc, char** argv) {
    float risel = 1.5;
    cout<<"===Sea Level Rise===\n"<<"Rise Level Year 5:"<<setw(6)<<risel*5<<endl<<"Rise Level Year 7:"<<setw(7)<<risel*7<<endl<<"Rise Level Year 10:"<<setw(4)<<risel*10;
    return 0;
}

