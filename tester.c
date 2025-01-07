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

    printf("ft_isalpha de h\n");

    int resultisalphaok = ft_isalpha ('h');
    int resultisalphako = ft_isalpha ('9');
    printf ("%d %d\n", resultisalphaok, resultisalphako);
}
