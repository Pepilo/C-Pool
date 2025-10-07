#include <criterion/criterion.h>
#include "my_revstr.h"

Test(my_revstr_suite, str_empty_string)
{
	char src[] = "";
	my_revstr(src);
	cr_assert_eq(src[0], '\0', "Src[0] should be '\\0' because src is empty");
}

Test(my_revstr_suite, str_paire)
{
	char src[] = "Allo";
	my_revstr(src);
	cr_assert_str_eq(src, "ollA", "Expected 'ollA' followed by null terminator");
}

Test(my_revstr_suite, str_impaire)
{
	char src[] = "Hello";
        my_revstr(src);
        cr_assert_str_eq(src, "olleH", "Expected 'olleH' followed by null terminator");
}
