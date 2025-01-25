/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                         :+:      :+:    :+: */
/*                                                    +:+ +:+         +:+     */
/*   By: ocaro-lo <ocaro-lo@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/10 15:06:32 by ocaro-lo          #+#    #+#             */
/*   Updated: 2025/01/10 15:56:19 by ocaro-lo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*new_str;
	size_t	start;
	size_t	end;
	size_t	i;

	if (!s1 || !set)
		return (NULL);
	start = 0;
	while (s1[start] != '\0' && ft_strchr(set, s1[start]))
	{
		start++;
	}
	end = ft_strlen(s1);
	while (end > start && ft_strchr(set, s1[end - 1]))
	{
		end--;
	}
	new_str = (char *)malloc(end - start + 1);
	i = 0;
	while (start < end)
	{
		new_str[i++] = s1[start++];
	}
	new_str[i] = '\0';
	return (new_str);
}

// int main()
// {
//     char *result;
//     result = ft_strtrim("testing", "tet");
//     if (result)
//     {
//         printf("Result: %s\n", result);
//         free(result);
//     }
//     else
//     {
//         printf("Result is NULL\n");
//     }
// }
