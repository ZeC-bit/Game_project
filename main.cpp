#include <iostream>
#include <string>
#include <climits>
#include "universal.h"
#include "save_load.h"
#include "execution.h"



using namespace std;

void introduction(string *name) {
    cout << "Can you tell me your name?\n";
    cin >> *name;
    cout << "Hello " << *name << "! Welcome to the University of Love and Peace!\n";
    getchar();
    cout << "Whether it be your GPA, friends, or lover.";
    getchar();
    cout << "Here, you can find what is lacking in your university life.";
    getchar();
    cout << "Just a gentle push of that enter key and your journey until Christmas will begin!";
    getchar();
    cout << "But remember! You are responsible for your choices!\n";
    cout << "(Press enter/return to dive in!)";
    getchar();
    
}

int main() {
    status starting_stat = {"unkown", 1, 0, {0,0,0}, {0,0,0}, 3.0, 3};
    cout << "HB and King SH presents" << endl << "(Press enter/return to continue)";
    getchar();
    cout << "<Under the Mistletoe>";
    getchar();
    cout << "Hey you!";
    getchar();
    cout <<  "Yes, you!";
    getchar();
    cout << "You look familiar" << endl;
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
            continue;
        }
    }
    execution(starting_stat);
    
    return 0;
}
