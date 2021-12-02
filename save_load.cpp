#include <iostream>
#include <fstream>
#include <string>
#include "universal.h"
#include "save_load.h"

using namespace std;

void save_data(status stat_save)
{
    string fork;
    cout << "Do you want to save current progress?\n";
    getchar();
    cout << "Press 'n' if you do not wish to save.";

    // Check again just in case
    fork = getchar();
    if (fork == "n" || fork == "N") {
        cout << "Going back home";
    }
    else {
        cout << "Enter name for your new save file.\n";
        cout << "(without \".txt\"");
        cout << "(Caution: If you write an existing file name, all data will be overwritten!)\n";
        
        ofstream d_out;

        string save_name;
        cin >> save_name;

        save_name += ".txt";

        // create a new .txt file with the input name
        d_out.open(save_name.c_str());
        // write data to the file save file
        d_out << stat_save.name << endl << stat_save.date << endl << stat_save.sun << endl;
        // write data stored in the struct's array
        for (int i = 0; i != 3; i++) {
            d_out << stat_save.affi_level[i] << endl << stat_save.inti_level[i] << endl;
        }
        d_out << stat_save.GPA << endl << stat_save.hp << endl;
        cout << "Your current progress has been saved at \"" << save_name << "!\"" << endl;
        d_out.close();
        getchar();
    }
}

// this function calculates the number of " " in the string (number of words)
int num_space(string target) {
    int space = 0;
    for(int i = 0; i < target.length(); i++) {
        if(target[i]==' ') {
        space++;
        }
    }
    return space;
}

status load_data (status *stat_ptr) {
    string fork;
    cout << "Do you want to load data from previous progress?\n";
    cout << "Press 'n' if you do not wish to load.";
    
    fork = getchar();
    if (fork == "n" || fork == "N") {
        cout << "Going back\n";
        getchar();
        //return just the input
        return *stat_ptr;
    }
    else {
        cout << "Enter name of your save file excluding \".txt\")\n";
        string load_name;
        cin >> load_name;
        load_name += ".txt";

        ifstream d_in;
        d_in.open(load_name.c_str());
        if (d_in.fail()) {
            cout << "Error in opening the file \"" << load_name << "\".\n";
            cout << "Going back home\n";
            return *stat_ptr;
        }
        else {
            string container = "", line_in;
            // transfer all lines from file to a string container first
            // with a delimiter " "
            while(getline(d_in,line_in)) {
                container += line_in;
                container += " ";
            }
            // cut the container word by word and transfer to the status components with their appropriate type
            int posi;
            // dynamic array depending on the number of lines from file, that will store lines
            string * fedex = new string [num_space(container)];
            for (int index = 0; index < num_space(container); index++) {
                posi = container.find(' ');
                fedex[index] = container.substr(0, posi - 1);
                container = container.erase(0, posi);
            }
            stat_ptr->name = fedex[0];
            stat_ptr->date = stoi(fedex[1]);
            stat_ptr->sun = stoi(fedex[2]);
            for (int k = 0; k != 3; k++) {
                int l = 2 * k + 3;
                int m = 2 * k + 4;
                stat_ptr->affi_level[k] = stod(fedex[l]);
                stat_ptr->inti_level[k] = stod(fedex[m]);
            }
            stat_ptr->GPA = stod(fedex[9]);
            stat_ptr->hp = stoi(fedex[10]);

            cout << "Data has been successfully loaded!";
            getchar();
            getchar();
            d_in.close();
            return *stat_ptr;
        }
    }
}