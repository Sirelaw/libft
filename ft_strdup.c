/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oipadeol <oipadeol@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/05 21:09:31 by oipadeol          #+#    #+#             */
/*   Updated: 2021/09/13 19:59:35 by oipadeol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*strdup(const char *string1)
{
	char	*string2;
	int		i;

	i = 0;
	while (string1[i] != '\0')
		i++;
	string2 = (char *) malloc(i);
	if (string2 == NULL)
		return (NULL);
	else
	{
		i = 0;
		while (string1)
		{
			string2[i] = string1[i];
			i++;
		}
		string2[i] = '\0';
		return (string2);
	}
}
