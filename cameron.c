#include "cameron.h"



void EmulateCameron(int numLoops) {
	
	srand(time(NULL));

	int phraseChoice = rand() % cameronPhraseOptions;

	for (int i = 0; i < numLoops; ++i) 
	{
		CameronSpeak(phraseChoice);	
		phraseChoice++; //force a new choice for each run
	}
}



void CameronSpeak(int option) {

	printf( "%s", cameronPhrase[option] );
}
