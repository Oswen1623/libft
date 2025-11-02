/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucinguy <lucinguy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/15 01:57:46 by lucinguy          #+#    #+#             */
/*   Updated: 2025/10/25 19:40:53 by lucinguy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dsize)
{
	size_t	i;

	i = 0;
	if (!dst || !src)
		return (0);
	while (src[i] && i + 1 < dsize)
	{
		dst[i] = src[i];
		i++;
	}
	if (dsize > 0)
	{
		dst[i] = '\0';
		i++;
	}
	return (ft_strlen(src));
}
