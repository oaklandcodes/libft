/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ocaro-lo <ocaro-lo@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/08 14:18:17 by ocaro-lo          #+#    #+#             */
/*   Updated: 2025/01/09 12:36:51 by ocaro-lo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

int	ft_isalnum(int c)
{
	if ((c >= 'a' && c <= 'z')
		|| (c >= 'A' && c <= 'Z')
		|| (c >= '0' && c <= '9'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
/*int	main()
{
    printf("a es alfanumérico: %d\n", ft_isalnum('a'));
    printf("1 es alfanumérico: %d\n", ft_isalnum('1'));
    printf("- no es alfanumerico: %d\n", ft_isalnum('-'));
    printf("# es alfanumérico: %d\n", ft_isalnum('#'));  
    return 0;
}*/
