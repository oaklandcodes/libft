#include <stdlib.h>
#include "libft.h"

char	*ft_strdup(char *src)
{
	char	*result;
	int		len;
	char	*start;

	len = ft_strlen(src) + 1;
	result = malloc(len);
	if (!result)
	{
		return (NULL);
	}
	start = result;
	while (*src != '\0')
	{
		*result = *src;
		src++;
		result++;
	}
	*result = '\0';
	return (start);
}
