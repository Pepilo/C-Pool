#include <criterion/criterion.h>
#include "my_strstr.h"

Test(my_strstr_suite, to_find_empty_string)
{
	char str[] = "Hello world!";
	char to_find[] = "";
	char *result = my_strstr(str, to_find);
	cr_assert_str_eq(result, "Hello world!", "Expected 'Hello world!' followed by null terminator");
}

Test(my_strstr_suite, str_empty_string)
{
	char str[] = "";
	char to_find[] = "world";
	char *result = my_strstr(str, to_find);
	cr_assert_null(result, "Expected NULL because str is empty"); 
}

Test(my_strstr_suite, to_find_in_str)
{
	char str[] = "Hello world!";
	char to_find[] = "world";
	char *result = my_strstr(str, to_find);
	cr_assert_str_eq(result, str + 6, "Expected 'world' followed by null terminator");
}

Test(my_strstr_suite, to_find_not_in_str)
{
	char str[] = "Hello world!";
	char to_find[] = "werld";
	char *result = my_strstr(str, to_find);
	cr_assert_null(result, "Expected NULL because to_find is not in str");
}
