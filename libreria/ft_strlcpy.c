/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ocaro-lo <ocaro-lo@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/09 15:38:00 by ocaro-lo          #+#    #+#             */
/*   Updated: 2025/01/09 16:26:30 by ocaro-lo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

size_t	ft_strlcpy(char *restrict dst, const char *restrict src, size_t dstsize)
{
	size_t	src_len;
	size_t	i;
	size_t	max_copy_length;

	src_len = ft_strlen(src);
	if (dstsize == 0)
	{
		return (src_len);
	}
	if (src_len < dstsize)
	{
		max_copy_length = src_len;
	}
	else
	{
		max_copy_length = dstsize - 1;
	}
	i = 0;
	while (i < max_copy_length)
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (src_len);
}

// int main()
// {
// 	char src[30] = "Hello, Im testing strlcpy";
// 	char dst[30];
// 	printf("Before de ft_strlcpy: %s\n", src);
// 	size_t result = ft_strlcpy(dst, src, 10);
// 	printf("After de ft_strlcpy: %s srcsize %d\n", dst, result);	
// 	return (0);

// } 
