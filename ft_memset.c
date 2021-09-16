/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oipadeol <oipadeol@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/02 19:12:19 by oipadeol          #+#    #+#             */
/*   Updated: 2021/09/15 23:05:05 by oipadeol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void	*ft_memset(void *dest, int b, size_t c)
{
	size_t			i;
	unsigned char	*ptr;

	i = 0;
	ptr = dest;
	while (i < c)
	{
		ptr[i] = b;
		i++;
	}
	return (0);
}
