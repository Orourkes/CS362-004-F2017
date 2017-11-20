#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include "myasserts.h"


int myassert(int return_value, char* result_msg)
{
    failed_assert=0;
    if(return_value == 1)
    {
        printf("Passed assertion: %s\n", result_msg);
    }
    else
    {
        printf("Failed assertion: %s\n", result_msg);
        failed_assert = 1;
    }
    return failed_assert;
}
int check_assert_results()
{
    if(failed_assert == 0)
    {
        printf("Asserts passed.\n");
    }
    return failed_assert;
}
