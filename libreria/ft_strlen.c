/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ocaro-lo <ocaro-lo@student.42barcelona.com +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/07 20:00:33 by ocaro-lo          #+#    #+#             */
/*   Updated: 2025/01/08 12:40:24 by ocaro-lo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

size_t	ft_strlen(const char *str)
{
	size_t	i;

	i = 0;
	while (*str != '\0')
	{
		i++;
		str++;
	}
	return (i);
}
// int	main()
// {
// 	char str[30] = "Hello";
// 	printf("Before de ft_strlen: %s\n", str);
// 	size_t result = ft_strlen(str);
// 	printf("After de ft_strlen: %d\n", result);
// 	return (0);
// }
