/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                         :+:      :+:    :+:*/
/*                                                    +:+ +:+         +:+     */
/*   By: ocaro-lo <ocaro-lo@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/10 15:06:32 by ocaro-lo          #+#    #+#             */
/*   Updated: 2025/01/10 15:56:19 by ocaro-lo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	unsigned int	i;

	if (!s || !f)
	{
		return ;
	}
	i = 0;
	while (s[i] != '\0')
	{
		f(i, &s[i]);
		i++;
	}
}
// void upper_c(unsigned int index, char *c)
// {
// 	(void)index;
// 	*c = ft_toupper(*c);
// }

// int main(void)
// {
//     char s[] = "hello";
//     printf("Before striteri: %s\n", s);
//     ft_striteri(s, upper_c);
//     printf("After striteri: %s\n", s);
//     return 0;
// }
