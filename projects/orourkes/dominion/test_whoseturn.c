#include "dominion.h"
#include <stdio.h>
#include <stdlib.h>
#include "rngs.h"
#include "myasserts.h"


int main (int argc, char** argv) {

    struct gameState G;
    G.whoseTurn=1;
    G.phase=1;
    G.coins=3;
    //printf(whoseTurn(G));
    printf("Whose turn is player %i\n", whoseTurn(&G));
    myassert(whoseTurn(&G)==1, "Correct Player's Turn");
    myassert(G.phase==1, "Correct phase of play");
    myassert(G.coins==3, "Correct number of coins");

  return 0;
}
