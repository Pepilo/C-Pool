#include <criterion/criterion.h>
#include "my_str_islower.h"

Test(my_str_islower_suite, str_is_empty)
{
	char str[] = "";
	int result = my_str_islower(str);
	cr_assert_eq(result, 1, "Expected 1 because string is empty");
}

Test(my_str_islower_suite, str_islower_true)
{
	char str[] = "helloworld";
	int result = my_str_islower(str);
	cr_assert_eq(result, 1, "Expected 1 because condition is true");
}

Test(my_str_islower_suite, str_islower_false)
{
	char str[] = "HelloWorld";
	int  result = my_str_islower(str);
	cr_assert_eq(result, 0, "Expected 0 because condition is false");
}
