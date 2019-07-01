#include "utils.h"

void print_str(const char * str) {
    char* c = str;
    while (*c) ITM_SendChar(*c++);
}