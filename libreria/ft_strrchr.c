/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ocaro-lo <ocaro-lo@student.42barcelona.com  +#+  +:+       +#+       */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/08 12:52:52 by ocaro-lo          #+#    #+#             */
/*   Updated: 2025/01/08 14:17:19 by ocaro-lo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*last;

	last = NULL;
	while (*s != '\0')
	{
		if (*s == (char)c)
		{
			last = (char *)s;
		}
		s++;
	}
	if (c == '\0')
	{
		return ((char *)s);
	}
	return (last);
}

// int main()
// {
// 	const char *str = "Hello, world!";
// 	char c = 'l';
// 	char *result = ft_strrchr(str, c);
// 	if (result != NULL)
// 	{
// 		printf("the last occurrence of '%c' is in: %s\n", c, result);
// 	}
// 	else
// 	{
// 		printf("The character '%c' was not found.\n", c);
// 	}
// 	return 0;
// }
