/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                         :+:      :+:    :+: */
/*                                                    +:+ +:+         +:+     */
/*   By: ocaro-lo <ocaro-lo@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/10 15:06:32 by ocaro-lo          #+#    #+#             */
/*   Updated: 2025/01/10 15:56:19 by ocaro-lo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n && *s1 != '\0' && *s2 != '\0')
	{
		if (*s1 != *s2)
		{
			return (*s1 - *s2);
		}
		s1++;
		s2++;
		i++;
	}
	if (i == n)
	{
		return (0);
	}
	return (*s1 - *s2);
}
// int main()
// {
// 	const char *s1 = "testing";
// 	const char *s2 = "test";
// 	size_t n = 4;
// 	int result = ft_strncmp(s1, s2, n);
// 	printf("The result is: %d\n", result);
// 	return 0;
// }