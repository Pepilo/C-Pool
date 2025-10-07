#include <criterion/criterion.h>
#include "my_strncpy.h"

Test(my_strncpy_suite, src_longer_than_n)
{
	char dest[10];
	my_strncpy(dest, "HelloWorld", 5);
	cr_assert_str_eq(dest, "Hello", "Expected first 5 chars of 'HelloWorld'");
}

Test(my_strncpy_suite, src_shorter_than_n)
{
	char dest[10];
	my_strncpy(dest, "Hi", 5);
	cr_assert_str_eq(dest, "Hi", "Expected 'Hi' followed by null terminators");
	cr_assert_eq(dest[2], '\0', "Expected padding with \\0");
}

Test(my_strncpy_suite, n_zero)
{
	char dest[5] ="ABCD";
	my_strncpy(dest, "Hello", 0);
	cr_assert_eq(dest[0], 'A', "Dest should stay unchanged because n=0");
}

Test(my_strncpy_suite, src_empty_string)
{
	char dest[5];
	my_strncpy(dest, "", 4);
	cr_assert_eq(dest[0], '\0', "Dest[0] should be '\\0' because src is empty");
	cr_assert_eq(dest[3], '\0', "All characters should be '\\0'");
}

Test(my_strncpy_suite, n_equal_src_length)
{
	char dest[10];
	my_strncpy(dest, "Hey", 3);
	cr_assert_str_eq(dest, "Hey", "Should copy exactly 'Hey'");
}
