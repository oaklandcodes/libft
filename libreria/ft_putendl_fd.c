/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                       :+:      :+:    :+:*/
/*                                                    +:+ +:+         +:+     */
/*   By: ocaro-lo <ocaro-lo@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/09 15:38:00 by ocaro-lo          #+#    #+#             */
/*   Updated: 2025/01/09 16:26:30 by ocaro-lo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	ft_putendl_fd(char *s, int fd)
{
	if (s == NULL)
		return ;
	write(fd, s, ft_strlen(s));
	write(fd, "\n", 1);
}

// int main()
// {
//     char *str = "Hello, Im testing ft_putendl_fd";
//     ft_putendl_fd(str, 1);
//     ft_putendl_fd("This is a new line", 1);
//     return 0;
// }
