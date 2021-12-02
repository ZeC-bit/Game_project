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
#include "ending.h"

using namespace std;
// This is a function that will receive user's next action
// As inputs, it receives the status, mood, quit switch from execution function 
// and passes them as outputs to our location functions for further operation.
// If user decides to quit, it will turn the quit switch on and go back to main function for return 0

void decision (status& pass_stat, int pass_mood, bool *qt) {
    cout << "What are you up to?" << endl;
    cout << "[1] Go to library [2] Go to garden [3] Go to cafeteria" << endl;
    cout << "[4] Go to lecture room [5] Save progress [6] Load data" << endl;
    cout << "[7] Quit game" << endl;
    cout << "Your choice: ";
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
            break;
        case 7:
            cout << "See you again!\n";
            *qt = true;
            break;
        default:
            cout << "Wrong input!\n";
            while (cin.fail()) {
                cin.clear();
                cin.ignore(INT8_MAX, '\n');
            }
            decision(pass_stat, pass_mood, &*qt);
    }
}

void execution(status stat_in) {
    status current_stat = stat_in;
    // qt_flag is a 'switch' for terminating the program
    // when qt_flag becomes true, the execution function is terminated
    // when execution function is terminated, it goes back to the main function
    // and the main function will return 0
    bool qt_flag = false;

    
    //When the date hits the length set by user, ending sequence will begin
    while (current_stat.date <= current_stat.game_length) {

        cout << endl;
        //Displaying current status to the screen
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
        getchar();
        if (current_stat.sun == 0) {
            cout << "Good morning " << current_stat.name << "!" << endl;
        }
        else if (current_stat.sun == 1) {
            cout << "Good afternoon " << current_stat.name << "!" << endl;
        }
        else {
            cout << "Good evening " << current_stat.name << "!" << endl;
        }
        
        // Random variable "mood" which can have 3 possible integers.
        // mood represents the mood of characters you will encounter
        // mood will have an effect on the increment and decrement when you interact with characters
        // mood 0 means bad atmosphere, mood 1 means moderate atmosphere, mood 2 means good atmosphere.
        int mood;
        srand(time(0));
        mood = rand() % 3;

        getchar();
        decision(current_stat, mood, &qt_flag);
        // After returning from decision function -> location functions
        // some values may have changed and require some manipulation

        // A 'Day' consists of morning, afternoon and evening
        // After evening action, day is increased by one and it goes back to morning

        // To change the values from the input status, we used pointer variable
        status *cs_ptr = & current_stat;
        if (current_stat.sun >= 3) {
            (*cs_ptr).sun = 0;
            (*cs_ptr).date++;
            (*cs_ptr).hp++;
            // Here we actually have different difficulty levels for different characters.
            // Iris ending will be difficult to attain, as the affinity and intimacy levels 
            // decreases by small increments everyday
            // On the other hand, Olivia ending is easier to attain, as affinity and intimacy
            // increases everyday
            (*cs_ptr).affi_level[1] += 0.25;
            (*cs_ptr).affi_level[0] -= 0.15;
            (*cs_ptr).inti_level[1] += 0.20;
            (*cs_ptr).inti_level[0] -= 0.15;
        }

        // This is when you do not care about maintaining health in the game
        // when the hp hits 0, exit switch is turned on
        if (current_stat.hp <= 0) {
            cout << endl;
            cout << "Your Health became too bad and you earned yourself cancer.\n";
            getchar();
            getchar();
            cout << "You died T.T. Try to do some exercise next time!\n";
            cout << "(Hint: Why not play some sports?)\n";
            getchar();
            getchar();
            qt_flag = true;
            break;
        }

        //Limiting the GPA value
        if (current_stat.GPA > 4.3) {
            cs_ptr->GPA = 4.3;
        }

        // During the game, if the exit switch is turned on during interaction,
        // the game will end
        if (qt_flag == true) {
            break;
        }
    }
    if (current_stat.date > current_stat.game_length) {
        cout << endl;
        cout << "Day " << current_stat.game_length + 1 << ", It's finally Christmas Eve..." << endl;
        getchar();
        ending(current_stat);
        // After ending sequence
        // return to main function
    }
}