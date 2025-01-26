/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ocaro-lo <ocaro-lo@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/08 14:18:17 by ocaro-lo          #+#    #+#             */
/*   Updated: 2025/01/09 12:36:51 by ocaro-lo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_calloc(size_t num, size_t size)
{
	void	*ptr;

	if (num != 0 && size > SIZE_MAX / num)
		return (NULL);
	ptr = malloc(num * size);
	if (ptr == NULL)
		return (NULL);
	ft_bzero(ptr, num * size);
	return (ptr);
}

// int main()
// {
//     int *arr = (int *)ft_calloc(5, sizeof(int));
//     if (arr == NULL)
//     {
//         printf("Error al asignar memoria\n");
//         return 1;
//     }
//     int i = 0;
//     while (i < 5)
//     {
//         printf("arr[%d] = %d\n", i, arr[i]);
//         i++;
//     }
//     free(arr);
//     return 0;
// }