/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ocaro-lo <ocaro-lo@student.42barcelona.com  +#+  +:+       +#+       */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/08 12:52:52 by ocaro-lo          #+#    #+#             */
/*   Updated: 2025/01/08 14:17:19 by ocaro-lo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	while (*s != '\0')
	{
		if (*s == (char)c)
		{
			return ((char *)s);
		}
		s++;
	}
	if ((char)c == '\0')
	{
		return ((char *)s);
	}
	return (NULL);
}

// int	main()
// {
// 	char *result = ft_strchr("hello", 'e');
// 	if (result != NULL)
// 	{
// 		printf("%s\n", result);
// 	}
// 	else
// 	{
// 		printf("Character not found.\n");
// 	}
// 	return 0;
// }
