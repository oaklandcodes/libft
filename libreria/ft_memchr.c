/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                       :+:      :+:    :+:    */
/*                                                    +:+ +:+         +:+     */
/*   By: ocaro-lo <ocaro-lo@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/08 14:18:17 by ocaro-lo          #+#    #+#             */
/*   Updated: 2025/01/09 12:36:51 by ocaro-lo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*str;
	unsigned char	value;
	size_t			i;

	str = (unsigned char *)s;
	value = (unsigned char)c;
	i = 0;
	while (i < n)
	{
		if (*str == value)
			return (str);
		str++;
		i++;
	}
	return (NULL);
}
// int main(){
// 	char *str = "Hello, world!";
// 	char c = 'o';
// 	char *result = ft_memchr(str, c, 13);
// 	if (result != NULL)
// 	{
// 		printf("The first occurrence of '%c' is in: %s\n", c, result);
// 	}
// 	else
// 	{
// 		printf("The character '%c' was not found.\n", c);
// 	}
// 	return 0;
// }