/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oipadeol <oipadeol@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/11 12:58:37 by oipadeol          #+#    #+#             */
/*   Updated: 2021/09/16 21:07:27 by oipadeol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*get_chardigits(int num, int numlen, char *chardigits)
{
	while (num > 0)
	{
		chardigits[numlen - 2] = 48 + (num % 10);
		num = num / 10;
		numlen--;
	}
	return (chardigits);
}

static int	num_lenght(int num)
{
	int	numlen;
	int	numcopy;

	numlen = 1;
	numcopy = num;
	if (num < 0)
	{
		numlen++;
		numcopy = num * -1;
	}
	while (numcopy > 0)
	{
		numcopy = numcopy / 10;
		numlen++;
	}
	return (numlen);
}

char	*ft_itoa(int num)
{
	char	*chardigits;
	int		numlen;
	int		sign;

	sign = 1;
	if (num == 0)
		return ("0");
	if (num == -2147483648)
		return ("-2147483648");
	if (num < 0)
		sign = -1;
	numlen = num_lenght(num);
	chardigits = (char *) malloc(numlen * sizeof(char));
	if (chardigits == NULL)
		return (NULL);
	if (num < 0)
		chardigits[0] = '-';
	num = num * sign;
	chardigits[numlen] = '\0';
	chardigits = get_chardigits(num, numlen, chardigits);
	return (chardigits);
}
