/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                       :+:      :+:    :+:*/
/*                                                    +:+ +:+         +:+     */
/*   By: ocaro-lo <ocaro-lo@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/09 15:38:00 by ocaro-lo          #+#    #+#             */
/*   Updated: 2025/01/09 16:26:30 by ocaro-lo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	if (n == -2147483648)
	{
		ft_putstr_fd("-2147483648", fd);
		return ;
	}
	if (n < 0)
	{
		ft_putchar_fd('-', fd);
		n = n * -1;
	}
	if (n >= 10)
	{
		ft_putnbr_fd(n / 10, fd);
	}
	ft_putchar_fd((n % 10) + '0', fd);
}

// int main(){
    // ft_putnbr_fd(123, 1);
    // ft_putnbr_fd(-123, 1);
    // ft_putnbr_fd(0, 1);
    // ft_putnbr_fd(2147483647, 1);
    // ft_putnbr_fd(-2147483648, 1);
//     return 0;
// }