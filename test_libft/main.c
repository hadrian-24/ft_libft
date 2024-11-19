#include "../libft.h"
#include <string.h>
#include <bsd/string.h>
#include <stdlib.h>
#include <stdint.h>
#include <ctype.h>
#include <stdio.h>

/* gcc main.c -L. -lft -I./libft */

#define GREEN "\033[0;32m"
#define RESET "\033[0m"

char test_map(unsigned int i, char c)
{
    return (c + i);
}

int main(void)
{
	// ft_atoi
	printf(GREEN"ft_atoi-------------------------------\n"RESET);
	printf("%d %d\n", atoi("+-42"), ft_atoi("+-42"));
	printf("%d %d\n", atoi("-42+ds"), ft_atoi("-42+ds"));
	printf("%d %d\n", atoi("\e475"), ft_atoi("\e475"));
	printf("%d %d\n", atoi("\t\n\r\v\f  469 \n"), ft_atoi("\t\n\r\v\f  469 \n"));
	printf("%d %d\n", atoi("-2147483648"), ft_atoi("-2147483648"));
	printf("%d %d\n", atoi("2147483647"), ft_atoi("2147483647"));
	printf("%d %d\n", atoi(""), ft_atoi(""));
	printf("\n");

	// ft_bzero
	printf("ft_bzero------------------------------\n");
	char bz1[15] = "Hello, World!";
	char bz2[15] = "Hello, World!";
	printf("Before: %s | %s\n", bz1, bz2);
	bzero(bz1 + 5, 6);
	ft_bzero(bz2 + 5, 6);
	printf("After: %s | %s\n", bz1, bz2);
	printf("\n");

	// ft_calloc
	printf("ft_calloc-----------------------------\n");
	int *c1 = calloc(5, sizeof(int));
	int *c2 = ft_calloc(5, sizeof(int));
	printf("Values: %d %d\n", c1[0], c2[0]);
	free(c1);
	free(c2);
	printf("\n");

	// ft_isalnum
	printf("ft_isalnum----------------------------\n");
	printf("%d %d\n", isalnum('A'), ft_isalnum('A'));
	printf("%d %d\n", isalnum('1'), ft_isalnum('1'));
	printf("%d %d\n", isalnum(' '), ft_isalnum(' '));
	printf("\n");

	// ft_isalpha
	printf("ft_isalpha----------------------------\n");
	printf("%d %d\n", isalpha('A'), ft_isalpha('A'));
	printf("%d %d\n", isalpha('z'), ft_isalpha('z'));
	printf("%d %d\n", isalpha('1'), ft_isalpha('1'));
	printf("\n");

	// ft_isascii
	printf("ft_isascii----------------------------\n");
	printf("%d %d\n", isascii(127), ft_isascii(127));
	printf("%d %d\n", isascii(128), ft_isascii(128));
	printf("%d %d\n", isascii(-1), ft_isascii(-1));
	printf("\n");

	// ft_isdigit
	printf("ft_isdigit----------------------------\n");
	printf("%d %d\n", isdigit('5'), ft_isdigit('5'));
	printf("%d %d\n", isdigit('A'), ft_isdigit('A'));
	printf("%d %d\n", isdigit('0'), ft_isdigit('0'));
	printf("\n");

	// ft_isprint
	printf("ft_isprint----------------------------\n");
	printf("%d %d\n", isprint(' '), ft_isprint(' '));
	printf("%d %d\n", isprint('\n'), ft_isprint('\n'));
	printf("%d %d\n", isprint('~'), ft_isprint('~'));
	printf("\n");

	// ft_memchr
	printf("ft_memchr-----------------------------\n");
	char *mstr = "Hello, World!";
	printf("%s %s\n", (char*)memchr(mstr, 'W', 13), (char*)ft_memchr(mstr, 'W', 13));
	printf("%s %s\n", (char*)memchr(mstr, 'o', 13), (char*)ft_memchr(mstr, 'o', 13));
	printf("%s %s\n", (char*)memchr(mstr, 'z', 13), (char*)ft_memchr(mstr, 'z', 13));
	printf("\n");

	// ft_memcmp
	printf("ft_memcmp-----------------------------\n");
	printf("%d %d\n", memcmp("Hello", "Hello", 5), ft_memcmp("Hello", "Hello", 5));
	printf("%d %d\n", memcmp("Hello", "Hellp", 5), ft_memcmp("Hello", "Hellp", 5));
	printf("%d %d\n", memcmp("Hellp", "Hello", 5), ft_memcmp("Hellp", "Hello", 5));
	printf("\n");

	// ft_memcpy
	printf("ft_memcpy-----------------------------\n");
	char src[] = "Hello";
	char dest1[6] = {0};
	char dest2[6] = {0};
	memcpy(dest1, src, 5);
	ft_memcpy(dest2, src, 5);
	printf("Result: %s | %s\n", dest1, dest2);
	printf("\n");

	// ft_memmove
	printf("ft_memmove----------------------------\n");
	char str1[] = "Hello World";
	char str2[] = "Hello World";
	memmove(str1 + 1, str1, 5);
	ft_memmove(str2 + 1, str2, 5);
	printf("Result: %s | %s\n", str1, str2);
	printf("\n");

	// ft_memset
	printf("ft_memset-----------------------------\n");
	char ms1[15] = "Hello World";
	char ms2[15] = "Hello World";
	memset(ms1, '*', 5);
	ft_memset(ms2, '*', 5);
	printf("Result: %s | %s\n", ms1, ms2);
	printf("\n");

	// ft_split
	printf("ft_split------------------------------\n");
	char **split = ft_split("hello,world,test", ',');
	int i = 0;
	while (split && split[i])
		printf("%s\n", split[i++]);
	i = 0;
	while (split && split[i])
		free(split[i++]);
	free(split);
	printf("\n");

	// ft_strdup
	printf("ft_strdup-----------------------------\n");
	char *dup1 = strdup("Test string");
	char *dup2 = ft_strdup("Test string");
	printf("%s | %s\n", dup1, dup2);
	free(dup1);
	free(dup2);
	printf("\n");

	// ft_striteri
	printf("ft_striteri---------------------------\n");
	char str_iter[] = "hello";
	ft_striteri(str_iter, NULL);
	printf("%s\n", str_iter);
	printf("\n");

	// ft_strjoin
	printf("ft_strjoin----------------------------\n");
	char *joined = ft_strjoin("Hello ", "World!");
	printf("%s\n", joined);
	free(joined);
	printf("\n");

	// ft_strlcat
	printf("ft_strlcat----------------------------\n");
	char cat1[50] = "Hello";
	char cat2[50] = "Hello";
	printf("%zu | %zu\n", strlcat(cat1, " World", 50), ft_strlcat(cat2, " World", 50));
	printf("%s | %s\n", cat1, cat2);
	printf("\n");

	// ft_strlcpy
	printf("ft_strlcpy----------------------------\n");
	char cpy1[50];
	char cpy2[50];
	printf("%zu | %zu\n", strlcpy(cpy1, "Test", 50), ft_strlcpy(cpy2, "Test", 50));
	printf("%s | %s\n", cpy1, cpy2);
	printf("\n");

	// ft_strlen
	printf("ft_strlen-----------------------------\n");
	printf("%zu | %zu\n", strlen(""), ft_strlen(""));
	printf("%zu | %zu\n", strlen("Test"), ft_strlen("Test"));
	printf("%zu | %zu\n", strlen("Very long string"), ft_strlen("Very long string"));
	printf("\n");

	// ft_strmapi
	printf("ft_strmapi----------------------------\n");
	char *test_str = "hello";
	printf("Original: %s\n", test_str);
	char *mapped = ft_strmapi(test_str, &test_map);
	if (mapped)
	{
		printf("Mapped:   %s\n", mapped);
		free(mapped);
	}
	printf("\n");

	/*
	// ft_strnstr
	printf("ft_strnstr----------------------------\n");
	printf("%s | %s\n", strnstr("Foo Bar Baz", "Bar", 7), ft_strnstr("Foo Bar Baz", "Bar", 7));
	printf("%s | %s\n", strnstr("Foo Bar Baz", "Baz", 7), ft_strnstr("Foo Bar Baz", "Baz", 7));
	printf("%s | %s\n", strnstr("Foo Bar Baz", "xyz", 7), ft_strnstr("Foo Bar Baz", "xyz", 7));
	printf("\n");
	*/

	// ft_strrchr
	printf("ft_strrchr----------------------------\n");
	char *r1 = strrchr("Hello World", 'o');
	char *r2 = ft_strrchr("Hello World", 'o');
	printf("Found 'o': %s | %s\n", r1 ? r1 : "NULL", r2 ? r2 : "NULL");

	r1 = strrchr("Hello World", 'z');
	r2 = ft_strrchr("Hello World", 'z');
	printf("Found 'z': %s | %s\n", r1 ? r1 : "NULL", r2 ? r2 : "NULL");

	r1 = strrchr("Hello World", '\0');
	r2 = ft_strrchr("Hello World", '\0');
	printf("Found '\\0': %s | %s\n", r1 ? r1 : "NULL", r2 ? r2 : "NULL");
	printf("\n");

	// ft_strtrim
	printf("ft_strtrim----------------------------\n");
	char *trimmed = ft_strtrim("   Hello World   ", " ");
	printf("%s\n", trimmed);
	free(trimmed);
	printf("\n");

	// ft_substr
	printf("ft_substr-----------------------------\n");
	char *sub = ft_substr("Hello World", 6, 5);
	printf("%s\n", sub);
	free(sub);
	printf("\n");

	// ft_tolower
	printf("ft_tolower----------------------------\n");
	printf("%c | %c\n", tolower('A'), ft_tolower('A'));
	printf("%c | %c\n", tolower('z'), ft_tolower('z'));
	printf("%c | %c\n", tolower('1'), ft_tolower('1'));
	printf("\n");

	// ft_toupper
	printf("ft_toupper----------------------------\n");
	printf("%c | %c\n", toupper('a'), ft_toupper('a'));
	printf("%c | %c\n", toupper('Z'), ft_toupper('Z'));
	printf("%c | %c\n", toupper('1'), ft_toupper('1'));
	printf("\n");

	return (0);
}
