#include <iostream>
#include <fstream>
#include <string>
#include "save_load.h"

using namespace std;

void save_data(status &stat_save)
{
    string flag;
    cout << "Do you want to save current progress?";
    getchar();
    cout << "Press 'y' if you want to save progress. Press 'n' if you do not wish to save.";
    
    cin >> flag;
    if (flag == "n" || flag == "N") {
        exit(1);
    }
    
    cout << "Enter name for your save file.\n";
    ofstream d_out;
    string save_name;
    cin >> save_name;
    save_name += ".txt";
    d_out.open(save_name.c_str());
    d_out << stat_save.c_name << endl << stat_save.c_date << endl << stat_save.c_time << endl << stat_save.c_location << endl << stat_save.c_aff_level << endl << stat_save.c_int_level << endl << stat_save.c_GPA << endl << stat_save.c_health << endl;
    cout << "Your current progress has been saved at \"" << save_name << ".txt!\"\n";
    d_out.close();
}
