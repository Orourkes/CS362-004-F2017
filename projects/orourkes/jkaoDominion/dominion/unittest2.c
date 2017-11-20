#include "dominion.h"
#include <stdio.h>
#include <stdlib.h>
#include "rngs.h"
#include "myasserts.h"


int main(void) {

    struct gameState G;
    G.numPlayers = 4;
    G.handCount[1]=5;
    G.whoseTurn=1;
    G.supplyCount[province] = 0;

    //printf("Supply of province is empty\n");
    myassert(isGameOver(&G)==1, "Test Empty Supply of Province. Game is over.");

    G.supplyCount[province] = 10;
    myassert(isGameOver(&G)!=0, "Test positive supply of Province. Game is not over");

    G.supplyCount[province] = -1;
    myassert(isGameOver(&G)==1, "Test negative Supply of Province. Game is over.");

	return 0;
    }
