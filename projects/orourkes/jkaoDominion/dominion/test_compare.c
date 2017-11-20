#include "../Headers/dominion.h"
#include <stdio.h>
#include <stdlib.h>
#include "../Headers/rngs.h"
#include "../../Hello/myasserts.h"


int main (int argc, char** argv) {

    int a;
    int b;
    a= 0;
    b=0;
    myassert(compare((void*)a,(void*)b)==0, "a and b are equal to 0");
    a=b=1;
    myassert(compare(&a,&b)==0, "a and b are equal to 1");
    a=b=-1;
    myassert(compare(&a,&b)==0, "a and b are equal to -1");
    a=10, b=0;
    myassert(compare(&a,&b)==1, "a is equal to 10 b are equal to 0");
    a=1,  b=0;
    myassert(compare(&a,&b)==1, "a is euqual to 0 and b are equal to 0");
    a=-1, b=0;
    myassert(compare(&a,&b)==-1, "a is euqal to -1and b are equal to 0");
    a=0, b=10;
    myassert(compare(&a,&b)==-1, "a is equal to 10 b are equal to 0");
    a=0, b=1;
    myassert(compare(&a,&b)==-1, "a is euqual to 0 and b are equal to 0");
    a=0, b=-1;
    myassert(compare(&a,&b)==1, "a is euqal to -1and b are equal to 0");

    return 0;
}
