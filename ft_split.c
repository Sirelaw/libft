/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oipadeol <oipadeol@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/07 15:31:29 by oipadeol          #+#    #+#             */
/*   Updated: 2021/09/16 21:01:37 by oipadeol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	free_mallocstr(char **arr, int k)
{
	while (k >= 1)
	{
		free(arr[k - 1]);
		k--;
	}
}

static char	*ft_mallocstr(char *ptr, char delim)
{
	int		i;
	char	*strptr;

	i = 0;
	while (ptr[i] != delim && ptr[i] != '\0')
		i++;
	strptr = (char *) malloc((i + 1) * sizeof(char));
	if (strptr == NULL)
		return (NULL);
	ft_strlcpy(strptr, ptr, i + 1);
	return (strptr);
}

static char	**write_to_arr(char const *str, char **arr, char c)
{
	int	i;
	int	k;
	int	flag;

	k = 0;
	i = 0;
	flag = 1;
	while (str[i])
	{
		if (str[i] == c)
			flag = 1;
		if ((str[i] != c) && (flag == 1))
		{
			arr[k] = (char *) ft_mallocstr(&((char *)str)[i], c);
			if (arr[k] == NULL)
			{
				free_mallocstr(arr, k);
				return (NULL);
			}
			k++;
			flag = 0;
		}
		i++;
	}
	return (arr);
}

static int	get_delimitercount(char const *str, char c)
{
	int	delimitercount;
	int	i;
	int	flag;

	i = 0;
	flag = 0;
	delimitercount = 0;
	while (str[i])
	{
		if (str[i] != c)
			flag = 1;
		if ((str[i] == c) && (flag == 1))
		{
			delimitercount++;
			flag = 0;
		}
		i++;
	}
	return (delimitercount);
}

char	**ft_split(char const *str, char c)
{
	int										delimitercount;
	char									**arr;

	delimitercount = get_delimitercount(str, c);
	arr = malloc((delimitercount + 2) * sizeof(char *));
	if (arr == NULL)
		return (NULL);
	arr[delimitercount + 2] = NULL;
	arr = write_to_arr(str, arr, c);
	if (arr == NULL)
		return (NULL);
	return (arr);
}
