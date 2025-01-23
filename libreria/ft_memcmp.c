/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                       :+:      :+:    :+:    */
/*                                                    +:+ +:+         +:+     */
/*   By: ocaro-lo <ocaro-lo@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/08 14:18:17 by ocaro-lo          #+#    #+#             */
/*   Updated: 2025/01/09 12:36:51 by ocaro-lo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*arr_s1;
	unsigned char	*arr_s2;
	size_t			i;

	arr_s1 = (unsigned char *)s1;
	arr_s2 = (unsigned char *)s2;
	i = 0;
	while (i < n)
	{
		if (arr_s1[i] != arr_s2[i])
		{
			return (arr_s1[i] - arr_s2[i]);
		}
		i++;
	}
	return (0);
}

// int main()
// {
// 	char buffer1[] = {'A', 'B', 'C', 'D', 'E'};
// 	char buffer2[] = {'A', 'B', 'C', 'D', 'F'};

// 	int result = ft_memcmp(buffer1, buffer2, 5);

// 	if (result < 0)
// 	{
// 		printf("buffer1 is less than buffer2\n");
// 	}
// 	else if (result > 0)
// 	{
// 		printf("buffer1 is greater than buffer2\n");
// 	}
// 	else
// 	{
// 		printf("buffer1 is equal to buffer2\n");
// 	}

// 	return 0;
// }