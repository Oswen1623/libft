/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucinguy <lucinguy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/14 20:34:58 by lucinguy          #+#    #+#             */
/*   Updated: 2025/10/14 22:10:17 by lucinguy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	unsigned int	i;

	if (!s || !f)
		return ;
	i = 0;
	while (*s)
	{
		f(i++, s++);
	}
	*s++ = '\0';
}
/*
#include <ctype.h>
#include <stdio.h>

void	to_upper_even(unsigned int i, char *c)
{
	if (i % 2 == 0)
		*c = toupper(*c);
}

int	main(void)
{
	char	string[] = "hello\n";

	printf("Before : %s", string);
	ft_striteri(string, to_upper_even);
	printf("After : %s", string);
}*/
