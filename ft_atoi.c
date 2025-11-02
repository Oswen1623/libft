/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucinguy <lucinguy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/25 20:44:59 by lucinguy          #+#    #+#             */
/*   Updated: 2025/10/29 16:26:09 by lucinguy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	int		accumulator;
	int		sign;
	int		curr_val;
	size_t	i;

	accumulator = 0;
	sign = 1;
	curr_val = 0;
	i = 0;
	if (str[0] == '-')
	{
		sign = -1;
		i++;
	}
	if (str[0] == '+')
		i++;
	while (str[i] != '\0')
	{
		curr_val = (int)(str[i] - '0');
		if (curr_val < 0 || curr_val > 9)
			return (accumulator);
		accumulator = accumulator * 10 + curr_val;
		i++;
	}
	return (sign * accumulator);
}
/*
#include <stdio.h>

int	main(void)
{
	char	test1[] = "234";
	char	test2[] = "+6543";
	char	test3[] = "--1234";
	char	test4[] = "9B123";
	int		a;
	int		b;
	int		c;
	int		d;

	a = ft_atoi(test1);
	b = ft_atoi(test2);
	c = ft_atoi(test3);
	d = ft_atoi(test4);
	printf("%d, %d, %d, %d\n", a, b, c, d);
	return (0);
}
*/