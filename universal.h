#ifndef UNIVERSAL_H
#define UNIVERSAL_H
#include <string>

const std::string names[3] = {"Iris", "Olivia", "Daisy"};

struct status {
    std::string name;
    int date;
    int sun;
    double affi_level[3];
    double inti_level[3];
    double GPA;
    int hp;
    std::string names[3];
};

#endif