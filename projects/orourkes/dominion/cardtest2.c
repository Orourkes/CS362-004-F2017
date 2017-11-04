#include "dominion.h"
#include <stdio.h>
#include <stdlib.h>
#include "rngs.h"
#include "myasserts.h"


int main() {
    struct gameState G;
    G.numPlayers = 4;
    G.handCount[1]=5;
    G.whoseTurn=1;

    //printf("Supply of province is empty\n");
    myassert(play_remodel(&G, 1, smithy, cutpurse, 5)==0, "Ran play_remodel, equal cards should return valid");
    myassert(G.numPlayers==4, "Number of players does not change.");
    myassert(whoseTurn(&G)==1, "Whoseturn does not change.");
    return 0;
}
