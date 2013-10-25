#ifndef TALK_SIM_H
#define TALK_SIM_H


#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

#include "jennifer.h"
#include "chris.h"
#include "gradon.h"



enum personIndex{ GRADON, CHRIS, JENNIFER, JESSICA, CAMERON, NUM_PERSON_NAMES};


int simWho(char* personName);
void Simulate(int who, int runCount);
void DisplayUsage();

#endif
