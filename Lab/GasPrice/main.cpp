/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cppFiles/main.cc to edit this template
 */

/* 
 * File:   main.cpp
 * Author: Steven Giese
 * Purpose: To Calculate Gas Cost
 * Created on January 9, 2022, 6:29 PM
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
    //Constants
    float gage, //gas reading
          size, //size of gas tank
           mpg, //miles per gallon duh
        galreq; //gallons required to fill up
    /*
     Gas Station 1
     */
    //Variables
    float  cost, //cost of gas per gallon
           dist, //miles away from station
           spent, //amount needed to fill up
            trav, //total distance traveled to and fro
            travc, //cost of traveling to and fro
            tspent, //cost of fillup + traveling to and from station
            tcost; //gas per gallon while adding milage to station
   
    /*
     Gas Station 2
     */
    float cost2, //cost of gas per gallon
           dist2, //miles away from station
           spent2, //amount needed to fill up
            trav2, //total distance traveled to and fro
            travc2, //cost of traveling to and fro
            tspent2, //cost of fillup + traveling to and from station
            tcost2; //gas per gallon while adding milage to station
    /*
    Inputs 
     */
        //Display and enter math
    cout<<"Enter Cost of Station 1"<<endl;
    cin>>cost;
    cout<<"Enter The Distance from Station 1"<<endl;
    cin>>dist;
    cout<<"Enter Cost of Station 2"<<endl;
    cin>>cost2;
    cout<<"Enter Distance of Station 2"<<endl;
    cin>>dist2;
    /*
     Gas Station 1
     */
    //Initialize
    gage = .75f; //%of gas in tank
    size = 22.0f;
    mpg = 17.0f;
//will be input manually
    /*
     Gas Station 2
     */
    //Initialized Manually
    
    /*
    Gas Station 1 
     */
    //Map Inputs
    galreq = size*(1-gage);
    spent = galreq*cost;
    trav = dist*2.0f;
    travc = trav/mpg*cost;
    tspent = spent + travc;
    tcost = tspent/galreq;
    /*
     Gas Station 2
     */
    //Map Inputs Again
    spent2 = galreq*cost2;
    trav2 = dist2*2.0f;
    travc2 = trav2/mpg*cost2;
    tspent2 = spent + travc2;
    tcost2 = tspent/galreq;
    
    
    

    //Display the Math
    cout<<setprecision(2)<<fixed;
    cout<<"---Car Stats---"<<endl;
    cout<<"Gas Gage Percent"<<setw(9)<<"%"<<gage*CNVPERC<<endl;
    cout<<"Tank Size"<<setw(21)<<size<<endl;
    cout<<"Miles Per Gallon"<<setw(21)<<mpg<<endl;
    cout<<endl;
    cout<<"---Gas Station 1---"<<endl;
    cout<<endl;
    cout<<"Cost Per Gallon"<<setw(11)<<"$"<<cost<<endl;
    cout<<"Distance From Station"<<setw(9)<<dist<<"miles"<<endl;
    cout<<"Cost to Fillup"<<setw(12)<<"$"<<spent<<endl;
    cout<<"Total Distance Traveled"<<setw(7)<<trav<<"miles"<<endl;
    cout<<"Cost of Travel"<<setw(12)<<"$"<<travc<<endl;
    cout<<"Gas Cost including Distance"<<setw(3)<<"$"<<tcost<<endl;
    cout<<"---Total Cost"<<setw(13)<<"$"<<tspent<<endl;
    cout<<endl;
    cout<<"---Gas Station 2---"<<endl;
    cout<<endl;
    cout<<"Cost Per Gallon"<<setw(11)<<"$"<<cost2<<endl;
    cout<<"Distance From Station"<<setw(9)<<dist2<<"miles"<<endl;
    cout<<"Cost to Fillup"<<setw(12)<<"$"<<spent2<<endl;
    cout<<"Total Distance Traveled"<<setw(7)<<trav2<<"miles"<<endl;
    cout<<"Cost of Travel"<<setw(12)<<"$"<<travc2<<endl;
    cout<<"Gas Cost including Distance"<<setw(3)<<"$"<<tcost2<<endl;
    cout<<"---Total Cost"<<setw(13)<<"$"<<tspent2<<endl;
    cout<<endl;
    if(tspent>tspent2){
        cout<<"Gas Station two is cheaper by $"<<tspent-tspent2<<endl;
    }
    else if (tspent<tspent2){
        cout<<"Gas Station one is cheaper by $"<<tspent2-tspent<<endl;
    }
    else if(tspent==tspent2){
        cout<<"Gas Prices are equal"<<endl;
    }
    return 0;
  
}
