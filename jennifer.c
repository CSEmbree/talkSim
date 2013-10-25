#include "jennifer.h"



void EmulateJennifer(int numLoops) {
	
	srand(time(NULL));

	int phraseChoice = rand() % phraseOptions;

	for (int i = 0; i < numLoops; ++i) 
	{
		Speak(phraseChoice);	
		phraseChoice++; //force a new choice for each run
	}
}



void Speak(int option) {

	printf( "%s", phrase[option] );
}
