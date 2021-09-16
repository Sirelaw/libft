/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oipadeol <oipadeol@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/04 19:39:13 by oipadeol          #+#    #+#             */
/*   Updated: 2021/09/16 17:05:47 by oipadeol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	uc;
	const char		*string;		

	string = s;
	uc = c;
	i = 0;
	while ((string[i] != uc) && (i < n))
		i++;
	if (string[i] == uc)
		return ((char *) &string[i]);
	else
		return (NULL);
}
