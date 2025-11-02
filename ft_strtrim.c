/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucinguy <lucinguy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/15 01:36:18 by lucinguy          #+#    #+#             */
/*   Updated: 2025/10/25 18:02:23 by lucinguy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	is_sp(char c)
{
	if (c == ' ' || c == '\n' || c == '\t')
		return (1);
	else
		return (0);
}

char	*ft_strtrim(char const *s)
{
	size_t	start;
	size_t	end;
	char	*trimmed;

	start = 0;
	if (s == NULL)
		return (NULL);
	while (s[start] && is_sp(s[start]))
		start++;
	end = ft_strlen(s);
	while (end > start && is_sp(s[end - 1]))
		end--;
	trimmed = (char *)malloc((end - start + 1) * sizeof(char));
	if (!trimmed)
		return (NULL);
	ft_strlcpy(trimmed, s + start, end - start + 1);
	return (trimmed);
}

/*
#include <stdio.h>
#include <stdlib.h>

int	main(void)
{
	const char	*in[] = {"   Hello World   ", "\n\t 42 School \t\n",
			"Pas d'espace", "      ", "", NULL};
	size_t		i;
	char		*out;

	i = 0;
	while (i < sizeof(in) / sizeof(in[0]))
	{
		out = ft_strtrim(in[i]);
		printf("Input : [%s]\n", in[i] ? in[i] : "(NULL)");
		if (out)
		{
			printf("Output: [%s]\n", out);
			free(out);
		}
		else
			printf("Output: (NULL)\n");
		printf("----------\n");
		i++;
	}
	return (0);
}*/
