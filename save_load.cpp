#include <iostream>
#include <fstream>
#include <string>
#include "save_load.h"

using namespace std;

void save_data(status stat_save) 
{
    string flag;
    cout << "Do you want to save current progress?";
    getchar();
    cout << "Press 'y' if you want to save progress. Press 'n' if you do not want to save.";
    
    cin >> flag;
    if (flag == "n" || flag == "N") {
        exit(1);
    }
    
    cout << "Enter name for your save file.\n";
    ofstream dout;
    string save_name;
    cin >> save_name;
    save_name += ".txt";
    dout.open(save_name.c_str());
    dout << stat_save.c_name << endl << 

}

void load_data(status stat_load) 
{
    
