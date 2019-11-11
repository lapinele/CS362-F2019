#include "dominion.h"
#include "dominion_helpers.h"
#include "rngs.h"
#include <string.h>
#include <stdio.h>
#include <math.h>
#include <stdlib.h>
int main()
{

	//set your card array
	int k[10] = {adventurer, council_room,feast,gardens,mine, remodel,smithy,village,baron, great_hall};

	//declare the game state
//	
//
	int numPlayers=3;
	struct gameState* G=newGame();
	int randomSeed=2;
	
	int initializeGame(numPlayers,k,randomSeed,G);
	
	int falseChoice;
	int trueChoice;
	int handPos=5;
	int bigChoice=4;

void ambassadorEffect(bigChoice,trueChoice,G,handPos);
handPos++;
void ambassadorEffect(falseChoice,trueChoice,G,handPos);
handPos++;
void ambassadorEffect(trueChoice,trueChoice,G,handPos);

	
	return 0;
}
