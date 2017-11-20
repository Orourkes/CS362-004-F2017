#include "dominion.h"
#include <stdio.h>
#include <stdlib.h>
#include "rngs.h"
#include "myasserts.h"
#include "time.h"

int main() {
    
    srand(time(NULL));
    struct gameState G;
    int seed =   rand() % MAX_PLAYERS;
    G.numPlayers =seed;
    G.handCount[1]=5;
    G.whoseTurn=1;

    //printf("Supply of province is empty\n");
    myassert(play_remodel(&G, 1, smithy, cutpurse, 5)==0, "Ran play_remodel, equal cards should return valid");
    myassert(G.numPlayers==seed, "Number of players does not change.");
    myassert(whoseTurn(&G)==1, "Whoseturn does not change.");
    return 0;
}
