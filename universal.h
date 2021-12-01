#ifndef UNIVERSAL_H
#define UNIVERSAL_H
#include <string>
#include <vector>

struct status {
    std::string name;
    int date;
    int time;
    char location;
    double aff_level[3];
    double int_level[3];
    double GPA;
    int health;
    std::string names[3];
};



#endif