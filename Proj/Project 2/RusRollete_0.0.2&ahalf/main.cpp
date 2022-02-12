/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cppFiles/main.cc to edit this template
 */

/* 
 * File:   main.cpp
 * Author: Steven Giese
 * Russian Roulette
 * Created on January 25, 2022, 12:30 AM
 * Ver: 0.0.2, Implementing com players, this gonna be difficult.
 * Testing saving and loading data.
 */

#include <cstdlib>
#include <iostream>
#include <iomanip>
#include <fstream>
#include <cstdlib>
#include <ctime>
using namespace std;
//Seed
unsigned seed=time(0);
const float RPER=2147483647.0f;

/*+----------------+
 *│ Prototype Zone │
 *+----------------+*/
//Main Games
void p1game();  //Single Player game
void p4game();  //4 player game
void viewsts(); //Load save data, times died and times won.
void instruc(); //Instructions
//Game stuff
void com1th();
void com2th();
const float CHAMB=6; //Number of bullet slots
int main(int argc, char** argv) {
    srand(seed);
    char sel;
    cout<<"Welcome to Russian Roulette\n"<<"1 Player Game"<<setw(8)<<"s\n"<<"4 Player Game"<<setw(8)<<"m\n";
    cout<<"View Scores"<<setw(10)<<"v\n"<<"Info"<<setw(17)<<"i\n"<<"Quit"<<setw(17)<<"q\n";
    while(sel !='q' && sel!='Q'){
        cin>>sel;
        
        if(sel=='s' || sel=='S') p1game();
        else if(sel=='m' || sel=='M') p4game();
        else if(sel=='v' || sel=='V') viewsts();
        else if(sel=='i' || sel=='I') instruc();
        else if(sel=='q' || sel=='Q') break;
        else cout<<"Invalid input, only s, m, v, or q\n";
    }
    return 0;
}
void p1game(){ //for now, no opponents.
    string com1="Mike. 2", com2="Karen. 3"; //Make this random
    bool pdie=true, c1die=true, c2die=true, nspun=true;//__die = on death, equals false, nspun = cylinder not spun
    char sel, cont;
    float shoot, atta, spin, crand; //Chances the computer will do either of these moves.
    int bull; //may make separate int for cpu so they dont get have unfair knowledge
    //Might make cont a string to prevent input overload
    cout<<"You four are trapped in a room with a gun. Guess you know what this means...\nRUSSIAN ROULETTE!! YAAAY\n"
        <<"The gun starts on your side, damn, just your luck, whats your move?\n";
    bull=(rand()%(5-1+1))+1;
    while(pdie){
        cout<<"Shoot Self: s, Shoot Opponent(Univalible): a, Spin Cylinder r\n"; //Players Turn
        cin>>sel;
        while(sel!='s'&&sel!='S'&&sel!='r'&&sel!='R'){ //No selection
            cout<<"Cmon, quit delaying. s, a, or r?\n";
            cin>>sel;
        }
        if(sel=='r'||sel=='R'){ //Spinning the cylinder
            if(nspun){
                bull=(rand()%(6-1+1))+1;
                cout<<"You spun the cylinder, the fate of who this gun points at next is unclear\n";
                sel='s';
            }
            else{
                cout<<"You already spun the cylinder\n";
            }
        }
        if(sel=='s' || sel=='S')
        if(bull==CHAMB){ //You die
            cout<<"BAM! you died\n"<<bull<<" "<<" Debug Stuff\nYou are back at the main menu, select s, m, v, i, or q\n";
            pdie=false;
            break;
        }
        else{ //you live
            cout<<"*Click*, whew, safe.\n"<<bull<<" "<<" Debug Stuff\n";
            ++bull;
            nspun=true;
        }
        /*
         CPU 1 TURN
         */
        if(c1die){
            cout<<"You pass the gun to "<<com1<<" he grabs it, quivering\n(Press C to continue)\n";
            cin>>cont;
            shoot=1-(bull/CHAMB); //The maths, to determine cpu1 decision
            atta=1-shoot-0.4;
            spin=1-shoot+0.4;
            crand=rand()/RPER;
            cout<<shoot<<endl<<atta<<endl<<spin<<"Debug Stuff\n";
            if(shoot>crand){ //Hes gonna shoot himself
                cout<<"He points the gun at his head, preparing for the worst...\n";
                if(bull==CHAMB){ //HE dies
                    cout<<"BAM! hes dead\n";
                    c1die=false;
                    bull=(rand()%(6-1+1))+1;
                }
                else cout<<"*Click* A relieving sound.\n", bull++; //He lives
            }
            else if(spin>crand){ //He spins it
                bull=(rand()%(6-1+1))+1;
                cout<<"He spins the cylinder, thinking about what he will do next\n";
                crand=rand()/RPER;
                if(crand>0.5){ //determines if he shoots him or opponent
                    cout<<"He points the gun at himself, begrudgently pulls the trigger and...\n";
                    if(bull==CHAMB){ //Jesus so many if statements, he dies function
                        cout<<"BAM! "<<com1<<" is no more.\n";
                        c1die=false;
                        bull=(rand()%(6-1+1))+1;
                    }
                    else cout<<"*Click* the best sound that can be heard right now\n", bull++;
                }
                else{ //aims at opponent
                    cout<<com1<<" aims the gun at "<<com2<<"! Without hesitation...\n";
                   if(bull==CHAMB){
                       cout<<"BAM! sorry "<<com2<<", it had to be this way...\n";
                       c2die=false;
                       bull=(rand()%(6-1+1))+1;
                   }
                   else cout<<"*Click*, things are starting to feel uneasy between "<<com1<<" and "<<com2<<endl, bull++;
                }
            }
            else{ //aims at opponent
                cout<<com1<<" aims the gun at "<<com2<<"! Without hesitation...\n";
                   if(bull==CHAMB){
                       cout<<"BAM! sorry "<<com2<<", it had to be this way...\n";
                       c2die=false;
                       bull=(rand()%(6-1+1))+1;
                   }
                   else cout<<"*Click*, things are starting to feel uneasy between "<<com1<<" and "<<com2<<endl, bull++;
            }
            
        }
    }
    
}
void p4game(){
    int fun=0;
    while(fun !=4){
    cout<<"You selected 4 Player Game\n"
        <<"This currently doesn't work, so just type numbers\n"
        <<"Just not four, I mean, unless you wanna leave or somethin\n";
    cin>>fun;
    }
}
void viewsts(){
    cout<<"Yo, stats aint avalible right now\n";
}
void instruc(){
    cout<<"You know Russian Roulette, The high risk no reward game\n"
        <<"But basically, there is a one in six chance that you'll shoot yourself\n"
        <<"This chance increases after each shot of course, as less blanks are left in the chamber\n"
        <<"However, you can also shoot an opponent if your feeling unlucky\n"
        <<"But, if you fire a blank, you have to point the gun at yourself and shoot\n"
        <<"Lastly, you can spin the cylinder, if too many blanks have gone by.\n"
        <<"You can even shoot your opponent afterwards to, if you think your shot will land\n";
}
/* <><><To Do list><><>
 * Make a 1 player mode with 3 com competitors. []
 * Make a 4 player mode, with insertable names []
 * Make com names random names []
 * Make com smart []
 * Save times died and won []
 */

/*~~~~~Notes~~~~~~~~~~~~[-][X]
 * Max Rand is 2147483647.0f │
 * or thing: ||
 */