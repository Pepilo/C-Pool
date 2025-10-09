#include <criterion/criterion.h>
#include "my_strcapitalize.h"

Test(my_strcapitalize_suite, str_start_with_capitalize_letters)
{
	char str[] = "Hello World!";
	my_strcapitalize(str);
	cr_assert_str_eq(str, "Hello World!", "Expected capital letter at the beginning of each word");
}

Test(my_strcapitalize_suite, str_start_with_non_capitalize_letters)
{
	char str[] = "hello world!";
	my_strcapitalize(str);
	cr_assert_str_eq(str, "Hello World!", "Expected capital letter at the beginning of each word");
}

Test(my_strcapitalize_suite, str_start_with_signs)
{
	char str[] = " hello-world!";
	my_strcapitalize(str);
	cr_assert_str_eq(str, " Hello-World!", "Expected capital letter at the beginning of each word");
}

Test(my_strcapitalize_suite, str_start_with_numbers)
{
	char str[] = "45hello 6world!";
	my_strcapitalize(str);
	cr_assert_str_eq(str, "45hello 6world!", "Expected non capital letter at the beginning of each word");
}
