#include "gradon.h"



void EmulateGradon(int numLoops) {
	
	srand(time(NULL));

	int phraseChoice = rand() % gradonPhraseOptions;

	for (int i = 0; i < numLoops; ++i) 
	{
		GradonSpeak(phraseChoice);	
		phraseChoice++; //force a new choice for each run
	}
}



void GradonSpeak(int option) {

	printf( "%s", gradonPhrase[option] );
}
