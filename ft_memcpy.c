/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucinguy <lucinguy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/20 16:30:05 by lucinguy          #+#    #+#             */
/*   Updated: 2025/10/29 16:26:54 by lucinguy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t	i;
	char	*src_char;
	char	*dest_char;

	i = 0;
	src_char = (char *)src;
	dest_char = (char *)dest;
	while (i < n)
	{
		dest_char[i] = src_char[i];
		i++;
	}
}
/*
#include <stdio.h>

int	main(void)
{
	char	src[] = "Hello World";
	char	dest[100];
	int		arr[] = {10, 20, 30, 40, 50, 60, 70, 80, 90};
	int		n;

	ft_memcpy(dest, src, strlen(src) + 1);
	printf("The copied string is %s \n", dest);
	n = sizeof(arr) / sizeof(arr[0]);
	int dest_arr[n], i;
	ft_memcpy(dest_arr, arr, sizeof(arr));
	printf("The copied array is ");
	for (i = 0; i < n; i++)
		printf("%d ", dest_arr[i]);
}
*/