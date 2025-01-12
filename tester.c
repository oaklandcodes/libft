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

void tester_ft_isalpha()
{
  printf("ft_isalpha de h\n");
  int resultisalphaok = ft_isalpha('h');
  int resultisalphako = ft_isalpha('9');
  printf("%d %d\n", resultisalphaok, resultisalphako);
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
int main()
{
  printf("tester de libreria\n");
  tester_ft_strlen();

  tester_ft_strdup();

  tester_ft_isalpha();

  tester_ft_memset();

  tester_ft_memcpy();

  tester_ft_memmove();

  tester_ft_strlcpy();
  return (0);
}
