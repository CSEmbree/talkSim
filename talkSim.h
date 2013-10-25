#ifndef JENNIFER_H
#define JENNIFER_H


#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

#include "jennifer.h"



enum personIndex{ GRADON, CHRIS, JENNIFER, JESSICA, CAMERON, NUM_PERSON_NAMES};


int simWho(char* personName);
void Simulate(int who, int runCount);
void DisplayUsage();

#endif
