#include "jessica.h"



void EmulateJessica(int numLoops) {
	
	srand(time(NULL));

	int phraseChoice = rand() % jessicaPhraseOptions;

	for (int i = 0; i < numLoops; ++i) 
	{
		JessicaSpeak(phraseChoice);	
		phraseChoice++; //force a new choice for each run
	}
}



void JessicsSpeak(int option) {

	printf( "%s", jessicaPhrase[option] );
}
