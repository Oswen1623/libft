/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucinguy <lucinguy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/14 23:46:49 by lucinguy          #+#    #+#             */
/*   Updated: 2025/10/25 17:58:47 by lucinguy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	size1;
	size_t	size2;
	char	*newstring;
	int		i;
	int		j;

	size1 = ft_strlen(s1);
	size2 = ft_strlen(s2);
	newstring = (char *)malloc((size1 + size2 + 1) * sizeof(char));
	i = 0;
	j = 0;
	while (s1[i])
		newstring[j++] = s1[i++];
	i = 0;
	while (s2[i])
		newstring[j++] = s2[i++];
	newstring[j] = '\0';
	return (newstring);
}
/*
#include <stdio.h>

int	main(void)
{
	char	s1[] = "hello ";
	char	s2[] = "world\n";
	char	*s3;

	s3 = ft_strjoin(s1, s2);
	printf("%s", s3);
	free(s3);
}
*/