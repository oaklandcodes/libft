/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ocaro-lo <ocaro-lo@student.42barcelona.com  +#+  +:+       +#+       */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/08 12:52:52 by ocaro-lo          #+#    #+#             */
/*   Updated: 2025/01/08 14:17:19 by ocaro-lo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;

	if (little[0] == '\0')
	{
		return ((char *)big);
	}
	i = 0;
	while (big[i] != '\0' && i < len)
	{
		j = 0;
		while (big[i + j] == little[j] && i + j < len)
		{
			if (little[j + 1] == '\0')
				return ((char *)&big[i]);
			j++;
		}
		i++;
	}
	return (NULL);
}

// int main()
// {
//     const char *big = "this is a test";
//     const char *little = "tes";
//     char *result = ft_strnstr(big, little, 15);
//     if (result != NULL)
//     {
//         printf("'%s' was found in '%s' at: %s\n", little, big, result);
//     }
//     else
//     {
//         printf("'%s' was not found in '%s'.\n", little, big);
//     }
//     return 0;
// }
