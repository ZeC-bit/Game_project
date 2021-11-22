#include <iostream>
#include <string>
#include <fstream>

using namespace std;

void introduction() {
    string name;
    cout << "What is your name?";
    cin >> name;

}
void load_stat(stat stat_transfer) {
    //지난 정보 불러오기
    char filename[80];
    cin >> filename;
    ifstream loader;
    loader.open(filename);

    if (loader.fail()) {
        cout << "Error in loading the save file. Check the file, location or file name again" << endl;
        exit(1);
    }
    string line;
    int i = 0;
    while (getline(loader, line)) {
        stat_transfer[i] = line;
        i++;
    }
}

int main() {
    int starter;
    struct stat {
        string c_name;
        int c_date;
        int c_time;
        char c_location;
        int c_aff_level;
        int c_int_level;
        double c_GPA;
        int c_health;
    };
    stat current_stat;

    cout << "HB and King SH presents" << endl;
    getchar();
    cout << "<Under the Mistletoe>" << endl;
    getchar();
    cout << "Hey you" << endl;
    getchar();
    cout <<  "Yes, you" << endl;
    cout << "You look familiar" << endl;
    cout << "(Enter 1 if you want to start from beginning)" << "(Enter 2 if you wish to continue from previous progress)" << endl;
    cin >> starter;
    while (true) {
        if (starter == 1) {
            introduction();
            break;
        }
        else if (starter != 2) {
            cout << "Wrong input, choose again!";
            cin >> starter;
        }
        else {
            load_stat(current_stat);
            break;
        }
    }

    
    return 0;
}
