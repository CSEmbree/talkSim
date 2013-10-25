#include "jennifer.h"



void EmulateJennifer(int numLoops) {
	
	srand(time(NULL));

	int phraseChoice = rand() % jenniferPhraseOptions;

	for (int i = 0; i < numLoops; ++i) 
	{
		JenniferSpeak(phraseChoice);	
		phraseChoice++; //force a new choice for each run
	}
}



void JenniferSpeak(int option) {

	printf( "%s", jenniferPhrase[option] );
}
