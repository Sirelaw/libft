/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oipadeol <oipadeol@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/03 16:23:53 by oipadeol          #+#    #+#             */
/*   Updated: 2021/09/15 23:05:52 by oipadeol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void	*ft_memcpy(void *dest, const void *source, size_t n)
{
	size_t				i;
	unsigned char		*ptrd;
	const unsigned char	*ptrs;

	i = 0;
	ptrd = dest;
	ptrs = source;
	while (i < n)
	{
		ptrd[i] = ptrs[i];
		i++;
	}
	return (0);
}
