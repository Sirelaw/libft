/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oipadeol <oipadeol@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/04 20:15:24 by oipadeol          #+#    #+#             */
/*   Updated: 2021/09/16 19:44:23 by oipadeol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	int	i;
	int	num;
	int	sign;

	i = 0;
	num = 0;
	sign = 1;
	while ((str[i] == '-') || (str[i] == '+') || (str[i] == ' '))
	{
		if (str[i] == '-')
			sign = (-1 * sign);
		i++;
	}
	while ((str[i] > 47) && (str[i] < 58))
	{
		num = (num * 10) + (str[i] - 48);
		i++;
	}
	return (sign * num);
}
