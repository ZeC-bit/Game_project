#include <iostream>
#include <string>
#include <stdlib.h>
#include "universal.h"

using namespace std;

void execution(status &stat_data) {
    //Random variable "mood" which can have 3 possible integers. 
    //mood 0 means bad atmosphere, mood 1 means moderate atmosphere, mood 2 means good atmosphere.
    int mood[3];
    while (stat_data.date != 10) {
        for (int i = 0; i != 3; i++) {
        srand(time(0));
        mood[i] = rand() % 3;
        }
        if (stat_data.date != 5) {
            //birthday event
        }
        cout << stat_data.date << " " << stat_data.time << endl;
        for (int j = 0; j != 3; j++) {
            cout << stat_data.names[j] << " Intimacy Level: [" << stat_data.int_level[j] << "]";
            cout << endl;
        }
        cout << "Health Point : " << stat_data.health << "GPA : " << stat_data.GPA << endl;
        if (stat_data.time == 0) {
            cout << "Good morning " << stat_data.name << "!" << endl;
        }
        else if (stat_data.time == 1) {
            cout << "Good afternoon " << stat_data.name << "!" << endl;
        }
        else {
            cout << "Good evening " << stat_data.name << "!" << endl;
        }
        cout << "What are you up to?" << endl;
        cout << "[1] Go to library [2] Go to garden [3] Go to cafeteria" << endl;
        cout << "[4] Go to lecture room [5] Save progress [6] Load save data" << endl;
        cout << "[7] Quit game" << endl;
        int input;
        cin >> input;
        
    }
    ending(stat_data);
}