/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ocaro-lo <ocaro-lo@student.42barcelona.com  +#+  +:+       +#+       */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/08 12:52:52 by ocaro-lo          #+#    #+#             */
/*   Updated: 2025/01/08 14:17:19 by ocaro-lo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

int	ft_isdigit(int c)
{
	if (c >= '0' && c <= '9')
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
	printf("testing ft_isdigit of 2\n");
	int resultisdigit_ok = ft_isdigit ('2');
	int resultisdigit_ko = ft_isdigit ('a');
	printf ("%d %d\n", resultisdigit_ok, resultisdigit_ko);
}*/
