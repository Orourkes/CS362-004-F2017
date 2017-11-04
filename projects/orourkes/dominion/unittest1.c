/**************************************************************************
*   test_getcost.c
*   written by: Suzi O'Rourke
*   date 10/28/2017
**************************************************************************/

#include "dominion.h"
#include <stdio.h>
#include <stdlib.h>
#include "rngs.h"
#include "myasserts.h"



int main (void) {

    myassert(getCost(curse)==0, "Cost of curse is correct.");
    myassert(getCost(estate)== 2, "Cost of estate is correct.");
    myassert(getCost(duchy)== 5, "Cost of duchy is correct.");
    myassert(getCost(province)== 8, "Cost of province is correct.");
    myassert(getCost(copper)== 0, "Cost of copper is correct.");
    myassert(getCost(silver)== 3, "Cost of silver is correct.");
    myassert(getCost(gold)== 6, "Cost of gold is correct.");
    myassert(getCost(adventurer)== 6,"Cost of adventurer is correct.");
    myassert(getCost(council_room)== 5, "Cost of council_room is correct.");
    myassert(getCost(feast)== 4, "Cost of feast is correct.");
    myassert(getCost(gardens)== 4, "Cost of gardens is correct.");
    myassert(getCost(mine)== 5, "Cost of mine is correct.");
    myassert(getCost(remodel)== 4, "Cost of remodel is correct.");
    myassert(getCost(smithy)== 4, "Cost of smithy is correct.");
    myassert(getCost(village)== 3, "Cost of village is correct.");
    myassert(getCost(baron)== 4, "Cost of baron is correct.");
    myassert(getCost(great_hall)== 3, "Cost of great_hall is correct.");
    myassert(getCost(minion)== 5, "Cost of minion is correct.");
    myassert(getCost(steward)== 3, "Cost of steward is correct.");
    myassert(getCost(tribute)== 5, "Cost of tribute is correct.");
    myassert(getCost(ambassador)== 3, "Cost of ambassador is correct.");
    myassert(getCost(cutpurse)== 4, "Cost of cutpurse is correct.");
    myassert(getCost(embargo)== 2, "Cost of embargo is correct.");
    myassert(getCost(outpost)== 5, "Cost of outpost is correct.");
    myassert(getCost(salvager)== 4, "Cost of salvager is correct.");
    myassert(getCost(sea_hag)== 4, "Cost of sea_hag is correct.");
    myassert(getCost(treasure_map)== 4, "Cost of treasure_map is correct.");
    return 0;
}
