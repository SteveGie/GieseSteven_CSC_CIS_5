/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cppFiles/main.cc to edit this template
 */

/* 
 * File:   main.cpp
 * Author: Steven Giese
 * Russian Roulette
 * Created on January 25, 2022, 12:30 AM
 * Ver: 0.0.5, Implementing Multiplayer, much easier.
 * Oops, I forgot to make a copy of previous multi verson, where it was done through a function instead of an array
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
//Actions
bool shtself(int&, bool, string); //Function when shooting yourself
bool atta(int&, bool, bool&, string, string); //Function when attacking; bull, attackers life, attacked's life, attackers name, attacked name
bool satta(int&, bool, string, char&);//Function only for single player... grammer reasons, plus i wanted it to feel a little different in single player.
bool mchoose(int&, bool, bool&, bool&, bool&, string, string, string, string); //&bullets,[return]Current players life bool, apponent &1 &2 and &3s life bool, current players name, opponents name
void save(bool);
const float CHAMB=6; //Number of bullet slots
int main(int argc, char** argv) {
    srand(seed);
    char sel='l';
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
    string com1="Mike", com2="Karen", p1="You", choose; //Make this random, exept p1; Gramc=grammer correction for making the output make sense
    bool pdie=true, c1die=true, c2die=true, wrong=true, win;//__die = on death, equals false
    char sel, cont;
    int bull; //may make separate int for cpu so they dont get have unfair knowledge
    float shoot, spin, crand;
    //Might make cont a string to prevent input overload
    cout<<"Name opponents? y/n\n";
    cin>>sel;
    if(sel=='y'){
        cout<<"Name opponent 1\n";
        cin>>com1;
        cout<<"Name opponent 2\n";
        cin>>com2;
    }
    cout<<"You four are trapped in a room with a gun. Guess you know what this means...\nRUSSIAN ROULETTE!! YAAAY\n"
        <<"The gun starts on your side, damn, just your luck, whats your move?\n";
    bull=(rand()%(5-1+1))+1;
    while(pdie){
        //players turn
        cout<<"Shoot Self: s, Shoot Opponent: a, Spin Cylinder r\n";
        cin>>sel;
        while(sel!='s'&&sel!='S'&&sel!='r'&&sel!='R'&&sel!='a'&&sel!='A'){ //No selection
            cout<<"Cmon, quit delaying. s, a, or r?\n";
            cin>>sel;
        }
        if(sel=='r'||sel=='R'){ //Spinning the cylinder
            bull=(rand()%(6-1+1))+1;
            cout<<"You spun the cylinder, your fate is less clear\n";
            bull=(rand()%(6-1+1))+1;
            sel='s';
        }
        if(sel=='a'||sel=='A'){
            cout<<"Who will you aim at\n";
            cin>>choose;
            while(wrong){
                if(choose!=com1&&choose!=com2){
                    cout<<"That isn't a name of anyone here...\n";
                }
                else if(choose==com1&&!c1die){
                    cout<<com1<<" is already dead...\n";
                }
                else if(choose==com2&&!c2die){
                    cout<<com2<<" is already dead...\n";
                }
                else{
                    wrong=false;
                    break;
                }
                cin>>choose;
            }
            wrong=true;
            if(choose==com1) c1die=satta(bull,c1die,com1,sel);
            else if(choose==com2) c2die=satta(bull,c2die,com2,sel);
            else sel='s';
        }
        if(sel=='s' || sel=='S'){ //shootin self
            cout<<"You pointed the gun towards your head. You prepared for the worst...\n";
            if(bull==CHAMB){ //You die
                cout<<"BAM! you died\nYou are back at the main menu, select s, m, v, i, or q\n";
                pdie=false;
            }
            else{ //you live
                cout<<"*Click*, whew, safe.\n";
                ++bull;
            }
        if(!pdie) break;
        }
        //Cpu1 Turn
        if(c1die){
          cout<<"You pass the gun to "<<com1<<", their hands trembling...\n(Enter any key to continue)\n";
          cin>>cont;
          crand=rand()/RPER;
          shoot=0.33;
          spin=.66;
          crand=rand()/RPER;
          if(crand<shoot) c1die=shtself(bull,c1die,com1); //Shoot self
          else if(crand<spin){ //Spin then shoot self
              bull=(rand()%(6-1+1))+1;
              cout<<com1<<" spun the cylinder, ";
              c1die=shtself(bull,c1die,com1);
          }
          else{ //Attack
              crand=rand()/RPER; //Picking opponent
              if(crand<0.5&&c2die) c1die=atta(bull,c1die,c2die,com1,com2);//Cpu Opponent
              else c1die=atta(bull,c1die,pdie,com1,p1); //Player Opponent
          }
        }
        if(!pdie){
            cout<<"You are back at the main menu, select s, m, v, i, or q\n";
            break;
        }
        //Cpu2 Turn
        if(c2die){
          if(c1die) cout<<com1<<" passed the gun to "<<com2<<", eager to grab...\n(Enter any key to continue)\n";
          else cout<<"You pass the gun to "<<com2<<", eager to grab...\n(Enter any key to continue)\n";
          cin>>cont;
          crand=rand()/RPER;
          shoot=.2;
          spin=.5;
          if(crand<shoot) c2die=shtself(bull,c2die,com2); //Shoot self
          else if(crand<spin){ //Spin then shoot self
              bull=(rand()%(6-1+1))+1;
              cout<<com2<<" spun the cylinder, ";
              c2die=shtself(bull,c2die,com2);
          }
          else{ //Attack
              crand=rand()/RPER; //Picking opponent
              if(crand<0.5&&c1die) c2die=atta(bull,c2die,c1die,com2,com1);//Cpu Opponent
              else c2die=atta(bull,c2die,pdie,com2,p1); //Player Opponent
          }
        }
        if(!pdie){
            cout<<"You are back at the main menu, select s, m, v, i, or q\n";
            break;
        }
        if(!c1die&&!c2die){
            cout<<"It's over...\nCongratulations!! You survived!\nYou are back at the main menu, select s, m, v, i, or q\n";
            win=true;
            
            break;
        }

        cout<<"The gun returns to you...\n";
    }
}  
void p4game(){
    string p[4], choose;
    bool pdie[4], wrong=true, pass=true;
    int play=0, bull;
    char sel='l';
    pdie[0]=pdie[1]=pdie[2]=pdie[3]=true;
    for(int i=0;i<4;i++){//Naming players
        int c=i;
        cout<<"Insert Name for player "<<i+1<<endl;
        cin>>p[i];
        while(c>0){//checking if player names are the same
            if(p[i]==p[c-1]){
                cout<<"That name is already in use\n";
                cin>>p[i];
                c=i;
            }
            else c--;
        }
    }
    cout<<p[0]<<", "<<p[1]<<", "<<p[2]<<" and "<<p[3]<<" have entered the game...\n";
    bull=(rand()%(5-1+1))+1;
    while(pdie[0]+pdie[1]+pdie[2]+pdie[3]>1){
        if(pdie[play]){
        cout<<p[play]<<", its your move, Shoot Self: s, Shoot Opponent: a, Spin Cylinder r\n";
        cin>>sel;
        while(sel!='s'&&sel!='S'&&sel!='r'&&sel!='R'&&sel!='a'&&sel!='A'){ //No selection
            cout<<"Cmon, quit delaying. s, a, or r?\n";
            cin>>sel;
        }
        if(sel=='r'||sel=='R'){
            cout<<p[play]<<" spun the cylinder, their fate is less clear\n";
            bull=(rand()%(6-1+1))+1;
            sel='s';
        }
        if(sel=='a'||sel=='A'){
            cout<<"Who will you aim at\n";
            cin>>choose;
            while(wrong){
                int c=3;
                if (choose!=p[0]&&choose!=p[1]&&choose!=p[2]&&choose!=p[3]){
                    cout<<"That isn't a name of anyone here...\n";
                }
                else{
                    while(c>=0){
                        if(choose==p[c]&&!pdie[c]){
                            cout<<p[c]<<" is already dead\n";
                            c=3;
                            break;
                        }
                        else c--;
                    }
                }
                if(c<0){
                    wrong=false;
                    break;
                }
                cin>>choose;
            }
            wrong=true;
            if(choose==p[play]) cout<<"Ok then I guess...", sel='s';
            else if(choose==p[0]) pdie[play]=atta(bull,pdie[play],pdie[0],p[play],p[0]);
            else if(choose==p[1]) pdie[play]=atta(bull,pdie[play],pdie[1],p[play],p[1]);
            else if(choose==p[2]) pdie[play]=atta(bull,pdie[play],pdie[2],p[play],p[2]);
            else pdie[play]=atta(bull,pdie[play],pdie[3],p[play],p[3]);
        }
    if(sel=='s'||sel=='S') pdie[play]=shtself(bull,pdie[play],p[play]);
        if(play==3) play=0;
        else play++;
    }
        else if(play<3) play++;
        else play=0;
    }
    if(pdie[0]) cout<<"Congratulations!! "<<p[0]<<" survived!\nYou are back at the main menu, select s, m, v, i, or q\n";
    if(pdie[1]) cout<<"Congratulations!! "<<p[1]<<" survived!\nYou are back at the main menu, select s, m, v, i, or q\n";
    if(pdie[2]) cout<<"Congratulations!! "<<p[2]<<" survived!\nYou are back at the main menu, select s, m, v, i, or q\n";
    if(pdie[3]) cout<<"Congratulations!! "<<p[3]<<" survived!\nYou are back at the main menu, select s, m, v, i, or q\n";
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
        <<"You cannot shoot an opponent after spinning though\n";
}

bool shtself(int &bull, bool alive, string name){//For coms and multiplayer only
    cout<<name<<" put the gun to their head. They prepare for the worst...\n";
    if(bull==CHAMB){
        cout<<"BAM! "<<name<<" is no more...\n";
        bull=(rand()%(6-1+1))+1;
        alive=false;
    }
    else{
        cout<<"*Click*, a relief to hear.\n";
        ++bull;
    }
    return alive;
}
bool atta(int &bull, bool pAlive, bool &oAlive, string name, string opName){ //Attack for multi and com
    cout<<name<<" pointed the gun at "<<opName<<" and...\n";
    if(bull==CHAMB){
        cout<<"BAM! Sorry "<<opName<<"... it had to be done.\n";
        bull=(rand()%(6-1+1))+1;
        oAlive=false;
    }
    else{
        cout<<"*Click*... things are getting tense between "<<opName<<" and "<<name<<endl;
        ++bull;
        cout<<name<<" knows what they must do now...\n";
        pAlive=shtself(bull,pAlive,name);
    }
    return pAlive;
}
bool satta(int &bull, bool oAlive, string opName, char &sel){ //Single player attact only
    char cont;
    cout<<"You pointed the gun at "<<opName<<" and squeezed the trigger...\n";
    if(bull==CHAMB){
        cout<<"BOOOM!... sorry "<<opName<<", its just how the game is.\n";
        bull=(rand()%(6-1+1))+1;
        oAlive=false;
    }
    else{
        cout<<"*Click*... that might have been a mistake...\nYou know what you must do now\n(Enter any key to Continue)\n";
        ++bull;
        cin>>cont;
        sel='s';
    }
    return oAlive;
}
/* <><><To Do list><><>
 * Make a 1 player mode with -3- 2 com competitors. [x]
 * Make a 4 player mode, with insertable names [x]
 * Make com names random names [x]
 * Make com smart [x]
 * Save times died and won []
 */

/*~~~~~Notes~~~~~~~~~~~~[-][X]
 * Max Rand is 2147483647.0f │
 * or thing: ||
 */