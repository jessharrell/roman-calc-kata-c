#ifndef calculator_h
#define calculator_h

typedef struct _Calculator
{ 
  char* (*add)(char* addend1, char* addend2);
} Calculator;

void initCalculator(Calculator* calc);

#endif