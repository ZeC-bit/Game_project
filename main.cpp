#include <iostream>
#include <string>
#include <climits>
#include "universal.h"
#include "save_load.h"
#include "execution.h"



using namespace std;

void introduction(string *name) {
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
    cout << "Today is December 19, XXXX.";
    getchar();
    cout << "You have 5 days until Christmas Eve.";
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
    status starting_stat = {"unkown", 1, 0, {0,0,0}, {0,0,0}, 3.0, 5, {"Iris", "Olivia", "Daisy"}};
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
            introduction(&starting_stat.name);
            break;
        }
        else if (starter != 2) {
            cout << "Wrong input!" << endl;;
            cout << "(Enter 1 if you want to start from beginning)" << endl << "(Enter 2 if you wish to continue from previous progress)" << endl;
            while (cin.fail()) {
                cin.clear();
                cin.ignore(INT_MAX, '\n');
            }
            cin >> starter;
        }
        else {
            starting_stat = load_data(&starting_stat);
            if (starting_stat.name == "unkown" && starting_stat.date == 1 && starting_stat.sun == 0 && starting_stat.GPA == 3.0 && starting_stat.hp == 3) {
                cout << "Starting from beginning...\n";
                getchar();
                introduction(&starting_stat.name);
            }
            break;
        }
    }
    execution(starting_stat);
    
    return 0;
}
