/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oipadeol <oipadeol@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/04 18:25:00 by oipadeol          #+#    #+#             */
/*   Updated: 2021/09/13 20:25:22 by oipadeol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strrchr(const char *s, int c)
{
	int	i;

	i = 0;
	while ((s[i]) != '\0')
		i++;
	if (c == '\0')
		return ((char *) &s[i]);
	while ((s[i] != c) && (s[i] >= 0))
		i--;
	if (s[i] == c)
		return ((char *) &s[i]);
	else
		return (NULL);
}
