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
	
	

	baronEffect(0,G);
	baronEffect(1,G);
	
	
	return 0;
}
