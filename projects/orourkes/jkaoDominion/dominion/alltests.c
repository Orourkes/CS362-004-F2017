#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include "myasserts.h"
#include "unittests.h"
#include "rngs.h"
#include "dominion.h"

int main()
{
    int hello = 5;
    printf("Hello world!\n");
    myassert(hello < 5, "Hello is wrong value.");
    test_getcost();
    test_isgameover();
    test_updatecoins();
    test_whoseturn();
    test_adventurer();
    test_councilroom();
    test_smithy();
    test_remodel();

    return 0;
}
