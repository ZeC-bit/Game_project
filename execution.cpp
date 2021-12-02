#include <iostream>
#include <string>
#include <stdlib.h>
#include "universal.h"
#include "execution.h"
#include "library.h"
#include "garden.h"
#include "cafeteria.h"
#include "lecture.h"
#include "save_load.h"

using namespace std;

void decision (status& pass_stat, int pass_mood, bool *qt) {
    cout << "What are you up to?" << endl;
    cout << "[1] Go to library [2] Go to garden [3] Go to cafeteria" << endl;
    cout << "[4] Go to lecture room [5] Save progress [6] Load data" << endl;
    cout << "[7] Quit game" << endl;

    int input;
    cin >> input;

    switch ( input )
    {
        case 1:
            library(&pass_stat, pass_mood);
            break;
        case 2:
            garden(&pass_stat, pass_mood);
            break;
        case 3:
            cafeteria(&pass_stat, pass_mood);
            break;
        case 4:
            lect(&pass_stat, pass_mood);
            break;
        case 5:
            save_data(pass_stat);
            break;
        case 6:
            pass_stat = load_data(&pass_stat);
        case 7:
            cout << "See you again!\n";
            *qt = true;
            break;
        default:
            cout << "Wrong input!\n";
            while (cin.fail()) {
                cin.clear();
                cin.ignore(INT_MAX, '\n');
            }
            decision(pass_stat, pass_mood, &*qt);
    }
}

void execution(status& stat_in) {
    status current_stat = stat_in;
    //Random variable "mood" which can have 3 possible integers.
    //mood 0 means bad atmosphere, mood 1 means moderate atmosphere, mood 2 means good atmosphere.
    int mood;
    bool qt_flag = false;
    status *cs_ptr = & current_stat;
    
    while (current_stat.date != 10) {
        if (current_stat.sun >= 3) {
            (*cs_ptr).sun = 0;
            (*cs_ptr).date++;
        }
        cout << endl;
        cout << "Day " << current_stat.date << " ";
        switch (current_stat.sun)
        {
            case 0:
                cout << "Morning\n";
                break;
            case 1:
                cout << "Afternoon\n";
                break;
            default:
                cout << "Evening\n";
        }
        for (int j = 0; j != 3; j++) {
            cout << current_stat.names[j] << " Intimacy Level: [" << current_stat.inti_level[j] << "]";
            cout << endl;
        }
        cout << "Health Point : " << current_stat.hp << "   " << "GPA : " << current_stat.GPA << endl;
        if (current_stat.sun == 0) {
            cout << "Good morning " << current_stat.name << "!" << endl;
        }
        else if (current_stat.sun == 1) {
            cout << "Good afternoon " << current_stat.name << "!" << endl;
        }
        else {
            cout << "Good evening " << current_stat.name << "!" << endl;
        }
        
        if (current_stat.date != 5) {
            srand(time(0));
            mood = rand() % 3;
            decision(current_stat, mood, &qt_flag);
        }
        if (current_stat.hp <= 0) {
            cout << "Your Health became too bad and you earned yourself cancer.\n";
            cout << "You died T.T. Try to do some exercise next time!\n";
            cout << "(Hint: Why not play some sports?)\n";
            qt_flag = true;
            break;
        }
        if (qt_flag == true) {
            break;
        }
        
    }
}