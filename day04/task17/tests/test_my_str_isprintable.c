#include <criterion/criterion.h>
#include "my_str_isprintable.h"

Test(my_str_isprintable_suite, str_is_empty)
{
	char str[] = "";
	int result = my_str_isprintable(str);
	cr_assert_eq(result, 1, "Expected 1 because string is empty");
}

Test(my_str_isprintable_suite, str_ispritnable_true)
{
	char str[] = "&Hello/ 42 /@World!";
	int result = my_str_isprintable(str);
	cr_assert_eq(result, 1, "Expected 1 because condition is true");
}

Test(my_str_isprintable_suite, str_isprintable_false)
{
	char str[] = "Hello\nWorld!";
	int result = my_str_isprintable(str);
	cr_assert_eq(result, 0, "Expected 0 because condition is false");
}
