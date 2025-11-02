/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucinguy <lucinguy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/25 20:13:27 by lucinguy          #+#    #+#             */
/*   Updated: 2025/10/25 20:31:29 by lucinguy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void			*ptr;
	size_t			total;
	unsigned char	*p;

	if (size != 0 && nmemb > (size_t)(-1) / size)
		return (NULL);
	total = nmemb * size;
	if (total == 0)
		total = 1;
	ptr = malloc(total);
	if (!ptr)
		return (NULL);
	p = (unsigned char *)ptr;
	while (total--)
		*p++ = 0;
	return (ptr);
}
