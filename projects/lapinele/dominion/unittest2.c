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
	int k[10] = {adventurer, council_room,feast,gardens,minion, remodel,smithy,village,baron, great_hall};

	//declare the game state
//	
//
	int numPlayers=2;
	struct gameState* G=newGame();
	int randomSeed=5;
	
	int initializeGame(numPlayers,k,randomSeed,G);
	int zer=0;
	int wunn=1;
	int handPos=1;
	
	minionEffect(1,1,G,2);
	minionEffect(0,0,G,2);	
	
	

	
	
	return 0;
}
