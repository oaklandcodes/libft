/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ocaro-lo <ocaro-lo@student.42barcelona.com +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/07 20:00:33 by ocaro-lo          #+#    #+#             */
/*   Updated: 2025/01/08 12:40:00 by ocaro-lo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strdup(char *src)
{
	char	*result;
	int		len;
	char	*start;

	len = ft_strlen(src) + 1;
	result = malloc(len);
	if (!result)
	{
		return (NULL);
	}
	start = result;
	while (*src != '\0')
	{
		*result = *src;
		src++;
		result++;
	}
	*result = '\0';
	return (start);
}
