#include "calculator.h"

static char* calcAdd (char* addend1, char* addend2) {
 char* sum = "foo";
 return sum;
}

void initCalculator(Calculator* calc) {
    calc->add = &calcAdd;
};