#include "dominion.h"
#include <stdio.h>
#include <stdlib.h>
#include "rngs.h"
#include "myasserts.h"


int main (int argc, char** argv) {
    struct gameState G;
    G.numPlayers = 4;
    G.handCount[1]=5;
    G.whoseTurn=1;

    //printf("Supply of province is empty\n");
    myassert(play_smithy(&G, 1, 1)==0, "Ran play_smithy");
    myassert(G.numPlayers==4, "Number of players does not change.");
    myassert(whoseTurn(&G)==1, "Whoseturn does not change.");
    myassert(numHandCards(&G) == (G.handCount[1] + 2), "Wrong number of cards drawn by smithy.");
    return 0;
}
