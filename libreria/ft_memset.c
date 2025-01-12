/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ocaro-lo <ocaro-lo@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/10 12:59:09 by ocaro-lo          #+#    #+#             */
/*   Updated: 2025/01/10 14:41:34 by ocaro-lo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*arr;

	arr = (unsigned char *)s;
	i = 0;
	while (i < n)
	{
		arr[i] = (unsigned char)c;
		i++;
	}
	return (s);
}

/*int	main()
{
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

        return 0;
}*/
