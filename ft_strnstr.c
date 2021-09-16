/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oipadeol <oipadeol@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/04 20:15:50 by oipadeol          #+#    #+#             */
/*   Updated: 2021/09/16 17:54:54 by oipadeol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t n)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	if (needle[j] == '\0')
		return ((char *) haystack);
	while ((needle[j] != '\0') && (i < n))
	{
		if ((haystack[i] != needle[j]) && (i < n))
		{
			i++;
			j = 0;
		}
		while ((haystack[i] == needle[j]) && (i < n))
		{
			i++;
			j++;
		}
	}
	if ((needle[j] == '\0') && (haystack[i - 1] == needle[j - 1]))
		return ((char *) &haystack[i - j]);
	else
		return (NULL);
}
