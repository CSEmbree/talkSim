#ifndef JESSICA_H
#define JESSICS_H

#include <stdio.h>
#include <stdlib.h>
#include <time.h>



//prototype
void EmulateJessica(int numLoops);
void JessicaSpeak(int option);


int jessicaPhraseOptions = 2;
char *jessicaPhrase[] = {"Greeting humans\n", "What is your inquery"};


#endif
