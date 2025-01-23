/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ocaro-lo <ocaro-lo@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/13 16:00:50 by ocaro-lo          #+#    #+#             */
/*   Updated: 2025/01/13 16:36:31 by ocaro-lo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

int	ft_tolower(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (c + ('a' - 'A'));
	}
	return (c);
}

/*int	main
{ 
    char c = 'A';
    printf("Original: %c, tolower: %c\n", c, ft_tolower(c));
    
    c = 'z';
    printf("Original: %c, tolower: %c\n", c, ft_tolower(c));
    
    c = '1';
    printf("Original: %c, tolower: %c\n", c, ft_tolower(c));  
}*/
