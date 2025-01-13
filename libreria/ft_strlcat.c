/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strlcat.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ocaro-lo <ocaro-lo@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/13 15:19:14 by ocaro-lo          #+#    #+#             */
/*   Updated: 2025/01/13 15:59:29 by ocaro-lo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

size_t ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t des_len;
	size_t src_len;
	size_t at_most_copy_length;

	src_len = ft_strlen(src);
	des_len = ft_strlen(dst);
	if (dstsize <= des_len)
	{
		return (src_len + dstsize);
	}
	at_most_copy_length = dstsize - des_len - 1;
	dst += des_len;
	while (*src != '\0' && at_most_copy_length > 0)
	{
		*dst = *src;
		src++;
		dst++;
		at_most_copy_length--;
	}
	*dst = '\0';
	return (src_len + des_len);
}

// int main ()
// {
// 	printf("ft_strlcat\n");
// 	char src[30] = "mundo";
// 	char dst[30] = "Hello, ";
// 	printf("Before de ft_strlcat: %s\n", dst);
// 	size_t result = ft_strlcat(dst, src, 13);
// 	printf("After de ft_strlcat: %s srcsize %d\n", dst, result);
// 	return (0);
// }