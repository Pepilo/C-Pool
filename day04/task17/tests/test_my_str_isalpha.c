#include <criterion/criterion.h>
#include "my_str_isalpha.h"

Test(my_str_isalpha_suite, str_is_empty)
{
	char str[] = "";
	int result = my_str_isalpha(str);
	cr_assert_eq(result, 1, "Expected 1 because string is empty");
}

Test(my_str_isalpha_suite, str_isalpha_true)
{
	char str[] = "HelloWorld";
	int result = my_str_isalpha(str);
	cr_assert_eq(result, 1, "Expected 1 because condition true");
}

Test(my_str_isalpha_suite, str_isalpha_false)
{
	char str[] = "Hello World!";
	int result = my_str_isalpha(str);
	cr_assert_eq(result, 0, "Expected 0 because condition false");
}
