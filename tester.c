#include <stdio.h>
#include "libft.h"

int main(){
    printf("tester de libreria\n");

    printf("ft_strlen de hello\n");
    size_t result= ft_strlen("Hello");
    printf("%d\n", result);

    printf("ft_strdup de hola\n");
      char *result2 = ft_strdup("hola");
    printf("%s\n", result2);
}