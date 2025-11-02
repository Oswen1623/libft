/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucinguy <lucinguy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/14 23:22:47 by lucinguy          #+#    #+#             */
/*   Updated: 2025/10/25 17:53:27 by lucinguy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*substring;
	size_t	i;

	substring = (char *)malloc((len + 1) * sizeof(char));
	if (!substring)
		return (NULL);
	i = 0;
	while (s[start] != '\0' && i < len)
	{
		substring[i] = s[start];
		i++;
		start++;
	}
	substring[i] = '\0';
	return (substring);
}
/*
#include <stdio.h>

int	main(void)
{
	char string[] = "hello world?";
	unsigned int start = 6;
	size_t len = 5;
	newstring = ft_substr(string, start, len);
	printf("%s\n", newstring);
	free(newstring);
}*/