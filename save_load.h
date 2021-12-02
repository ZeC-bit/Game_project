#ifndef SAVE_LOAD_H
#define SAVE_LOAD_H
#include "universal.h"


void save_data(status stat_save);
int num_space(std::string target);
status load_data(status *stat_ptr);

#endif