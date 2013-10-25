#ifndef JENNIFER_H
#define JENNIFER_H

#include <stdio.h>
#include <stdlib.h>
#include <time.h>



//prototype
void EmulateJennifer(int numLoops);
void Speak(int option);


int phraseOptions = 11;
char *phrase[] = {"Oh my God!\n", 
	"You guys!\n", 
	"Nooooo...\n", 
	"Aughhhh\n", 
	"No I don't.\n", 
	"oh wooow!\n", 
	"really?!\n", 
	"God...\n", 
	"*sigh*\n", 
	"*heavy sigh*\n", 
	"OH MY GOD!!\n"};


#endif
