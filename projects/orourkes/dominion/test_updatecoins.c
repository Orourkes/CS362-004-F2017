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
    G.phase=1;
    updateCoins(1, &G, 0);
    printf("coin value is %i\n", G.coins);
    myassert(G.coins==0, "coins value at 0, no bonus\n");
    updateCoins(1, &G, 1);
    myassert(G.coins==1, "coins value at 1, with +1 bonus\n");
    updateCoins(1, &G, 2);
    myassert(G.coins==2, "coins value at 2, with +2 bonus\n");
    updateCoins(1, &G, 3);
    myassert(G.coins==3, "coins value at 3, with +3 bonus\n");
    updateCoins(1, &G, -1);
    myassert(G.coins==-1, "coins value at -1, with -1 bonus\n");


  return 0;
}
