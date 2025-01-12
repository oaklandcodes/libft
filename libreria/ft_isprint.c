/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ocaro-lo <ocaro-lo@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/09 15:38:00 by ocaro-lo          #+#    #+#             */
/*   Updated: 2025/01/09 16:26:30 by ocaro-lo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

int	ft_isprint(int c)
{
	if(c >= 32 && c <= 126)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

// int	main()
// {
// 	char c1 = 'B';
// 	char c2 = '\n';
// 	char c3 = ' ';
// 	char c4 = 127;

// 	printf("ft_isprint('%d')", ft_isprint(c1));
// 	printf("ft_isprint('%d')", ft_isprint(c2));
// 	printf("ft_isprint('%d')", ft_isprint(c3));
// 	printf("ft_isprint('%d')", ft_isprint(c4));
// }
