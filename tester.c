#include <stdio.h>
#include "libft.h"

void tester_ft_strlen()
{
  printf("ft_strlen\n");
  size_t result = ft_strlen("Hello");
  printf("length of Hello: %d\n", result);
}

void tester_ft_strdup()
{
  printf("ft_strdup\n");
  char *result2 = ft_strdup("Hello");
  printf("%s\n", result2);
}

void tester_ft_isalnum()
{
  printf("ft_isalnum\n");
  printf("a es alfanumérico: %d\n", ft_isalnum('a'));
  printf("1 es alfanumérico: %d\n", ft_isalnum('1'));
  printf("- no es alfanumerico: %d\n", ft_isalnum('-'));
  printf("# es alfanumérico: %d\n", ft_isalnum('#'));
}

void tester_ft_isalpha()
{
  printf("ft_isalpha de h\n");
  int resultisalphaok = ft_isalpha('h');
  int resultisalphako = ft_isalpha('9');
  printf("%d %d\n", resultisalphaok, resultisalphako);
}

void tester_ft_isprint()
{
  printf("ft_isalnum\n");
  char c1 = 'B';
  char c2 = '\n';
  char c3 = ' ';
  char c4 = 127;

  printf("ft_isprint('%d')", ft_isprint(c1));
  printf("ft_isprint('%d')", ft_isprint(c2));
  printf("ft_isprint('%d')", ft_isprint(c3));
  printf("ft_isprint('%d')", ft_isprint(c4));
}

void tester_ft_isdigit()
{
  printf("testing ft_isdigit of 2\n");
  int resultisdigit_ok = ft_isdigit('2');
  int resultisdigit_ko = ft_isdigit('a');
  printf("%d %d\n", resultisdigit_ok, resultisdigit_ko);
}
void tester_ft_isascii()
{
  printf("testing ft_isdigit\n");
  int ft_isascii_ok = ft_isascii('a');
  int ft_isascii_ko = ft_isascii(128);
  printf("ft_isascii('a') = %d\n", ft_isascii_ok);
  printf("ft_isascii(128) = %d\n", ft_isascii_ko);
}
void tester_ft_bzero()
{
  printf("ft_bzero\n");
  char str[50] = "Hello!, I'm testing bzero!";
  printf("Before de ft_bzero: %s\n", str);
  ft_bzero(str, 10);
  printf("After de ft_bzero:");
  size_t i = 0;
  while (i < 50)
  {
    printf("%d ", str[i]);
    i++;
  }
  printf("\n");
}

void tester_ft_memset()
{
  printf("ft_memset\n");
  char arr[20];
  char *result_mem;
  result_mem = ft_memset(arr, 'A', sizeof(arr));
  printf("array content:\n");
  size_t i = 0;
  while (i < sizeof(arr))
  {
    printf("%c", result_mem[i]);
    i++;
  }
  printf("\n");
}
void tester_ft_memcpy()
{
  printf("ft_memcpy\n");
  char dest[20];
  char src[] = "Im learning how to be a great programmer";
  size_t n = 15;
  ft_memcpy(dest, src, n);
  size_t i = 0;
  while (i < n)
  {
    printf("%c", dest[i]);
    i++;
  }
  printf("\n");
}
void tester_ft_memmove()
{
  printf("ft_memmove\n");
  char str[50] = "ABCDEF";
  printf("Before memmove: %s\n", str);
  ft_memmove(str + 2, str, 4); // ABCDEF -> ABABCD
  printf("After memmove: %s\n", str);
}

void tester_ft_strlcpy()
{
  printf("ft_strlcpy\n");
  char src[30] = "Hello, Im testing strlcpy";
  char dst[30];
  printf("Before de ft_strlcpy: %s\n", src);
  size_t result = ft_strlcpy(dst, src, 10);
  printf("After de ft_strlcpy: %s srcsize %d\n", dst, result);
}

void tester_ft_strlcat()
{
  printf("strlcat\n");
  char src[30] = "world";
  char dst[30] = "Hello, ";
  printf("Before de strlcat: %s\n", dst);
  size_t result = ft_strlcat(dst, src, 13);
  printf("After de strlcat: %s srcsize %d\n", dst, result);
}

void tester_ft_strchr()
{
  printf("ft_strchr\n");
  char *result = ft_strchr("hello", 'e');
  if (result != NULL)
  {
    printf("%s\n", result);
  }
  else
  {
    printf("Character not found.\n");
  }
}

void tester_ft_strrchr()
{
  printf("ft_strrchr\n");
  char *str = "Hello, world!";
  char c = 'o';
  char *result = ft_strrchr(str, c);
  if (result != NULL)
  {
    printf("the last occurrence of '%c' is in: %s\n", c, result);
  }
  else
  {
    printf("The character '%c' was not found.\n", c);
  }
}
void tester_ft_strncmp()
{
  printf("ft_strncmp\n");
  const char *s1 = "testing";
  const char *s2 = "test";
  size_t n = 4;
  int result = ft_strncmp(s1, s2, n);
  printf("The result is: %d\n", result);
}

int main()
{
  printf("tester de libreria\n");

  tester_ft_strlen();

  tester_ft_strdup();

  tester_ft_isalnum();

  tester_ft_isalpha();

  tester_ft_isprint();

  tester_ft_isdigit();

  tester_ft_isascii();

  tester_ft_bzero();

  tester_ft_memset();

  tester_ft_memcpy();

  tester_ft_memmove();

  tester_ft_strlcpy();

  tester_ft_strlcat();

  tester_ft_strchr();

  tester_ft_strrchr();

  tester_ft_strncmp();

  return (0);
}
