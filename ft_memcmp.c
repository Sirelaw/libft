/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oipadeol <oipadeol@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/04 19:48:00 by oipadeol          #+#    #+#             */
/*   Updated: 2021/09/16 17:38:45 by oipadeol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const char *string1, const char *string2, size_t n)
{
	size_t	i;

	i = 0;
	while ((string1[i] == string2[i]) && (i < n))
		i++;
	if (string1[i] == string2[i])
		return (0);
	if (string1[i] > string2[i])
		return (1);
	else
		return (-1);
}
