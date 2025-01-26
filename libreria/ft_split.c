/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+: */
/*                                                    +:+ +:+         +:+     */
/*   By: ocaro-lo <ocaro-lo@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/10 15:06:32 by ocaro-lo          #+#    #+#             */
/*   Updated: 2025/01/10 15:56:19 by ocaro-lo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

static size_t	count_words(const char *s, char c)
{
	size_t		count;
	const char	*start;

	start = s;
	count = 0;
	while (*s != '\0')
	{
		if (*s != c && (start == s || *(s - 1) == c))
		{
			count++;
		}
		s++;
	}
	return (count);
}

static void	*free_result(size_t i, char **result)
{
	while (i > 0)
	{
		i--;
		free(result[i]);
	}
	free(result);
	return (NULL);
}

void	*validate_and_malloc(char const *s, char c, char ***result)
{
	size_t	words_in_s;

	if (!s)
		return (NULL);
	words_in_s = count_words(s, c);
	*result = (char **)malloc((words_in_s + 1) * sizeof(char *));
	return (*result);
}

char	**ft_split(char const *s, char c)
{
	char	**result;
	size_t	i;
	size_t	j;

	if (!validate_and_malloc(s, c, &result))
		return (NULL);
	i = 0;
	while (*s != '\0')
	{
		while (*s == c)
			s++;
		if (*s != '\0')
		{
			j = 0;
			while (s[j] != '\0' && s[j] != c)
				j++;
			result[i] = ft_substr(s, 0, j);
			if (!result[i])
				return (free_result(i, result));
			i++;
			s += j;
		}
	}
	result[i] = NULL;
	return (result);
}

// int main()
// {
	// char **result;
	// size_t j;
	// result = ft_split("hello, this is split", ' ');
	// j = 0;
	// while (result[j])
	// {
	// 	ft_putstr_fd(result[j], 1); 
	// 	printf("\n");
	// 	j++;
	// }
// }