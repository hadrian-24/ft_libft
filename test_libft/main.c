#include "../libft.h"
#include <stdio.h>
#include <string.h>
#include <bsd/string.h>
#include <stdlib.h>
#include <stdint.h>
#include <ctype.h>
#include <stdio.h>

/* gcc main.c -L. -lft -I./libft */

#define GREEN "\033[0;32m"
#define WHITE "\033[0;37m"
#define YELLOW "\033[0;33m"
#define RESET "\033[0m"

char test_map(unsigned int i, char c)
{
	return (c + i);
}

void test_iteri(unsigned int i, char *c)
{
	*c = *c + i;
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

	// ft_bzero
	printf(GREEN"ft_bzero------------------------------\n"RESET);
	char bzero_test[10] = "123456789";
	ft_bzero(bzero_test, 5);
	printf("%s\n", bzero_test + 5);

	// ft_calloc
	printf(GREEN"ft_calloc-----------------------------\n"RESET);
	int *calloc_test = (int *)ft_calloc(5, sizeof(int));
	for (int i = 0; i < 5; i++)
		printf("%d ", calloc_test[i]);
	printf("\n");
	free(calloc_test);

	// ft_isalnum
	printf(GREEN"ft_isalnum----------------------------\n"RESET);
	printf("%d %d\n", isalnum('a'), ft_isalnum('a'));
	printf("%d %d\n", isalnum('1'), ft_isalnum('1'));
	printf("%d %d\n", isalnum('!'), ft_isalnum('!'));

	// ft_isalpha
	printf(GREEN"ft_isalpha----------------------------\n"RESET);
	printf("%d %d\n", isalpha('a'), ft_isalpha('a'));
	printf("%d %d\n", isalpha('1'), ft_isalpha('1'));

	// ft_isascii
	printf(GREEN"ft_isascii----------------------------\n"RESET);
	printf("%d %d\n", isascii('a'), ft_isascii('a'));
	printf("%d %d\n", isascii(128), ft_isascii(128));

	// ft_isdigit
	printf(GREEN"ft_isdigit----------------------------\n"RESET);
	printf("%d %d\n", isdigit('1'), ft_isdigit('1'));
	printf("%d %d\n", isdigit('a'), ft_isdigit('a'));

	// ft_isprint
	printf(GREEN"ft_isprint----------------------------\n"RESET);
	printf("%d %d\n", isprint('a'), ft_isprint('a'));
	printf("%d %d\n", isprint(128), ft_isprint(128));

	// ft_itoa
	printf(GREEN"ft_itoa-------------------------------\n"RESET);
	char *itoa_test = ft_itoa(12345);
	printf("%s\n", itoa_test);
	free(itoa_test);

	// ft_strjoin
	printf(GREEN"ft_strjoin----------------------------\n"RESET);
	char *joined = ft_strjoin("Hello ", "World!");
	printf("%s\n", joined);
	free(joined);

	// ft_strlcat
	printf(GREEN"ft_strlcat----------------------------\n"RESET);
	char cat1[50] = "Hello";
	char cat2[50] = "Hello";
	printf("%zu | %zu\n", strlcat(cat1, " World", 50), ft_strlcat(cat2, " World", 50));
	printf("%s | %s\n", cat1, cat2);

	// ft_strlcpy
	printf(GREEN"ft_strlcpy----------------------------\n"RESET);
	char cpy1[50];
	char cpy2[50];
	printf("%zu | %zu\n", strlcpy(cpy1, "Test", 50), ft_strlcpy(cpy2, "Test", 50));
	printf("%s | %s\n", cpy1, cpy2);

	// ft_strlen
	printf(GREEN"ft_strlen-----------------------------\n"RESET);
	printf("%zu | %zu\n", strlen(""), ft_strlen(""));
	printf("%zu | %zu\n", strlen("Test"), ft_strlen("Test"));

	// ft_memchr
	printf(GREEN"ft_memchr-----------------------------\n"RESET);
	char memchr_test[] = "Hello World";
	printf("%s | %s\n", (char *)memchr(memchr_test, 'W', 11), (char *)ft_memchr(memchr_test, 'W', 11));

	// ft_memcmp
	printf(GREEN"ft_memcmp-----------------------------\n"RESET);
	char memcmp_test1[] = "Hello";
	char memcmp_test2[] = "Hello";
	printf("%d | %d\n", memcmp(memcmp_test1, memcmp_test2, 5), ft_memcmp(memcmp_test1, memcmp_test2, 5));

	// ft_memcpy
	printf(GREEN"ft_memcpy-----------------------------\n"RESET);
	char memcpy_test1[6] = "Hello";
	char memcpy_test2[6] = "Hello";
	printf("%s | %s\n", memcpy_test1, memcpy_test2);
	printf("%s | %s\n", (char *)memcpy(memcpy_test1, "World", 5), (char *)ft_memcpy(memcpy_test2, "World", 5));
	printf("%s | %s\n", (char *)memcpy(memcpy_test1, "*%$#", 2), (char *)ft_memcpy(memcpy_test2, "*%$#", 2));


	printf(GREEN"ft_memmove----------------------------\n"RESET);
    char memmove_test1[50] = "Hello World";
    char memmove_test2[50] = "Hello World";
	char memmove_test3[50] = "Hello World";
    char memmove_test4[50] = "Hello World";
	char memmove_test5[50] = "Hello World";
    char memmove_test6[50] = "Hello World";
	printf("%s | %s\n", memmove_test1, memmove_test2);
 	// Case 1: dest > src
	printf(GREEN"The first three characters are moved to the position starting at index 2:\n"RESET);
    printf("%s | %s\n", (char *)memmove(memmove_test1 + 2, memmove_test1, 3), (char *)ft_memmove(memmove_test2 + 2, memmove_test2, 3));
    // Case 2: dest < src
    printf(GREEN"The three characters starting at index 2 are moved to the beginning of the string:\n"RESET);
	printf("%s | %s\n", (char *)memmove(memmove_test3, memmove_test3 + 2, 3), (char *)ft_memmove(memmove_test4, memmove_test4 + 2, 3));
    // Case 3: dest == src
    printf(GREEN"The string remains unchanged because the source and destination are the same:\n"RESET);
    printf("%s | %s\n", (char *)memmove(memmove_test5, memmove_test5, 3), (char *)ft_memmove(memmove_test6, memmove_test6, 3));	
	printf(GREEN"ft_memset-----------------------------\n"RESET);
	char memset_test1[50] = "Hello";
	char memset_test2[50] = "Hello";
	printf("%s | %s\n", (char *)memset(memset_test1, 'A', 3), (char *)ft_memset(memset_test2, 'A', 3));
	printf("%s | %s\n", (char *)memset(memset_test1, '*', 5), (char *)ft_memset(memset_test2, '*', 5));
	printf("%s | %s\n", (char *)memset(memset_test1, 'z', 2), (char *)ft_memset(memset_test2, 'z', 2));


	// ft_putchar_fd
	printf(GREEN"ft_putchar_fd-------------------------\n"RESET);
	ft_putchar_fd('A', 1);
	printf("\n");

	// ft_putstr_fd
	printf(GREEN"ft_putstr_fd--------------------------\n"RESET);
	ft_putstr_fd("Hello World", 1);
	printf("\n");

	// ft_putendl_fd
	printf(GREEN"ft_putendl_fd-------------------------\n"RESET);
	ft_putendl_fd("Hello World", 1);

	// ft_putnbr_fd
	printf(GREEN"ft_putnbr_fd--------------------------\n"RESET);
	ft_putnbr_fd(12345, 1);
	printf("\n");

	// ft_split
	printf(GREEN"ft_split------------------------------\n"RESET);
	char **split_test = ft_split("Hello World", ' ');
	for (int i = 0; split_test[i]; i++)
		printf("%s\n", split_test[i]);
	// Free the split_test array
	for (int i = 0; split_test[i]; i++)
		free(split_test[i]);
	free(split_test);

	// ft_strchr
	printf(GREEN"ft_strchr-----------------------------\n"RESET);
	char strchr_test[] = "Hello World";
	printf("%s | %s\n", strchr(strchr_test, 'W'), ft_strchr(strchr_test, 'W'));

	// ft_strdup
	printf(GREEN"ft_strdup-----------------------------\n"RESET);
	char *strdup_test = ft_strdup("Hello World");
	printf("%s\n", strdup_test);
	free(strdup_test);

	// ft_striteri
	printf(GREEN"ft_striteri---------------------------\n"RESET);
	char str_iter[] = "Hello";
	ft_striteri(str_iter, test_iteri);
	printf("%s\n", str_iter);

	// ft_strmapi
	printf(GREEN"ft_strmapi----------------------------\n"RESET);
	char *str_mapi = ft_strmapi("Hello", test_map);
	printf("%s\n", str_mapi);
	free(str_mapi);

	// ft_strncmp
	printf(GREEN"ft_strncmp----------------------------\n"RESET);
	printf("%d | %d\n", strncmp("Hello", "Hello", 5), ft_strncmp("Hello", "Hello", 5));

	// ft_strnstr
	printf(GREEN"ft_strnstr----------------------------\n"RESET);
	char strnstr_test[] = "Hello World";
	printf("%s | %s\n", strnstr(strnstr_test, "World", 11), ft_strnstr(strnstr_test, "World", 11));

	// ft_strrchr
	printf(GREEN"ft_strrchr----------------------------\n"RESET);
	char strrchr_test[] = "Hello World";
	printf("%s | %s\n", strrchr(strrchr_test, 'o'), ft_strrchr(strrchr_test, 'o'));

	// ft_strtrim
	printf(GREEN"ft_strtrim----------------------------\n"RESET);
    char *strtrim_test1 = ft_strtrim("   Hello World   ", " ");
    printf("%s\n", strtrim_test1);
    free(strtrim_test1);
    char *strtrim_test2 = ft_strtrim("xxHello Worldxx", "x");
    printf("%s\n", strtrim_test2);
    free(strtrim_test2);
    char *strtrim_test3 = ft_strtrim("!!Hello World!!", "!");
    printf("%s\n", strtrim_test3);
    free(strtrim_test3);

	// ft_substr
	printf(GREEN"ft_substr-----------------------------\n"RESET);
	char *substr_test1 = ft_substr("Hello World", 6, 5);
	printf("%s\n", substr_test1);
	free(substr_test1);
	char *substr_test2 = ft_substr("Hello World", 6, 0);
	printf("%s\n", substr_test2);
	free(substr_test2);
	char *substr_test3 = ft_substr("Hello World", 0, 5);
	printf("%s\n", substr_test3);
	free(substr_test3);
		char *substr_test4 = ft_substr("Hello World", 0, 0);
	printf("%s\n", substr_test4);
	free(substr_test4);

	// ft_tolower
	printf(GREEN"ft_tolower----------------------------\n"RESET);
	printf("%c | %c\n", tolower('A'), ft_tolower('A'));
	printf("%c | %c\n", tolower('Z'), ft_tolower('Z'));
	printf("%c | %c\n", tolower('0'), ft_tolower('0'));


	// ft_toupper
	printf(GREEN"ft_toupper----------------------------\n"RESET);
	printf("%c | %c\n", toupper('a'), ft_toupper('a'));
	printf("%c | %c\n", toupper('Z'), ft_toupper('Z'));
	printf("%c | %c\n", toupper('0'), ft_toupper('0'));


	return 0;
}
