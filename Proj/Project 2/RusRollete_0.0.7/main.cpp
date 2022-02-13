/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cppFiles/main.cc to edit this template
 */

/* 
 * File:   main.cpp
 * Author: Steven Giese
 * Russian Roulette
 * Created on January 25, 2022, 12:30 AM
 * Ver: 0.0.6, Just gotta implement saves and i think thats it.
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
void smakefi(bool);
void save(bool);
void names(string[], int);
void nmakefi(string[], int);
string ranname(string);
int main(int argc, char** argv) {
    srand(static_cast<unsigned int>(time(0)));
    char sel='l';
    int pick=0;
    cout<<"Welcome to Russian Roulette\n"<<"1 Player Game"<<setw(8)<<"s\n";
    cout<<"View Scores"<<setw(10)<<"v\n"<<"Info"<<setw(17)<<"i\n"<<"Quit"<<setw(17)<<"q\n";
    while(sel !='q' && sel!='Q'){
        cin>>sel;
        switch(sel){
            case 's': pick=1; break;
            case 'S': pick=1; break;
            case 'i': pick=2; break;
            case 'I': pick=2; break;
            case 'v': pick=3; break;
            case 'V': pick=3; break;
            case 'q': break;
            case 'Q': break;
            default : cout<<"Invalid input, only s, m, v, or q\n";
        }
        if(pick==1){
            string com1="Mike", com2="Karen", p1="You", choose, nc2a[2]; //Make this random, exept p1; Gramc=grammer correction for making the output make sense
    bool pdie=true, c1die=true, c2die=true, wrong=true;//__die = on death, equals false
    bool win=false;
    char sel, cont;
    const float CHAMB=6;
    int bull; //may make separate int for cpu so they dont get have unfair knowledge
    float shoot, spin, crand;
    //Might make cont a string to prevent input overload
    cout<<"Name opponents? y/n\n";
    cin>>sel;
    if(sel=='y'){
        cout<<"Name opponent 1\n";
        cin>>com1;
        nc2a[0]=com1;
        cout<<"Name opponent 2\n";
        cin>>com2;
        while(com2==com1){
            cout<<"Bro you already named the other one that!\n";
            cin>>com2;
        }
        nc2a[1]=com2;
        names(nc2a,2); //Saving names
    }
    else{
        com1=ranname(com1);
        com2=ranname(com2);
        if(com2==com1) com2="Joey";
    }
    cout<<"You three are trapped in a room with a gun. Guess you know what this means...\nRUSSIAN ROULETTE!! YAAAY\n"
        <<"The gun starts on your side, damn, just your luck, whats your move?\n";
    bull=(rand()%(5-1+1))+1;
    while(pdie){
        //players turn
        cout<<"Shoot Self: s, Spin Cylinder r View Stats: ?\n";
        cin>>sel;
        while(sel!='s'&&sel!='S'&&sel!='r'&&sel!='R'||sel=='?'){ //No selection / stats
            if(sel!='s'&&sel!='S'&&sel!='r'&&sel!='R'&&sel!='a'&&sel!='A'&&sel!='?'){
                cout<<"Cmon, quit delaying. s, a, or r? Or View stats: ?\n";
            }
            else{ //Stats
                if(c1die+c2die<2){
                    if(!c1die) cout<<com1<<" is dead.\n";
                    if(!c2die) cout<<com2<<" is dead.\n";
            }
                else cout<<"No one is dead yet.\n";
            }
            cin>>sel;
        }
        if(sel=='r'||sel=='R'){ //Spinning the cylinder
            bull=(rand()%(6-1+1))+1;
            cout<<"You spun the cylinder, your fate is less clear\n";
            bull=(rand()%(6-1+1))+1;
            sel='s';
        }
        if(sel=='s' || sel=='S'){ //shootin self
            cout<<"You pointed the gun towards your head. You prepared for the worst...\n";
            if(bull==CHAMB){ //You die
                cout<<"BAM! you died\nYou are back at the main menu, select s, m, v, i, or q\n";
                save(win);
                pdie=false;
            }
            else{ //you live
                cout<<"*Click*, whew, safe.\n";
                ++bull;
            }
        }
        //Cpu1 Turn
        if(c1die){
          cout<<"You pass the gun to "<<com1<<", their hands trembling...\n(Enter any key to continue)\n";
          cin>>cont;
          crand=rand()/RPER;
          shoot=0.33;
          spin=.66;
          crand=rand()/RPER;
    if(crand<shoot){
        cout<<com1<<" put the gun to their head. They prepare for the worst...\n";
        if(bull==CHAMB){
            cout<<"BAM! "<<com1<<" is no more...\n";
            bull=(rand()%(6-1+1))+1;
            c1die=false;
    }
    else{
        cout<<"*Click*, a relief to hear.\n";
        ++bull;
    }
    } //Shoot self
          else(crand<spin){ //Spin then shoot self
              bull=(rand()%(6-1+1))+1;
              cout<<com1<<" spun the cylinder, ";
              cout<<com1<<" put the gun to their head. They prepare for the worst...\n";
        if(bull==CHAMB){
            cout<<"BAM! "<<com1<<" is no more...\n";
            bull=(rand()%(6-1+1))+1;
            c1die=false;
    }
    else{
        cout<<"*Click*, a relief to hear.\n";
        ++bull;
    }
          }
        }
        //Cpu2 Turn
        if(c2die){
          if(c1die) cout<<com1<<" passed the gun to "<<com2<<", eager to grab...\n(Enter any key to continue)\n";
          else cout<<"You pass the gun to "<<com2<<", eager to grab...\n(Enter any key to continue)\n";
          cin>>cont;
          crand=rand()/RPER;
          shoot=.2;
          spin=.5;
          if(crand<shoot){
        cout<<com2<<" put the gun to their head. They prepare for the worst...\n";
        if(bull==CHAMB){
            cout<<"BAM! "<<com2<<" is no more...\n";
            bull=(rand()%(6-1+1))+1;
            c1die=false;
    }
          } //Shoot self
          else if(crand<spin){ //Spin then shoot self
              bull=(rand()%(6-1+1))+1;
            cout<<com2<<" spun the cylinder, ";
            cout<<com2<<" put the gun to their head. They prepare for the worst...\n";
            if(bull==CHAMB){
            cout<<"BAM! "<<com2<<" is no more...\n";
            bull=(rand()%(6-1+1))+1;
            c1die=false;
          }
          }
          }
        }
        if(!pdie){
            save(win);
            cout<<"You are back at the main menu, select s, m, v, i, or q\n";
        }
        if(!c1die&&!c2die){
            cout<<"It's over...\nCongratulations!! You survived!\nYou are back at the main menu, select s, m, v, i, or q\n";
            win=true;
            save(win);
        }

        cout<<"The gun returns to you...\n";
    }
        }
        else if(pick==2){
                cout<<"You know Russian Roulette, The high risk no reward game\n"
        <<"well to recap, you pass a gun with 1 bullet around the table\n"
        <<"This means you have a one in six chance of survival, but\n"
        <<"well... that chance increases after each shot of course, as less blanks are left in the chamber\n"
        <<"However, if you feel like the next bullet will be the killer, you can aim at an opponent instead!\n"
        <<"If you guess was wrong though, and you shoot a blank, you have to fire a shot at yourself, increasing your risk\n"
        <<"Lastly, you can also spin the cylinder if your not feeling good about the next shot.\n"
        <<"You can't shoot an opponent after spinning though, you have to shoot yourself.\n";
        }
        else if(pick==3){
    fstream lives, names;
    int wins, loss;
    string na;
    lives.open("stat.dat");
    if(lives){
        lives>>wins;
        lives>>loss;
        cout<<"You have survived "<<wins<<" times, and have died "<<loss<<" times.\n";
    }
    else cout<<"You haven't played a single player yet!\n";
    lives.close();
    names.open("names.txt");
    if(names){
        cout<<"Names entered\n";
        while (names>>na) cout<<na<<endl;
        names.close();
    }
    else cout<<"No names have been entered\n";
        }
    }
    return 0;
}

bool atta(int &bull, bool pAlive, bool &oAlive, string name, string opName){ //Attack for multi and com
    const float CHAMB=6;

    return pAlive;
}
bool satta(int &bull, bool oAlive, string opName, char &sel){ //Single player attact only
    const float CHAMB=6;
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
void save(bool win){ //Saves your wins and losses.
    
    int wins=0, loss=0;
    fstream winloss;
    winloss.open("stat.dat");
     if(winloss){
        winloss>>wins;
        winloss>>loss;
        winloss.clear();
        winloss.seekg(0, std::ios::beg);
        if(win) wins++;
        else loss++;
        winloss<<wins<<endl;
        winloss<<loss<<endl;
        winloss.close();
    }
     else smakefi(win);

}
void names(string name[], int numbN){ //Saves data to names.txt, initilized whenever typing names
    fstream pnames;
    int count=0;
    pnames.open("names.txt");
    if(pnames){
        pnames.seekg (0, ios::end);
        for(int i=0; i<numbN; i++){
            pnames<<name[i]<<endl;
        }
        pnames.close();
    }
    else nmakefi(name, numbN); 
}
void smakefi(bool win){ //Makes the score file if it does not already exist
    ofstream newfile;
    newfile.open("stat.dat");
    newfile.close();
    save(win);
}
void nmakefi(string name[], int numbN){ //Makes a name file ibid^, made them seperate to avoid annoying bool thing
    ofstream newfile;
    newfile.open("names.txt");
    newfile.close();
    names(name, numbN);
}
string ranname(string def){ //Picks a random name from saved
    fstream pulfi;
    string temp;
    int count=0, rnam;
    pulfi.open("names.txt");
    if(pulfi){
        while(pulfi>>temp) count++;
        if(count<=2){
            return def;
        }
        string pulnam[count];
        pulfi.close();
        pulfi.open("names.txt");
        if(pulfi){
        for(int i=0; i<count; i++){
            pulfi>>pulnam[i];
        }
        rnam=(rand()%((count-1)-0+1))+0;
        return pulnam[rnam];
        }
        else{
            return def;
        }
    }
    else{
        return def;
    }
}

/* <><><To Do list><><>
 * Make a 1 player mode with -3- 2 com competitors. [x]
 * Make a 4 player mode, with insertable names [x]
 * Make com names random names [x]
 * Make com smart [x] kinda
 * Save times died and won [x]
 */

/*~~~~~Notes~~~~~~~~~~~~[-][X]
 * Max Rand is 2147483647.0f │
 * or thing: ||
 */