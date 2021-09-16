/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oipadeol <oipadeol@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/04 19:12:18 by oipadeol          #+#    #+#             */
/*   Updated: 2021/09/15 23:08:51 by oipadeol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_strncmp(const char *string1, const char *string2, size_t n)
{
	size_t	i;

	i = 0;
	while ((string1[i] == string2[i]) && (i < n) && (string1[i] != '\0'))
		i++;
	if (string1[i] == string2[i])
		return (0);
	if (string1[i] > string2[i])
		return (1);
	else
		return (-1);
}
