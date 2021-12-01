#ifndef UNIVERSAL_H
#define UNIVERSAL_H
#include <string>
#include <vector>

struct status {
    std::string name;
    int date;
    int time;
    char location;
    double affi_level[3];
    double inti_level[3];
    double GPA;
    int hp;
    std::string names[3];
};



#endif