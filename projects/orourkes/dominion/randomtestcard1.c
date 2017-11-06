#include "dominion.h"
#include <stdio.h>
#include <stdlib.h>
#include "rngs.h"
#include "myasserts.h"
#include "time.h"

int main(){
    
   // time_t t;
    struct gameState G;
    G.handCount[1]=5; 
    G.whoseTurn=1;
    //int runs=10; // set a value for number of loops to randomly test
    //int i=0;
    //if(i< runs)
    {
//	i= i+1;
   	srand(time(NULL)); 
	int seed = rand() % MAX_PLAYERS;
	G.numPlayers = seed; 
    	//printf("Supply of province is empty\n");
    	myassert(play_smithy(&G, 1, 1)==0, "Ran play_smithy");
    	myassert(G.numPlayers==seed, "Number of players does not change.");
    	myassert(whoseTurn(&G)==1, "Whoseturn does not change.");
    	myassert(numHandCards(&G) == (G.handCount[1] + 2), "Wrong number of cards drawn by smithy.");
    } 
   return 0;
}
