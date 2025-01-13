/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ocaro-lo <ocaro-lo@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/13 16:39:28 by ocaro-lo          #+#    #+#             */
/*   Updated: 2025/01/13 17:04:04 by ocaro-lo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

int	ft_toupper(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return c - ('a' - 'A');
	}
	return (c);
}

/*int	main()
{
	int result = ft_toupper('a');
	printf("convert a to A: %c\n", result);
	printf("do nothing $ to $: %c\n", ft_toupper('$'));

}*/
