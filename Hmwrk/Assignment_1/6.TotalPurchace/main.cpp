/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cppFiles/main.cc to edit this template
 */

/* 
 * File:   main.cpp
 * Author: Steve
 * Purpose: To calculate total cost
 * Created on January 11, 2022, 1:59 PM
 */

#include <cstdlib>
#include <iostream>
#include <iomanip>
using namespace std;

/*
 * 
 */
const unsigned char CNVPERC=100;
int main(int argc, char** argv) {
//Terms
    float   item1,
            item2,
            item3,
            item4,
            item5,
            stotal,
            taxPer,
            tax,
            total;
    //Initialize
    item1 = 15.95f;
    item2 = 24.95f;
    item3 = 6.95f;
    item4 = 12.95f;
    item5 = 3.95f;
    taxPer = 0.07f;
    //Maths
    stotal = item1+item2+item3+item4+item5;
    tax = stotal*taxPer;
    total = stotal+tax;
    //Print
   cout<<setprecision(2)<<fixed;
    cout<<"---Checkout---"<<endl;
    cout<<"Apples"<<setw(5)<<"$"<<item1<<endl;
    cout<<"Beans"<<setw(6)<<"$"<<item2<<endl;
    cout<<"Gumball"<<setw(4)<<"$"<<item3<<endl;
    cout<<"Steak"<<setw(6)<<"$"<<item4<<endl;
    cout<<"Sterloin"<<setw(3)<<"$"<<item5<<endl;
    cout<<"------------------"<<endl;
    cout<<"Sub Total"<<setw(2)<<"$"<<stotal<<endl;
    cout<<"Tax %"<<setw(6)<<"%"<<taxPer*CNVPERC<<endl;
    cout<<"Sales Tax"<<setw(2)<<"$"<<tax<<endl;
    cout<<"Total"<<setw(6)<<"$"<<total<<endl;
    return 0;
}

