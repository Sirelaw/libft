/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oipadeol <oipadeol@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/06 21:02:13 by oipadeol          #+#    #+#             */
/*   Updated: 2021/09/16 20:58:14 by oipadeol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*trim_head(char *newstr, char const *set)
{
	int	i;

	i = 0;
	while (newstr[i] == set[i])
	{
		i++;
		if (set[i] == '\0')
		{
			newstr = &newstr[i];
			i = 0;
		}
	}
	return (newstr);
}

static char	*trim_tail(char *newstr, char const *set)
{
	int	i;
	int	j;
	int	k;

	i = ft_strlen(newstr);
	j = ft_strlen(set);
	k = 1;
	while (newstr[i - k] == set[j - k])
	{
		if (j - k == 0)
		{
			newstr[i - k] = '\0';
			k = 0;
			i = ft_strlen(newstr);
		}
		k++;
	}
	return (newstr);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	int		i;
	char	*newstr;

	i = ft_strlen(s1);
	newstr = (char *)malloc(i + 1);
	if (newstr == NULL)
		return (NULL);
	ft_strlcpy(newstr, s1, i + 1);
	newstr = trim_head(newstr, set);
	newstr = trim_tail(newstr, set);
	return (newstr);
}
