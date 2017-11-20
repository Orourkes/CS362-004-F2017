#ifndef MYASSERTS_H_INCLUDED
#define MYASSERTS_H_INCLUDED

static int failed_assert = 0;
int myassert(int return_value, char* result_msg);
int check_assert_results();

#endif // MYASSERTS_H_INCLUDED
