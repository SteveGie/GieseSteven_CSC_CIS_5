/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cppFiles/main.cc to edit this template
 */

/* 
 * File:   main.cpp
 * Author: Steve
 * Find the average of 5 values
 * Created on January 11, 2022, 4:03 PM
 */

#include <cstdlib>
#include <iostream>
#include <iomanip>

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
    int v1, v2, v3, v4, v5, sum;
    v1=28, v2=32, v3=37, v4=24, v5=33;
    sum = v1+v2+v3+v4+v5;
    cout<<"The average of these values are "<<sum/5;
    return 0;
}

