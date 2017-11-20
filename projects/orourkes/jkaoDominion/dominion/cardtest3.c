#include "dominion.h"
#include <stdio.h>
#include <stdlib.h>
#include "rngs.h"
#include "myasserts.h"


int main() {
    struct gameState G;
    int cards[10] = {adventurer,gold,ambassador,cutpurse,tribute,embargo,smithy,
    outpost,copper,mine};
    initializeGame(4, cards, 1, &G);
    int playerHand = numHandCards(&G);
    int playerDeck = G.deckCount[G.whoseTurn];
    printf("Supply of province is empty\n");
    //myassert(1==1, "myassert works, playAdventurer is wrong.");
    myassert(playAdventurer(&G, 2, cards[1])==0,   "Adventurer returned the correct value.");
    printf("Number of cards in hand hand %i, hand size %i", numHandCards(&G), G.handCount[1]);
    myassert(numHandCards(&G) == G.handCount[1] + 2, "Two cards added to hand.");
    myassert(G.numPlayers==4, "Number of players does not change.");
    myassert(whoseTurn(&G)==1, "Whoseturn does not change.");
    return 0;
}
