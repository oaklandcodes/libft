/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ocaro-lo <ocaro-lo@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/09 14:02:03 by ocaro-lo          #+#    #+#             */
/*   Updated: 2025/01/09 14:54:14 by ocaro-lo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

int	ft_isascii(int c)
{
	if (c >= 0 && c <= 127)
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
	int ft_isascii_ok = ft_isascii('a');
	int ft_isascii_ko = ft_isascii(128);
	printf("ft_isascii('a') = %d\n", ft_isascii_ok);
	printf("ft_isascii(128) = %d\n", ft_isascii_ko);
}*/
