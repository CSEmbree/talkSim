#include "chris.h"



void EmulateChris(int numLoops) {
	
	srand(time(NULL));

	int phraseChoice = rand() % chrisPhraseOptions;

	for (int i = 0; i < numLoops; ++i) 
	{
		ChrisSpeak(phraseChoice);	
		phraseChoice++; //force a new choice for each run
	}
}



void ChrisSpeak(int option) {

	printf( "%s", chrisPhrase[option] );
}
