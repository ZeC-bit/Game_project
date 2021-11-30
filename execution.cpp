#include <iostream>
#include <string>
#include <stdlib.h>
#include "universal.h"

using namespace std;

void decision (status delivery) {
    cout << "What are you up to?" << endl;
    cout << "[1] Go to library [2] Go to garden [3] Go to cafeteria" << endl;
    cout << "[4] Go to lecture room [5] Save progress [6] Load save data" << endl;
    cout << "[7] Quit game" << endl;

    int input;
    cin >> input;

    switch ( input )
    {
        case 1:
            libr(delivery);
            break;
        case 2:
            garden(delivery);
            break;
        case 3:
            cafe(delivery);
            break;
        case 4:
            lect(delivery);
            break;
        case 5:
            save_data(delivery);
            break;
        case 6:
            load_data(delivery);
            break;
        case 7:
            cout << "See you again!";
            break;
        default:
            cout << "Wrong input";
            decision(delivery);
    }
}

void execution(status &current_stat) {
    //Random variable "mood" which can have 3 possible integers. 
    //mood 0 means bad atmosphere, mood 1 means moderate atmosphere, mood 2 means good atmosphere.
    int mood[3];
    while (current_stat.date != 10) {
        for (int i = 0; i != 3; i++) {
        srand(time(0));
        mood[i] = rand() % 3;
        }
        if (current_stat.date != 5) {
            //birthday event
        }
        cout << current_stat.date << " " << current_stat.time << endl;
        for (int j = 0; j != 3; j++) {
            cout << current_stat.names[j] << " Intimacy Level: [" << current_stat.int_level[j] << "]";
            cout << endl;
        }
        cout << "Health Point : " << current_stat.health << "GPA : " << current_stat.GPA << endl;
        if (current_stat.time == 0) {
            cout << "Good morning " << current_stat.name << "!" << endl;
        }
        else if (current_stat.time == 1) {
            cout << "Good afternoon " << current_stat.name << "!" << endl;
        }
        else {
            cout << "Good evening " << current_stat.name << "!" << endl;
        }

        decision(current_stat);
        
        
    }
    ending(current_stat);
}