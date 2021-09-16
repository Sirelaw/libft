/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oipadeol <oipadeol@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/03 19:21:42 by oipadeol          #+#    #+#             */
/*   Updated: 2021/09/14 22:04:08 by oipadeol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	i;

	i = 0;
	while (i <= dstsize - 1)
	{
		if (i == dstsize - 1)
			dst[i] = '\0';
		else
			dst[i] = src[i];
		if (src[i] == '\0')
			break ;
		i++;
	}
	return (i);
}
