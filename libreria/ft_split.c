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

char	**ft_split(char const *s, char c)
{
	char		**result;
	const char	*start;
	size_t		i;
	size_t		words_in_s;

	words_in_s = count_words(s, c);
	result = (char **)malloc((words_in_s + 1) * sizeof(char *));
	if (!result)
		return (NULL);
	i = 0;
	while (*s != '\0')
	{
		while (*s == c)
			s++;
		start = s;
		while (*s && *s != c)
			s++;
		result[i] = ft_substr(start, 0, s - start);
		if (!result[i])
			return (free_result(i, result));
		i++;
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