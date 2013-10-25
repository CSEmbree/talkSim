#include "talkSim.h"



int main(int argc, char **argv) {
	
	int who, runCount;

	if(argc>1) {
		who = simWho(argv[1]);
		runCount = 1; //always perform one action per run

		if(argc>2)
			runCount = atoi(argv[2]);
	}
	else {
		DisplayUsage();
	} 
	

	Simulate(who, runCount); //run sim from user input
	

	return 0;
}



int simWho(char* personName) {
	
	int personIndex = -1;

	if( strcmp(personName, "gradon") == 0 ) {
		personIndex = GRADON;
	}
	else if ( strcmp(personName, "chris") == 0 ) {
		personIndex = CHRIS;
	}
	else if ( strcmp(personName, "jennifer") == 0 ) {
		personIndex = JENNIFER;
	}
	else if ( strcmp(personName, "jessica") == 0 ) {
		personIndex = JESSICA;
	}
	else if ( strcmp(personName, "cameron") == 0 ) {
		personIndex = CAMERON;
	}

	return personIndex; 
}



void Simulate(int who, int runCount){
	
	switch(who) 
	{
		case GRADON:
		    printf("Not yet implimented \n"); 
		    break;
		case CHRIS:
		    printf("Not yet implimented \n"); 
		    break;
		case JENNIFER:
		    EmulateJennifer( runCount );
		    break;
		case JESSICA:
		    printf("Not yet implimented \n"); 
		    break;
		case CAMERON:
		    printf("Not yet implimented \n"); 
		    break;
		default:
		    printf("No implimented person for this option \n"); 
	}
} 
	

void DisplayUsage() {

	printf("talksim::USAGE: ./sim <name> <iteratios> \n\t EX: ./sim jennifer 5\n\n");
}
