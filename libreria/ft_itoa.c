/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ocaro-lo <ocaro-lo@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/10 15:06:32 by ocaro-lo          #+#    #+#             */
/*   Updated: 2025/01/10 15:56:19 by ocaro-lo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

static int	get_num_length(int n)
{
	int	length;

	length = 0;
	if (n <= 0)
		length = 1;
	while (n != 0)
	{
		n /= 10;
		length++;
	}
	return (length);
}

char	*ft_itoa(int n)
{
	char			*str;
	int				length;
	unsigned int	num;

	length = get_num_length(n);
	str = (char *)malloc(length + 1);
	if (!str)
		return (NULL);
	if (n < 0)
	{
		str[0] = '-';
		num = -n;
	}
	else
		num = n;
	str[length] = '\0';
	while (length > 0 && str[length - 1] != '-')
	{
		str[length - 1] = (num % 10) + '0';
		num /= 10;
		length--;
	}
	return (str);
}
// int main()
// {
// 	char *result;
// 	result = ft_itoa(21);
// 	printf("%s", result);
// 	free(result);
// }
