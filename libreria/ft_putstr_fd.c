/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                       :+:      :+:    :+: */
/*                                                    +:+ +:+         +:+     */
/*   By: ocaro-lo <ocaro-lo@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/09 15:38:00 by ocaro-lo          #+#    #+#             */
/*   Updated: 2025/01/09 16:26:30 by ocaro-lo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	ft_putstr_fd(char *s, int fd)
{
	if (s == NULL)
		return ;
	write (fd, s, ft_strlen(s));
}

// int main()
// {
	// char *str = "Hello, Im testing ft_putstr_fd";
	// ft_putstr_fd(str, 1);
	// return 0;
// }
