#include <iostream>
#include <string>
#include <climits>
#include "universal.h"
#include "save_load.h"
#include "execution.h"



using namespace std;

void introduction(string *name, int *game_len) {
    cout << "Hey there!\n";
    cout << "Can you tell me your name?\n";
    string deli;
    cin >> deli;
    *name = deli;
    cout << "Hello " << *name << "! Welcome to the University of Love and Peace!\n";
    getchar();
    cout << "Whether it be your GPA, friends, or lover.";
    getchar();
    cout << "Here, you can find what is lacking in your university life.\n";
    getchar();
    cout << "First, choose how many days you want to stay here!\n";
    cout << "(Enter a number between 1 ~ 10.)\n(1 ~ 3 will be difficult, 4 ~ 6 are moderate, 7 ~ 10 will be easy.)\n";
    int inpu;
    cin >> inpu;
    while (true) {
        if (inpu > 10 || inpu < 1) {
            cout << "Wrong input!" << endl << "Please choose again.\n";
            while (cin.fail()) {
                cin.clear();
                cin.ignore(INT_MAX, '\n');
            }
            cin >> inpu;
        }
        else {
            *game_len = inpu;
            break;
        }
    }
    cout << "Today is December "<< 24 - *game_len << ", XXXX.\n";
    getchar();
    cout << "You have " << *game_len << " days until Christmas Eve.";
    getchar();
    cout << "What you will be doing on Christmas Eve,";
    getchar();
    cout << "is all up to your choices.\n";
    getchar();
    cout << "Without further adieu, I'll leave it to you.\n";
    cout << "(Press enter/return to dive in!)";
    getchar();
}

int main() {
    status starting_stat = {5, "unkown", 1, 0, {0,0,0}, {0,0,0}, 3.0, 5, {"Iris", "Olivia", "Daisy"}};
    cout << endl << endl;
    cout << "HB and King SH presents" << endl;
    getchar();
    cout << "     *            *            *" << endl;
    cout << " *         * ..   ...                    *" << endl;
    cout << "          _____________*_________   *" << endl;
    cout << "    *     | Under the Mistletoe |        *" << endl;
    cout << "          ‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾" << endl;
    cout << "  *               *                X  *" << endl;
    cout << "           *               *      XXX      *" << endl;
    cout << "     *           *             * XXXXX" << endl;
    cout << "              *                    X      *" << endl;
    cout << "***********************************X********" << endl;
    cout << "(Press enter/return to continue)\n";
    getchar();
    cout << "(someone from the monitor) : Hey you!";
    getchar();
    cout <<  "(someone from the monitor) : Yes, you!";
    getchar();
    cout << "(someone from the monitor) : You look familiar !" << endl << endl;
    cout << "(Enter 1 if you want to start from beginning)" << endl << "(Enter 2 if you wish to continue from previous progress)" << endl;
    
    int starter;
    cin >> starter;
    
    while (true) {
        if (starter == 1) {
            introduction(&starting_stat.name, &starting_stat.game_length);
            break;
        }
        else if (starter != 2) {
            cout << "Wrong input!" << endl;
            cout << "(Enter 1 if you want to start from beginning)" << endl << "(Enter 2 if you wish to continue from previous progress)" << endl;
            while (cin.fail()) {
                cin.clear();
                cin.ignore(INT_MAX, '\n');
            }
            cin >> starter;
        }
        else {
            starting_stat = load_data(&starting_stat);
            if (starting_stat.name == "unkown" && starting_stat.date == 1 && starting_stat.sun == 0 && starting_stat.GPA == 3 && starting_stat.hp == 5) {
                cout << "Starting from beginning...\n";
                getchar();
                introduction(&starting_stat.name, &starting_stat.game_length);
            }
            break;
        }
    }
    execution(starting_stat);
    
    return 0;
}
