/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oipadeol <oipadeol@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/05 21:52:12 by oipadeol          #+#    #+#             */
/*   Updated: 2021/09/16 18:14:35 by oipadeol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *string, unsigned int start, size_t len)
{
	size_t	i;
	char	*substr;

	i = 0;
	substr = (char *) malloc(len);
	if (substr == NULL)
		return (NULL);
	while ((string[start + i] != '\0') && (i < len))
	{
		substr[i] = string[start + i];
	}
	return (substr);
}
