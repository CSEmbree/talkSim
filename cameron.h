#ifndef CAMERON_H
#define CAMERON_H

#include <stdio.h>
#include <stdlib.h>
#include <time.h>



//prototype
void EmulateCameron(int numLoops);
void CameronSpeak(int option);


int cameronPhraseOptions = 1;
char *cameronPhrase[] = {"cruel world\n"};


#endif
