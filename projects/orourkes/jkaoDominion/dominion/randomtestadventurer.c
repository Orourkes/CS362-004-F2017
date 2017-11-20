#include "dominion.h"
#include <stdio.h>
#include <stdlib.h>
#include "rngs.h"
#include "myasserts.h"
#include "time.h"

int main() {
    struct gameState G;
    int cards[10] = {adventurer,gold,ambassador,cutpurse,tribute,embargo,smithy,
    outpost,copper,mine};
    srand(time(NULL));
    int num_players = rand()% MAX_PLAYERS;	
    initializeGame(num_players, cards, 1, &G);
    //printf("Supply of province is empty\n");
    numHandCards(&G);
    //G.deckCount[G.whoseTurn];
    myassert(play_adventurer(2, &G, 1, 1)==0,   "Adventurer returned the correct value.");
    printf("Number of cards in hand hand %i, hand size %i", numHandCards(&G), G.handCount[1]);
    myassert(numHandCards(&G) == G.handCount[1] + 2, "Two cards added to hand.");
    myassert(G.numPlayers==num_players, "Number of players does not change.");
    myassert(whoseTurn(&G)==1, "Whoseturn does not change.");
    return 0;
}
