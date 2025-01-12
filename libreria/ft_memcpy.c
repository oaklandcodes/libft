/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ocaro-lo <ocaro-lo@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/08 14:18:17 by ocaro-lo          #+#    #+#             */
/*   Updated: 2025/01/09 12:36:51 by ocaro-lo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t			i;
	unsigned char	*arr_dest;
	unsigned char	*arr_src;

	arr_dest = (unsigned char *)dest;
	arr_src = (unsigned char *)src;
	i = 0;
	while (i < n)
	{
		arr_dest[i] = arr_src[i];
		i++;
	}
	return (dest);
}

// int main()
// {
// 	char dest[20];
// 	char src[] = "Im learning how to be a great programmer";
// 	size_t n = 15;
// 	ft_memcpy(dest, src, n);
// 	size_t i = 0;

// 	while (i < n)
// 	{
// 		printf("%c", dest[i]);
// 		i++;
// 	}
// 	return (0);
// }