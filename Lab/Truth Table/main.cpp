/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cppFiles/main.cc to edit this template
 */

/* 
 * File:   main.cpp
 * Author: Steve
 *Purpose: Truth Table
 * Created on January 13, 2022, 11:23 AM
 */

#include <cstdlib>
#include <iostream>

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
//declare Variables
    bool x, y;
    
    //Heading
    cout<<"X Y !X !Y X&&Y X||Y X^Y X^Y^X X^Y^Y !X&&!Y !(X||Y) !X||!Y !(X&&Y)"<<endl;
    
    //First Row
    x=y=true;
    cout<<(x?'T':'F')<<" ";
    cout<<(y?'T':'F')<<"  ";
    cout<<(!x?'T':'F')<<"  ";
    cout<<(!y?'T':'F')<<"   ";
    cout<<(x&&y?'T':'F')<<"    ";
    cout<<(x||y?'T':'F')<<"   ";
    cout<<(x^y?'T':'F')<<"   ";
    cout<<(x^y^x ?'T':'F')<<"     ";
    cout<<(x^y^y ?'T':'F')<<"       ";
    cout<<(!x&&!y ?'T':'F')<<"      ";
    cout<<(!(x||y) ?'T':'F')<<"       ";
    cout<<(!x||!y ?'T':'F')<<"      ";
    cout<<(!(x&&y) ?'T':'F');
    cout<<endl;
    
    //Second Row
    y=false;
    cout<<(x?'T':'F')<<" ";
    cout<<(y?'T':'F')<<"  ";
    cout<<(!x?'T':'F')<<"  ";
    cout<<(!y?'T':'F')<<"   ";
    cout<<(x&&y?'T':'F')<<"    ";
    cout<<(x||y?'T':'F')<<"   ";
    cout<<(x^y?'T':'F')<<"   ";
    cout<<(x^y^x ?'T':'F')<<"     ";
    cout<<(x^y^y ?'T':'F')<<"       ";
    cout<<(!x&&!y ?'T':'F')<<"      ";
    cout<<(!(x||y) ?'T':'F')<<"       ";
    cout<<(!x||!y ?'T':'F')<<"      ";
    cout<<(!(x&&y) ?'T':'F');
    cout<<endl;

        //Third Row
    x=false, y=true;
    cout<<(x?'T':'F')<<" ";
    cout<<(y?'T':'F')<<"  ";
    cout<<(!x?'T':'F')<<"  ";
    cout<<(!y?'T':'F')<<"   ";
    cout<<(x&&y?'T':'F')<<"    ";
    cout<<(x||y?'T':'F')<<"   ";
    cout<<(x^y?'T':'F')<<"   ";
    cout<<(x^y^x ?'T':'F')<<"     ";
    cout<<(x^y^y ?'T':'F')<<"       ";
    cout<<(!x&&!y ?'T':'F')<<"      ";
    cout<<(!(x||y) ?'T':'F')<<"       ";
    cout<<(!x||!y ?'T':'F')<<"      ";
    cout<<(!(x&&y) ?'T':'F');
    cout<<endl;
    
        //Fourth Row
    y=false;
    cout<<(x?'T':'F')<<" ";
    cout<<(y?'T':'F')<<"  ";
    cout<<(!x?'T':'F')<<"  ";
    cout<<(!y?'T':'F')<<"   ";
    cout<<(x&&y?'T':'F')<<"    ";
    cout<<(x||y?'T':'F')<<"   ";
    cout<<(x^y?'T':'F')<<"   ";
    cout<<(x^y^x ?'T':'F')<<"     ";
    cout<<(x^y^y ?'T':'F')<<"       ";
    cout<<(!x&&!y ?'T':'F')<<"      ";
    cout<<(!(x||y) ?'T':'F')<<"       ";
    cout<<(!x||!y ?'T':'F')<<"      ";
    cout<<(!(x&&y) ?'T':'F');
    cout<<endl;
    //Exit the program
    return 0;
}

