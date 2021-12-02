#include <iostream>
#include <fstream>
#include <string>
#include "universal.h"
#include "save_load.h"

using namespace std;

void save_data(status stat_save)
{
    string flag;
    cout << "Do you want to save current progress?";
    getchar();
    cout << "Press 'n' if you do not wish to save.";
    
    flag = getchar();
    if (flag == "n" || flag == "N") {
        exit(1);
    }
    
    cout << "Enter name for your save file.\n";
    ofstream d_out;
    string save_name;
    cin >> save_name;
    save_name += ".txt";
    d_out.open(save_name.c_str());
    d_out << stat_save.name << endl << stat_save.date << endl << stat_save.sun << endl;
    for (int i = 0; i != 3; i++) {
        d_out << stat_save.affi_level[i] << endl << stat_save.inti_level[i] << endl;
    }
    d_out << stat_save.GPA << endl << stat_save.hp << endl;
    cout << "Your current progress has been saved at \"" << save_name << "!\"" << endl;
    d_out.close();
}
