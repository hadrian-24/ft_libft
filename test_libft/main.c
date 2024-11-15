#include "../libft.h"
#include <string.h>
#include <stdlib.h>
#include <stdint.h>
#include <ctype.h>

int	main(void)
{
	// ft_atoi
	printf("ft_atoi-------------------------------\n");
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
	char buffer1[15] = "Hello, World!";
	char buffer2[15] = "Hello, World!";
	printf("before: %s | %s\n", buffer1, buffer2);
	bzero(buffer1 + 5, 6);
	ft_bzero(buffer2 + 5, 6);
	printf("after: %s | %s\n", buffer1, buffer2);
	char buffer3[10] = "abcdef";
	char buffer4[10] = "abcdef";
	printf("before: %s | %s\n", buffer3, buffer4);
	bzero(buffer3, 0);
	ft_bzero(buffer4, 0);
	printf("after: %s | %s\n", buffer3, buffer4);
	char buffer5[6] = "abcde";
	char buffer6[6] = "abcde";
	printf("before: %s | %s\n", buffer5, buffer6);
	bzero(buffer5, 6);
	ft_bzero(buffer6, 6);
	printf("after: %s | %s\n", buffer5, buffer6);
	printf("\n");
	printf("ft_calloc------------------------------\n");
	void *ptr1 = calloc(5, sizeof(size_t));
    void *ptr2 = ft_calloc(5, sizeof(size_t));
    int success = 1;
    int i = 0;

    if (ptr1 && ptr2)
    {
        while (i < 5)
        {
            if (((int *)ptr1)[i] != 0)
            {
                printf("calloc: Memory not zero-initialized at index %d\n", i);
                success = 0;
                break;
            }
            if (((int *)ptr2)[i] != 0)
            {
                printf("ft_calloc: Memory not zero-initialized at index %d\n", i);
                success = 0;
                break;
            }
            i++;
        }
        if (success)
            printf("Both calloc and ft_calloc successfully zero-initialized memory.\n");
    }
    else
        printf("Memory allocation failed\n");
    free(ptr1);
    free(ptr2);
	printf("\n");
	printf("ft_alnum-------------------------------\n");
	printf("%d %d\n", isalnum('A'), ft_isalnum('A'));
	printf("%d %d\n", isalnum('8'), ft_isalnum('8'));
	printf("%d %d\n", isalnum(42), ft_isalnum(42));
	printf("%d %d\n", isalnum('\t'), ft_isalnum('\t'));
	printf("%d %d\n", isalnum(0), ft_isalnum(0));
	printf("ft_isalpha-----------------------------\n");
	printf("%d %d\n", isalpha('A'), ft_isalpha('A'));
	printf("%d %d\n", isalpha('b'), ft_isalpha('b'));
	printf("%d %d\n", isalpha(99), ft_isalpha(99));
	printf("%d %d\n", isalpha('0'), ft_isalpha('0'));
	printf("%d %d\n", isalpha('\n'), ft_isalpha('\n'));
	printf("%d %d\n", isalpha(11), ft_isalpha(11));
	printf("ft_isascii-----------------------------\n");
	printf("%d %d\n", isascii(42), ft_isascii(42));
	printf("%d %d\n", isascii(-42), ft_isascii(-42));
	printf("%d %d\n", isascii(128), ft_isascii(128));
	printf("ft_isdigit-----------------------------\n");
	printf("%d %d\n", isdigit(42), ft_isdigit(42));
	printf("%d %d\n", isdigit('1'), ft_isdigit('1'));
	printf("%d %d\n", isdigit('4'), ft_isdigit('4'));
	printf("ft_isprint-----------------------------\n");
	printf("%d %d\n", isprint(42), ft_isprint(42));
	printf("%d %d\n", isprint(32), ft_isprint(32));
	printf("%d %d\n", isprint('\n'), ft_isprint('\n'));
	printf("%d %d\n", isprint(18), ft_isprint(18));	
	printf("ft_memchr------------------------------\n");
	char buffer7[30] = "Key technical details to note.";
	printf("%p %p\n", memchr(buffer7, 'K', 4), ft_memchr(buffer7, 'K', 4));
	printf("%p %p\n", memchr(buffer7, 't', 4), ft_memchr(buffer7, 't', 4));
	printf("%p %p\n", memchr(buffer7, 't', 5), ft_memchr(buffer7, 't', 5));
	int	buffer8[7] = {-42, -35, 0, 7, 86, -5, 42};
	printf("%d %d\n", *(int *)memchr(buffer8, -42, sizeof(buffer8)), *(int *)ft_memchr(buffer8, -42, sizeof(buffer8)));
	printf("ft_memcmp------------------------------\n");
	printf("%d %d\n", memcmp("salut", "salut", 5), ft_memcmp("salut", "salut", 5));
	printf("%d %d\n", memcmp("salut", "sales", 5), ft_memcmp("salut", "sales", 5));
	printf("%d %d\n", memcmp("sales", "salut", 5), ft_memcmp("sales", "salut", 5));
	printf("ft_memcpy------------------------------\n");
	char src[] = "Hello, World!";
	char dst1[6];
	char dst2[6];
	memcpy(dst1, src, 6);
	ft_memcpy(dst2, src, 6);
	printf("%.*s %.*s\n", 6, dst1, 6, dst2);
	int	src2[] = {1, 2, 3, 4, 5};
	int	arr1[5];
	int	arr2[5];
	memcpy(arr1, src2, sizeof(int) * 5);
	memcpy(arr2, src2, sizeof(int) * 5);
	printf("%d %d %d %d %d  %d %d %d %d %d\n", arr1[0], arr1[1], arr1[2], arr1[3], arr1[4], arr2[0], arr2[1], arr2[2], arr2[3], arr2[4]);
	printf("ft_memmove-----------------------------\n");
	printf("ft_memset------------------------------\n");
	printf("ft_strchr------------------------------\n");
	printf("ft_strdup------------------------------\n");
	printf("ft_strlcat-----------------------------\n");
	printf("ft_strlcpy-----------------------------\n");
	printf("ft_strlen------------------------------\n");
	printf("ft_strncmp-----------------------------\n");
	printf("ft_strnstr-----------------------------\n");
	printf("ft_strrchr-----------------------------\n");
	printf("ft_tolower-----------------------------\n");
	printf("ft_upper-------------------------------\n");
	printf("ft_substr------------------------------\n");
	char src_substr[] = "The string from which to create the substring.";
	unsigned int start = 25;
	size_t	len = 6;
	printf("%s\n", src_substr);
	printf("start: %d, len: %ld\n", start, len);
	char *substr = ft_substr(src_substr, start, len);
	printf("ft_substr: %s\n", substr);
	free(substr);
	char src_substr1[] = "The string from which to create the substring.";
	unsigned int start1 = 100;
	size_t	len1 = 6;
	printf("%s\n", src_substr1);
	printf("start: %d, len: %ld\n", start1, len1);
	char *substr1 = ft_substr(src_substr1, start1, len1);
	printf("ft_substr: %s\n", substr1);
	free(substr1);
	char src_substr2[] = "The string from which to create the substring.";
	unsigned int start2 = 25;
	size_t	len2 = 25;
	printf("%s\n", src_substr2);
	printf("start: %d, len: %ld\n", start2, len2);
	char *substr2 = ft_substr(src_substr2, start2, len2);
	printf("ft_substr: %s\n", substr2);
	printf("---------------------------------------\n\n\n\n\n");
	free(substr2);
	return (0);
}
