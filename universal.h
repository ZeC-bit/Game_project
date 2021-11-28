#ifndef UNIVERSAL_H
#define UNIVERSAL_H
#include <string>

using namespace std;

struct status {
    string c_name;
    int c_date;
    int c_time;
    char c_location;
    int c_aff_level[3];
    int c_int_level[3];
    double c_GPA;
    int c_health;
};


#endif