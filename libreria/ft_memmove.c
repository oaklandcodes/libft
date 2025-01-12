/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                        :+:      :+:    :+:  */
/*                                                    +:+ +:+         +:+     */
/*   By: ocaro-lo <ocaro-lo@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/10 12:59:09 by ocaro-lo          #+#    #+#             */
/*   Updated: 2025/01/10 14:41:34 by ocaro-lo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t				i;
	unsigned char		*aux_dest;
	unsigned char		*aux_src;

	aux_dest = (unsigned char *)dest;
	aux_src = (unsigned char *)src;
	if (aux_dest < aux_src)
	{
		i = 0;
		while (i < n)
		{
			aux_dest[i] = aux_src[i];
			i++;
		}
	}
	else
	{
		i = n;
		while (i > 0)
		{
			aux_dest[i - 1] = aux_src[i - 1];
			i--;
		}
	}
	return (dest);
}

// int main()
// {

//     char str[50] = "ABCDEF";

//     printf("Before memmove: %s\n", str);
//     ft_memmove(str+2, str, 4); // ABCDEF -> ABABCD
//     printf("After memmove: %s\n", str);

//     return (0);
// }