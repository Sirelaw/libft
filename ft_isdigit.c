/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oipadeol <oipadeol@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/01 16:55:48 by oipadeol          #+#    #+#             */
/*   Updated: 2021/09/12 21:24:14 by oipadeol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isdigit(char a)
{
	if (a < 48 || a > 57)
		return (0);
	else
		return (1);
}
